package Module::Build::Platform::Unix;

use strict;
use warnings;
our $VERSION = '0.4212';
$VERSION = eval $VERSION;
use Module::Build::Base;

our @ISA = qw(Module::Build::Base);

sub is_executable {
  # We consider the owner bit to be authoritative on a file, because
  # -x will always return true if the user is root and *any*
  # executable bit is set.  The -x test seems to try to answer the
  # question "can I execute this file", but I think we want "is this
  # file executable".

  my ($self, $file) = @_;
  return +(stat $file)[2] & 0100;
}

sub _startperl { "#! " . shift()->perl }

sub _construct {
  my $self = shift()->SUPER::_construct(@_);

  # perl 5.8.1-RC[1-3] had some broken %Config entries, and
  # unfortunately Red Hat 9 shipped it like that.  Fix 'em up here.
  my $c = $self->{config};
  for (qw(siteman1 siteman3 vendorman1 vendorman3)) {
    $c->{"install${_}dir"} ||= $c->{"install${_}"};
  }

  return $self;
}

# Open group says username should be portable filename characters,
# but some Unix OS working with ActiveDirectory wind up with user-names
# with back-slashes in the name.  The new code below is very liberal
# in what it accepts.
sub _detildefy {
  my ($self, $value) = @_;
  $value =~ s[^~([^/]+)?(?=/|$)]   # tilde with optional username
    [$1 ?
     (eval{(getpwnam $1)[7]} || "~$1") :
     ($ENV{HOME} || eval{(getpwuid $>)[7]} || glob("~"))
    ]ex;
  return $value;
}

1;
__END__


=head1 NAME

Module::Build::Platform::Unix - Builder class for Unix platforms

=head1 DESCRIPTION

The sole purpose of this module is to inherit from
C<Module::Build::Base>.  Please see the L<Module::Build> for the docs.

=head1 AUTHOR

Ken Williams <kwilliams@cpan.org>

=head1 SEE ALSO

perl(1), Module::Build(3), ExtUtils::MakeMaker(3)

=cut
