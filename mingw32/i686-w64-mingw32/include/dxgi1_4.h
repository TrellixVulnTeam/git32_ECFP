/*** Autogenerated by WIDL 1.6 from dxgi1_4.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __dxgi1_4_h__
#define __dxgi1_4_h__

/* Forward declarations */

#ifndef __IDXGISwapChain3_FWD_DEFINED__
#define __IDXGISwapChain3_FWD_DEFINED__
typedef interface IDXGISwapChain3 IDXGISwapChain3;
#endif

/* Headers for imported files */

#include <dxgi1_3.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum DXGI_COLOR_SPACE_TYPE {
    DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 = 0,
    DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 = 1,
    DXGI_COLOR_SPACE_RGB_STUDIO_G22_NONE_P709 = 2,
    DXGI_COLOR_SPACE_RGB_STUDIO_G22_NONE_P2020 = 3,
    DXGI_COLOR_SPACE_RESERVED = 4,
    DXGI_COLOR_SPACE_YCBCR_FULL_G22_NONE_P709_X601 = 5,
    DXGI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P601 = 6,
    DXGI_COLOR_SPACE_YCBCR_FULL_G22_LEFT_P601 = 7,
    DXGI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P709 = 8,
    DXGI_COLOR_SPACE_YCBCR_FULL_G22_LEFT_P709 = 9,
    DXGI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P2020 = 10,
    DXGI_COLOR_SPACE_YCBCR_FULL_G22_LEFT_P2020 = 11,
    DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020 = 12,
    DXGI_COLOR_SPACE_YCBCR_STUDIO_G2084_LEFT_P2020 = 13,
    DXGI_COLOR_SPACE_RGB_STUDIO_G2084_NONE_P2020 = 14,
    DXGI_COLOR_SPACE_YCBCR_STUDIO_G22_TOPLEFT_P2020 = 15,
    DXGI_COLOR_SPACE_YCBCR_STUDIO_G2084_TOPLEFT_P2020 = 16,
    DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P2020 = 17,
    DXGI_COLOR_SPACE_CUSTOM = 0xffffffff
} DXGI_COLOR_SPACE_TYPE;
/*****************************************************************************
 * IDXGISwapChain3 interface
 */
#ifndef __IDXGISwapChain3_INTERFACE_DEFINED__
#define __IDXGISwapChain3_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDXGISwapChain3, 0x94d99bdb, 0xf1f8, 0x4ab0, 0xb2,0x36, 0x7d,0xa0,0x17,0x0e,0xda,0xb1);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("94d99bdb-f1f8-4ab0-b236-7da0170edab1")
IDXGISwapChain3 : public IDXGISwapChain2
{
    virtual UINT STDMETHODCALLTYPE GetCurrentBackBufferIndex(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE CheckColorSpaceSupport(
        DXGI_COLOR_SPACE_TYPE ColorSpace,
        UINT *pColorSpaceSupport) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetColorSpace1(
        DXGI_COLOR_SPACE_TYPE ColorSpace) = 0;

    virtual HRESULT STDMETHODCALLTYPE ResizeBuffers1(
        UINT BufferCount,
        UINT Width,
        UINT Height,
        DXGI_FORMAT Format,
        UINT SwapChainFlags,
        const UINT *pCreationNodeMask,
        IUnknown *const *ppPresentQueue) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IDXGISwapChain3, 0x94d99bdb, 0xf1f8, 0x4ab0, 0xb2,0x36, 0x7d,0xa0,0x17,0x0e,0xda,0xb1)
#endif
#else
typedef struct IDXGISwapChain3Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDXGISwapChain3* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDXGISwapChain3* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDXGISwapChain3* This);

    /*** IDXGIObject methods ***/
    HRESULT (STDMETHODCALLTYPE *SetPrivateData)(
        IDXGISwapChain3* This,
        REFGUID guid,
        UINT data_size,
        const void *data);

    HRESULT (STDMETHODCALLTYPE *SetPrivateDataInterface)(
        IDXGISwapChain3* This,
        REFGUID guid,
        const IUnknown *object);

    HRESULT (STDMETHODCALLTYPE *GetPrivateData)(
        IDXGISwapChain3* This,
        REFGUID guid,
        UINT *data_size,
        void *data);

    HRESULT (STDMETHODCALLTYPE *GetParent)(
        IDXGISwapChain3* This,
        REFIID riid,
        void **parent);

    /*** IDXGIDeviceSubObject methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDevice)(
        IDXGISwapChain3* This,
        REFIID riid,
        void **device);

    /*** IDXGISwapChain methods ***/
    HRESULT (STDMETHODCALLTYPE *Present)(
        IDXGISwapChain3* This,
        UINT sync_interval,
        UINT flags);

    HRESULT (STDMETHODCALLTYPE *GetBuffer)(
        IDXGISwapChain3* This,
        UINT buffer_idx,
        REFIID riid,
        void **surface);

    HRESULT (STDMETHODCALLTYPE *SetFullscreenState)(
        IDXGISwapChain3* This,
        WINBOOL fullscreen,
        IDXGIOutput *target);

    HRESULT (STDMETHODCALLTYPE *GetFullscreenState)(
        IDXGISwapChain3* This,
        WINBOOL *fullscreen,
        IDXGIOutput **target);

    HRESULT (STDMETHODCALLTYPE *GetDesc)(
        IDXGISwapChain3* This,
        DXGI_SWAP_CHAIN_DESC *desc);

    HRESULT (STDMETHODCALLTYPE *ResizeBuffers)(
        IDXGISwapChain3* This,
        UINT buffer_count,
        UINT width,
        UINT height,
        DXGI_FORMAT format,
        UINT flags);

    HRESULT (STDMETHODCALLTYPE *ResizeTarget)(
        IDXGISwapChain3* This,
        const DXGI_MODE_DESC *target_mode_desc);

    HRESULT (STDMETHODCALLTYPE *GetContainingOutput)(
        IDXGISwapChain3* This,
        IDXGIOutput **output);

    HRESULT (STDMETHODCALLTYPE *GetFrameStatistics)(
        IDXGISwapChain3* This,
        DXGI_FRAME_STATISTICS *stats);

    HRESULT (STDMETHODCALLTYPE *GetLastPresentCount)(
        IDXGISwapChain3* This,
        UINT *last_present_count);

    /*** IDXGISwapChain1 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDesc1)(
        IDXGISwapChain3* This,
        DXGI_SWAP_CHAIN_DESC1 *pDesc);

    HRESULT (STDMETHODCALLTYPE *GetFullscreenDesc)(
        IDXGISwapChain3* This,
        DXGI_SWAP_CHAIN_FULLSCREEN_DESC *pDesc);

    HRESULT (STDMETHODCALLTYPE *GetHwnd)(
        IDXGISwapChain3* This,
        HWND *pHwnd);

    HRESULT (STDMETHODCALLTYPE *GetCoreWindow)(
        IDXGISwapChain3* This,
        REFIID refiid,
        void **ppUnk);

    HRESULT (STDMETHODCALLTYPE *Present1)(
        IDXGISwapChain3* This,
        UINT SyncInterval,
        UINT PresentFlags,
        const DXGI_PRESENT_PARAMETERS *pPresentParameters);

    WINBOOL (STDMETHODCALLTYPE *IsTemporaryMonoSupported)(
        IDXGISwapChain3* This);

    HRESULT (STDMETHODCALLTYPE *GetRestrictToOutput)(
        IDXGISwapChain3* This,
        IDXGIOutput **ppRestrictToOutput);

    HRESULT (STDMETHODCALLTYPE *SetBackgroundColor)(
        IDXGISwapChain3* This,
        const DXGI_RGBA *pColor);

    HRESULT (STDMETHODCALLTYPE *GetBackgroundColor)(
        IDXGISwapChain3* This,
        DXGI_RGBA *pColor);

    HRESULT (STDMETHODCALLTYPE *SetRotation)(
        IDXGISwapChain3* This,
        DXGI_MODE_ROTATION Rotation);

    HRESULT (STDMETHODCALLTYPE *GetRotation)(
        IDXGISwapChain3* This,
        DXGI_MODE_ROTATION *pRotation);

    /*** IDXGISwapChain2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetSourceSize)(
        IDXGISwapChain3* This,
        UINT width,
        UINT height);

    HRESULT (STDMETHODCALLTYPE *GetSourceSize)(
        IDXGISwapChain3* This,
        UINT *width,
        UINT *height);

    HRESULT (STDMETHODCALLTYPE *SetMaximumFrameLatency)(
        IDXGISwapChain3* This,
        UINT max_latency);

    HRESULT (STDMETHODCALLTYPE *GetMaximumFrameLatency)(
        IDXGISwapChain3* This,
        UINT *max_latency);

    HANDLE (STDMETHODCALLTYPE *GetFrameLatencyWaitableObject)(
        IDXGISwapChain3* This);

    HRESULT (STDMETHODCALLTYPE *SetMatrixTransform)(
        IDXGISwapChain3* This,
        const DXGI_MATRIX_3X2_F *matrix);

    HRESULT (STDMETHODCALLTYPE *GetMatrixTransform)(
        IDXGISwapChain3* This,
        DXGI_MATRIX_3X2_F *matrix);

    /*** IDXGISwapChain3 methods ***/
    UINT (STDMETHODCALLTYPE *GetCurrentBackBufferIndex)(
        IDXGISwapChain3* This);

    HRESULT (STDMETHODCALLTYPE *CheckColorSpaceSupport)(
        IDXGISwapChain3* This,
        DXGI_COLOR_SPACE_TYPE ColorSpace,
        UINT *pColorSpaceSupport);

    HRESULT (STDMETHODCALLTYPE *SetColorSpace1)(
        IDXGISwapChain3* This,
        DXGI_COLOR_SPACE_TYPE ColorSpace);

    HRESULT (STDMETHODCALLTYPE *ResizeBuffers1)(
        IDXGISwapChain3* This,
        UINT BufferCount,
        UINT Width,
        UINT Height,
        DXGI_FORMAT Format,
        UINT SwapChainFlags,
        const UINT *pCreationNodeMask,
        IUnknown *const *ppPresentQueue);

    END_INTERFACE
} IDXGISwapChain3Vtbl;
interface IDXGISwapChain3 {
    CONST_VTBL IDXGISwapChain3Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IDXGISwapChain3_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IDXGISwapChain3_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDXGISwapChain3_Release(This) (This)->lpVtbl->Release(This)
/*** IDXGIObject methods ***/
#define IDXGISwapChain3_SetPrivateData(This,guid,data_size,data) (This)->lpVtbl->SetPrivateData(This,guid,data_size,data)
#define IDXGISwapChain3_SetPrivateDataInterface(This,guid,object) (This)->lpVtbl->SetPrivateDataInterface(This,guid,object)
#define IDXGISwapChain3_GetPrivateData(This,guid,data_size,data) (This)->lpVtbl->GetPrivateData(This,guid,data_size,data)
#define IDXGISwapChain3_GetParent(This,riid,parent) (This)->lpVtbl->GetParent(This,riid,parent)
/*** IDXGIDeviceSubObject methods ***/
#define IDXGISwapChain3_GetDevice(This,riid,device) (This)->lpVtbl->GetDevice(This,riid,device)
/*** IDXGISwapChain methods ***/
#define IDXGISwapChain3_Present(This,sync_interval,flags) (This)->lpVtbl->Present(This,sync_interval,flags)
#define IDXGISwapChain3_GetBuffer(This,buffer_idx,riid,surface) (This)->lpVtbl->GetBuffer(This,buffer_idx,riid,surface)
#define IDXGISwapChain3_SetFullscreenState(This,fullscreen,target) (This)->lpVtbl->SetFullscreenState(This,fullscreen,target)
#define IDXGISwapChain3_GetFullscreenState(This,fullscreen,target) (This)->lpVtbl->GetFullscreenState(This,fullscreen,target)
#define IDXGISwapChain3_GetDesc(This,desc) (This)->lpVtbl->GetDesc(This,desc)
#define IDXGISwapChain3_ResizeBuffers(This,buffer_count,width,height,format,flags) (This)->lpVtbl->ResizeBuffers(This,buffer_count,width,height,format,flags)
#define IDXGISwapChain3_ResizeTarget(This,target_mode_desc) (This)->lpVtbl->ResizeTarget(This,target_mode_desc)
#define IDXGISwapChain3_GetContainingOutput(This,output) (This)->lpVtbl->GetContainingOutput(This,output)
#define IDXGISwapChain3_GetFrameStatistics(This,stats) (This)->lpVtbl->GetFrameStatistics(This,stats)
#define IDXGISwapChain3_GetLastPresentCount(This,last_present_count) (This)->lpVtbl->GetLastPresentCount(This,last_present_count)
/*** IDXGISwapChain1 methods ***/
#define IDXGISwapChain3_GetDesc1(This,pDesc) (This)->lpVtbl->GetDesc1(This,pDesc)
#define IDXGISwapChain3_GetFullscreenDesc(This,pDesc) (This)->lpVtbl->GetFullscreenDesc(This,pDesc)
#define IDXGISwapChain3_GetHwnd(This,pHwnd) (This)->lpVtbl->GetHwnd(This,pHwnd)
#define IDXGISwapChain3_GetCoreWindow(This,refiid,ppUnk) (This)->lpVtbl->GetCoreWindow(This,refiid,ppUnk)
#define IDXGISwapChain3_Present1(This,SyncInterval,PresentFlags,pPresentParameters) (This)->lpVtbl->Present1(This,SyncInterval,PresentFlags,pPresentParameters)
#define IDXGISwapChain3_IsTemporaryMonoSupported(This) (This)->lpVtbl->IsTemporaryMonoSupported(This)
#define IDXGISwapChain3_GetRestrictToOutput(This,ppRestrictToOutput) (This)->lpVtbl->GetRestrictToOutput(This,ppRestrictToOutput)
#define IDXGISwapChain3_SetBackgroundColor(This,pColor) (This)->lpVtbl->SetBackgroundColor(This,pColor)
#define IDXGISwapChain3_GetBackgroundColor(This,pColor) (This)->lpVtbl->GetBackgroundColor(This,pColor)
#define IDXGISwapChain3_SetRotation(This,Rotation) (This)->lpVtbl->SetRotation(This,Rotation)
#define IDXGISwapChain3_GetRotation(This,pRotation) (This)->lpVtbl->GetRotation(This,pRotation)
/*** IDXGISwapChain2 methods ***/
#define IDXGISwapChain3_SetSourceSize(This,width,height) (This)->lpVtbl->SetSourceSize(This,width,height)
#define IDXGISwapChain3_GetSourceSize(This,width,height) (This)->lpVtbl->GetSourceSize(This,width,height)
#define IDXGISwapChain3_SetMaximumFrameLatency(This,max_latency) (This)->lpVtbl->SetMaximumFrameLatency(This,max_latency)
#define IDXGISwapChain3_GetMaximumFrameLatency(This,max_latency) (This)->lpVtbl->GetMaximumFrameLatency(This,max_latency)
#define IDXGISwapChain3_GetFrameLatencyWaitableObject(This) (This)->lpVtbl->GetFrameLatencyWaitableObject(This)
#define IDXGISwapChain3_SetMatrixTransform(This,matrix) (This)->lpVtbl->SetMatrixTransform(This,matrix)
#define IDXGISwapChain3_GetMatrixTransform(This,matrix) (This)->lpVtbl->GetMatrixTransform(This,matrix)
/*** IDXGISwapChain3 methods ***/
#define IDXGISwapChain3_GetCurrentBackBufferIndex(This) (This)->lpVtbl->GetCurrentBackBufferIndex(This)
#define IDXGISwapChain3_CheckColorSpaceSupport(This,ColorSpace,pColorSpaceSupport) (This)->lpVtbl->CheckColorSpaceSupport(This,ColorSpace,pColorSpaceSupport)
#define IDXGISwapChain3_SetColorSpace1(This,ColorSpace) (This)->lpVtbl->SetColorSpace1(This,ColorSpace)
#define IDXGISwapChain3_ResizeBuffers1(This,BufferCount,Width,Height,Format,SwapChainFlags,pCreationNodeMask,ppPresentQueue) (This)->lpVtbl->ResizeBuffers1(This,BufferCount,Width,Height,Format,SwapChainFlags,pCreationNodeMask,ppPresentQueue)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IDXGISwapChain3_QueryInterface(IDXGISwapChain3* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IDXGISwapChain3_AddRef(IDXGISwapChain3* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IDXGISwapChain3_Release(IDXGISwapChain3* This) {
    return This->lpVtbl->Release(This);
}
/*** IDXGIObject methods ***/
static FORCEINLINE HRESULT IDXGISwapChain3_SetPrivateData(IDXGISwapChain3* This,REFGUID guid,UINT data_size,const void *data) {
    return This->lpVtbl->SetPrivateData(This,guid,data_size,data);
}
static FORCEINLINE HRESULT IDXGISwapChain3_SetPrivateDataInterface(IDXGISwapChain3* This,REFGUID guid,const IUnknown *object) {
    return This->lpVtbl->SetPrivateDataInterface(This,guid,object);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetPrivateData(IDXGISwapChain3* This,REFGUID guid,UINT *data_size,void *data) {
    return This->lpVtbl->GetPrivateData(This,guid,data_size,data);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetParent(IDXGISwapChain3* This,REFIID riid,void **parent) {
    return This->lpVtbl->GetParent(This,riid,parent);
}
/*** IDXGIDeviceSubObject methods ***/
static FORCEINLINE HRESULT IDXGISwapChain3_GetDevice(IDXGISwapChain3* This,REFIID riid,void **device) {
    return This->lpVtbl->GetDevice(This,riid,device);
}
/*** IDXGISwapChain methods ***/
static FORCEINLINE HRESULT IDXGISwapChain3_Present(IDXGISwapChain3* This,UINT sync_interval,UINT flags) {
    return This->lpVtbl->Present(This,sync_interval,flags);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetBuffer(IDXGISwapChain3* This,UINT buffer_idx,REFIID riid,void **surface) {
    return This->lpVtbl->GetBuffer(This,buffer_idx,riid,surface);
}
static FORCEINLINE HRESULT IDXGISwapChain3_SetFullscreenState(IDXGISwapChain3* This,WINBOOL fullscreen,IDXGIOutput *target) {
    return This->lpVtbl->SetFullscreenState(This,fullscreen,target);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetFullscreenState(IDXGISwapChain3* This,WINBOOL *fullscreen,IDXGIOutput **target) {
    return This->lpVtbl->GetFullscreenState(This,fullscreen,target);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetDesc(IDXGISwapChain3* This,DXGI_SWAP_CHAIN_DESC *desc) {
    return This->lpVtbl->GetDesc(This,desc);
}
static FORCEINLINE HRESULT IDXGISwapChain3_ResizeBuffers(IDXGISwapChain3* This,UINT buffer_count,UINT width,UINT height,DXGI_FORMAT format,UINT flags) {
    return This->lpVtbl->ResizeBuffers(This,buffer_count,width,height,format,flags);
}
static FORCEINLINE HRESULT IDXGISwapChain3_ResizeTarget(IDXGISwapChain3* This,const DXGI_MODE_DESC *target_mode_desc) {
    return This->lpVtbl->ResizeTarget(This,target_mode_desc);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetContainingOutput(IDXGISwapChain3* This,IDXGIOutput **output) {
    return This->lpVtbl->GetContainingOutput(This,output);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetFrameStatistics(IDXGISwapChain3* This,DXGI_FRAME_STATISTICS *stats) {
    return This->lpVtbl->GetFrameStatistics(This,stats);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetLastPresentCount(IDXGISwapChain3* This,UINT *last_present_count) {
    return This->lpVtbl->GetLastPresentCount(This,last_present_count);
}
/*** IDXGISwapChain1 methods ***/
static FORCEINLINE HRESULT IDXGISwapChain3_GetDesc1(IDXGISwapChain3* This,DXGI_SWAP_CHAIN_DESC1 *pDesc) {
    return This->lpVtbl->GetDesc1(This,pDesc);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetFullscreenDesc(IDXGISwapChain3* This,DXGI_SWAP_CHAIN_FULLSCREEN_DESC *pDesc) {
    return This->lpVtbl->GetFullscreenDesc(This,pDesc);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetHwnd(IDXGISwapChain3* This,HWND *pHwnd) {
    return This->lpVtbl->GetHwnd(This,pHwnd);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetCoreWindow(IDXGISwapChain3* This,REFIID refiid,void **ppUnk) {
    return This->lpVtbl->GetCoreWindow(This,refiid,ppUnk);
}
static FORCEINLINE HRESULT IDXGISwapChain3_Present1(IDXGISwapChain3* This,UINT SyncInterval,UINT PresentFlags,const DXGI_PRESENT_PARAMETERS *pPresentParameters) {
    return This->lpVtbl->Present1(This,SyncInterval,PresentFlags,pPresentParameters);
}
static FORCEINLINE WINBOOL IDXGISwapChain3_IsTemporaryMonoSupported(IDXGISwapChain3* This) {
    return This->lpVtbl->IsTemporaryMonoSupported(This);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetRestrictToOutput(IDXGISwapChain3* This,IDXGIOutput **ppRestrictToOutput) {
    return This->lpVtbl->GetRestrictToOutput(This,ppRestrictToOutput);
}
static FORCEINLINE HRESULT IDXGISwapChain3_SetBackgroundColor(IDXGISwapChain3* This,const DXGI_RGBA *pColor) {
    return This->lpVtbl->SetBackgroundColor(This,pColor);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetBackgroundColor(IDXGISwapChain3* This,DXGI_RGBA *pColor) {
    return This->lpVtbl->GetBackgroundColor(This,pColor);
}
static FORCEINLINE HRESULT IDXGISwapChain3_SetRotation(IDXGISwapChain3* This,DXGI_MODE_ROTATION Rotation) {
    return This->lpVtbl->SetRotation(This,Rotation);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetRotation(IDXGISwapChain3* This,DXGI_MODE_ROTATION *pRotation) {
    return This->lpVtbl->GetRotation(This,pRotation);
}
/*** IDXGISwapChain2 methods ***/
static FORCEINLINE HRESULT IDXGISwapChain3_SetSourceSize(IDXGISwapChain3* This,UINT width,UINT height) {
    return This->lpVtbl->SetSourceSize(This,width,height);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetSourceSize(IDXGISwapChain3* This,UINT *width,UINT *height) {
    return This->lpVtbl->GetSourceSize(This,width,height);
}
static FORCEINLINE HRESULT IDXGISwapChain3_SetMaximumFrameLatency(IDXGISwapChain3* This,UINT max_latency) {
    return This->lpVtbl->SetMaximumFrameLatency(This,max_latency);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetMaximumFrameLatency(IDXGISwapChain3* This,UINT *max_latency) {
    return This->lpVtbl->GetMaximumFrameLatency(This,max_latency);
}
static FORCEINLINE HANDLE IDXGISwapChain3_GetFrameLatencyWaitableObject(IDXGISwapChain3* This) {
    return This->lpVtbl->GetFrameLatencyWaitableObject(This);
}
static FORCEINLINE HRESULT IDXGISwapChain3_SetMatrixTransform(IDXGISwapChain3* This,const DXGI_MATRIX_3X2_F *matrix) {
    return This->lpVtbl->SetMatrixTransform(This,matrix);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetMatrixTransform(IDXGISwapChain3* This,DXGI_MATRIX_3X2_F *matrix) {
    return This->lpVtbl->GetMatrixTransform(This,matrix);
}
/*** IDXGISwapChain3 methods ***/
static FORCEINLINE UINT IDXGISwapChain3_GetCurrentBackBufferIndex(IDXGISwapChain3* This) {
    return This->lpVtbl->GetCurrentBackBufferIndex(This);
}
static FORCEINLINE HRESULT IDXGISwapChain3_CheckColorSpaceSupport(IDXGISwapChain3* This,DXGI_COLOR_SPACE_TYPE ColorSpace,UINT *pColorSpaceSupport) {
    return This->lpVtbl->CheckColorSpaceSupport(This,ColorSpace,pColorSpaceSupport);
}
static FORCEINLINE HRESULT IDXGISwapChain3_SetColorSpace1(IDXGISwapChain3* This,DXGI_COLOR_SPACE_TYPE ColorSpace) {
    return This->lpVtbl->SetColorSpace1(This,ColorSpace);
}
static FORCEINLINE HRESULT IDXGISwapChain3_ResizeBuffers1(IDXGISwapChain3* This,UINT BufferCount,UINT Width,UINT Height,DXGI_FORMAT Format,UINT SwapChainFlags,const UINT *pCreationNodeMask,IUnknown *const *ppPresentQueue) {
    return This->lpVtbl->ResizeBuffers1(This,BufferCount,Width,Height,Format,SwapChainFlags,pCreationNodeMask,ppPresentQueue);
}
#endif
#endif

#endif

UINT STDMETHODCALLTYPE IDXGISwapChain3_GetCurrentBackBufferIndex_Proxy(
    IDXGISwapChain3* This);
void __RPC_STUB IDXGISwapChain3_GetCurrentBackBufferIndex_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IDXGISwapChain3_CheckColorSpaceSupport_Proxy(
    IDXGISwapChain3* This,
    DXGI_COLOR_SPACE_TYPE ColorSpace,
    UINT *pColorSpaceSupport);
void __RPC_STUB IDXGISwapChain3_CheckColorSpaceSupport_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IDXGISwapChain3_SetColorSpace1_Proxy(
    IDXGISwapChain3* This,
    DXGI_COLOR_SPACE_TYPE ColorSpace);
void __RPC_STUB IDXGISwapChain3_SetColorSpace1_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IDXGISwapChain3_ResizeBuffers1_Proxy(
    IDXGISwapChain3* This,
    UINT BufferCount,
    UINT Width,
    UINT Height,
    DXGI_FORMAT Format,
    UINT SwapChainFlags,
    const UINT *pCreationNodeMask,
    IUnknown *const *ppPresentQueue);
void __RPC_STUB IDXGISwapChain3_ResizeBuffers1_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IDXGISwapChain3_INTERFACE_DEFINED__ */

typedef enum DXGI_SWAP_CHAIN_COLOR_SPACE_SUPPORT_FLAG {
    DXGI_SWAP_CHAIN_COLOR_SPACE_SUPPORT_FLAG_PRESENT = 0x1,
    DXGI_SWAP_CHAIN_COLOR_SPACE_SUPPORT_FLAG_OVERLAY_PRESENT = 0x2
} DXGI_SWAP_CHAIN_COLOR_SPACE_SUPPORT_FLAG;
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __dxgi1_4_h__ */
