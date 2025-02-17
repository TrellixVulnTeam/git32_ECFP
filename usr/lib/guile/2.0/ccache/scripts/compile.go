GOOF----LE-4-2.0='      ]  4       h"      ] g  guile¤	 ¤	g  define-module*¤	 ¤	 ¤	g  scripts¤	g  compile¤	 ¤		g  filenameS¤	
f  scripts/compile.scm¤	g  importsS¤	g  system¤	g  base¤	 ¤	g  selectS¤	g  compile-file¤	 ¤	 ¤	g  target¤	 ¤	 ¤	g  message¤	 ¤	 ¤	g  srfi¤	g  srfi-1¤	 ¤	 ¤	g  srfi-13¤	 ¤	 ¤	 g  srfi-37¤	!  ¤	"! ¤	#g  ice-9¤	$g  format¤	%#$ ¤	&% ¤	'"& ¤	(g  exportsS¤	) ¤	*g  set-current-module¤	+* ¤	,* ¤	-f  Compile a file.¤	.g  %summary¤	/g  current-error-port¤	0f  error: ~{~a~}~%¤	1g  exit¤	2g  fail¤	3g  srfi-37:option¤	4!3 ¤	5!3 ¤	6f  help¤	7h6 ¤	8g  
alist-cons¤	9g  help?¤	:f  version¤	;: ¤	<g  show-version¤	=f  	load-path¤	>L= ¤	?g  	assoc-ref¤	@g  	load-path¤	Af  output¤	BoA ¤	Cg  output-file¤	Df  .`-o' option cannot be specified more than once¤	Ef  warn¤	FWE ¤	Gg  string=?¤	Hg  show-warning-help¤	Ig  warnings¤	Jg  string->symbol¤	Kg  alist-delete¤	Lf  optimize¤	MOL ¤	Ng  	optimize?¤	Of  from¤	PfO ¤	Qg  from¤	Rf  2`--from' option cannot be specified more than once¤	Sf  to¤	TtS ¤	Ug  to¤	Vf  0`--to' option cannot be specified more than once¤	Wf  target¤	XTW ¤	Yf  4`--target' option cannot be specified more than once¤	Zg  %options¤	[g  	args-fold¤	\f  ~A: unrecognized option¤	]g  input-files¤	^] ¤	_@ ¤	`g  unsupported-warning¤	aI` ¤	b^_a ¤	cg  
parse-args¤	df  compile (GNU Guile) ~A~%¤	eg  version¤	ff Copyright (C) 2009, 2011 Free Software Foundation, Inc.
License LGPLv3+: GNU LGPL version 3 or later <http://gnu.org/licenses/lgpl.html>.
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.~%¤	gf  $The available warning types are:~%~%¤	hg  for-each¤	if    ~22A ~A~%¤	jf  `~A'¤	kg  <warning-type>¤	lk ¤	mk ¤	ng  srfi-9¤	on ¤	pg  throw-bad-struct¤	qop ¤	rop ¤	sg  warning-type-name¤	tg  warning-type-description¤	ug  %warning-types¤	vf  ~%¤	wg  warningsS¤	xg  OS¤	yg  scheme¤	zg  objcode¤	{g  
%host-type¤	|f Usage: compile [OPTION] FILE...
Compile each Guile source file FILE into a Guile object.

  -h, --help           print this help message

  -L, --load-path=DIR  add DIR to the front of the module load path
  -o, --output=OFILE   write output to OFILE

  -W, --warn=WARNING   emit warnings of type WARNING; use `--warn=help'
                       for a list of available warnings

  -f, --from=LANG      specify a source language other than `scheme'
  -t, --to=LANG        specify a target language other than `objcode'
  -T, --target=TRIPLET produce bytecode for host TRIPLET

Note that auto-compilation will be turned off.

Report bugs to <~A>.~%¤	}g  %guile-bug-report-address¤	~g  append¤	g  
%load-path¤ g  %load-should-auto-compile¤ f  "`-o' option can only be specified ¤ f  when compiling a single file¤ g  	sigaction¤ g  SIGINT¤ f  interrupted by the user¤ f  wrote `~A'
¤ g  *current-warning-prefix*¤ f   ¤ g  with-target¤ g  output-fileS¤ g  fromS¤ g  toS¤ g  optsS¤ g  main¤C 5 h  K  ]4	
'()5 4, >  "  G   -.R$/01   h(      -  1  3 445  >  "  G  6        g  messages
			'  g  filenamef  scripts/compile.scm
	+
	
	,			,	
		,			,		'	-	 			'


  g  nameg  fail C2R5789        h      ]6            g  opt
		 g  name		 g  arg			 g  result			  g  filenamef  scripts/compile.scm
	2			3			3	 			   C¨ 5;<1        h      ]4>   "  G  
6        g  opt
		 g  name		 g  arg			 g  result			  g  filenamef  scripts/compile.scm
	5			6			7	 			   C¨ 5>?@8      h    Þ   ]456      Ö       g  opt
		 g  name		 g  arg			 g  result			 g  	load-path			  g  filenamef  scripts/compile.scm
	:			;	#			;	5		;	#		;			<	 		<	+		<	 				   C¨ 5B?C2D8   h    Ï   ]45$  66 Ç       g  opt
		 g  name		 g  arg			 g  result			  g  filenamef  scripts/compile.scm
	?			@				@	(		@			@			A			A			B	"		B	 
			   C¨ 5FG6H1?I8JK 
 hH   -  ]45$  4>   "  G  
645454	56%      g  opt
		H g  name		H g  arg			H g  result			H g  warnings		-	H  g  filenamef  scripts/compile.scm
	E			F				F	$		F			F			H		$	I		%	J	&	+	J	8	-	J	&	-	J		3	K	$	4	L	*	=	L	$	>	M	$	B	M	2	F	M	$	H	K	 		H	   C¨ 5M8N  h      ]6            g  opt
		 g  name		 g  arg			 g  result			  g  filenamef  scripts/compile.scm
	P			Q			Q	 			   C¨ 5P?Q2R8J        h(   ×   ]45$  6456    Ï       g  opt
		$ g  name		$ g  arg			$ g  result			$  g  filenamef  scripts/compile.scm
	S			T				T	(		T			T			U			U			V	"		V	(	$	V	 		$	   C¨ 5T?U2V8J        h(   ×   ]45$  6456    Ï       g  opt
		$ g  name		$ g  arg			$ g  result			$  g  filenamef  scripts/compile.scm
	X			Y				Y	(		Y			Y			Z			Z			[	"		[	&	$	[	 		$	   C¨ 5X?2Y8  h    Ï   ]45$  66 Ç       g  opt
		 g  name		 g  arg			 g  result			  g  filenamef  scripts/compile.scm
	]			^				^	(		^			^			_			_			`	"		`	 
			   C¨  	ZR[Z$/\1       h    ·   ]445 >  "  G  6¯       g  opt
		  g  name		  g  arg			  g  result			   g  filenamef  scripts/compile.scm
	f			g			g			g	,		g		 	h	 		 	   C?]8       h    ¾   ]
45 6      ¶       g  file
		 g  result		 g  input-files			  g  filenamef  scripts/compile.scm
	i			j	"			j	4		j	"		j			k			k	*		k	 				   Cb     h   æ   ] 6Þ       g  args
		  g  filenamef  scripts/compile.scm
	b
		o			e	 		  g  nameg  
parse-argsg  documentationf  QParse argument list @var{args} and return an alist with all the relevant
options. CcR$def   h(      ] 445 >  "  G  6              g  filenamef  scripts/compile.scm
	s
		t			t				t	(		t			u		!	u	 		!
  g  nameg  show-version C<R$gh$ijmrst      hH      ]4 §&   
©"  	4 55 §&   ©"  	4 56          g  wt
		E  g  filenamef  scripts/compile.scm
	|			}			~			~	!		~	(	)	~		,			E	}	 			E   Cuv  h0      ] 4>  "  G  4>  "  G  6       g  filenamef  scripts/compile.scm
	z
		{			{			{			|		. 		0 	 		0
  g  nameg  show-warning-help CHRc?9wINxQyUz{]C@$|}1~22       h   n   -  1  3 6 f       g  args
			  g  filenamef  scripts/compile.scm
 ·		 ¸		 ¸	 			


   Ch$       h   P   ] LLLLL 6	H       g  filenamef  scripts/compile.scm
 ¾		 ¿	 		
   C     h(   ~   ]Y4LLLLL  O 5Z6  v       g  file
		&  g  filenamef  scripts/compile.scm
 º		 »		 ¼	@	 ½		& »	 		&   C        hp    -  1  3 
4 54545 45$  	"  45$  "  	4
5$  "  45$  "  454545	$  "  $  *4>  "  G  4
>  "  G  "   4	5  $  0(  "  $  4>  "  G  "   "   4>  "  G  O 6        g  args
		n g  options	n g  help?		n g  o		+	H g  compile-opts		Hn g  t		S	f g  from		fn g  t		q  g  to	 n g  t	  ¢ g  target	 ¢n g  input-files	 ­n g  output-file	 ¸n g  	load-path		 Ãn  g  filenamef  scripts/compile.scm
 
	
 		 		 		 	-	 		 		 	#	  	&	& 	9	( 	&	+ 	#	+ 		. 	 	4 	3	6 	 	: 		? 	 	H 		K 		Q 	1	S 		S 		c 	8	f 		i 		o 	1	q 		q 	  	6  	  	  	1  	  	 ¢ 	 ¥ 	 « 	- ­ 	 ­ 	 ° 	 ¶ 	- ¸ 	 ¸ 	 » 	 Á 	- Ã 	 Ã 	 Ë 	 Ó 	 × 	 Ø 	
 Ý 	 ä 	
 í §	
 ©	 ©	 ª	 ¬	 ­	 ­	# ®	$ ®	% ®	) ¬	* ¯	. ¯	0 °	5 ¯	F ¶	n º	 H		n


  g  nameg  compile CRiRC      C      g  m
		,  g  filenamef  scripts/compile.scm		
	.	(		1	(

	+
	1	Ú	1	Þ	4	²	4	¶	9	Ñ	9	Õ	>	â	>	æ	D		D		O	J	O	N	R	r	R	v	W			W			\	
ª	\	
­	1	
°	/
©	b
y	s
P	z
	 
 Æ
 	
   C6 