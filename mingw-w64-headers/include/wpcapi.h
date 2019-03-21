/*** Autogenerated by WIDL 4.1 from include/wpcapi.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __wpcapi_h__
#define __wpcapi_h__

/* Forward declarations */

#ifndef __IWPCSettings_FWD_DEFINED__
#define __IWPCSettings_FWD_DEFINED__
typedef interface IWPCSettings IWPCSettings;
#ifdef __cplusplus
interface IWPCSettings;
#endif /* __cplusplus */
#endif

#ifndef __IWPCGamesSettings_FWD_DEFINED__
#define __IWPCGamesSettings_FWD_DEFINED__
typedef interface IWPCGamesSettings IWPCGamesSettings;
#ifdef __cplusplus
interface IWPCGamesSettings;
#endif /* __cplusplus */
#endif

#ifndef __IWPCWebSettings_FWD_DEFINED__
#define __IWPCWebSettings_FWD_DEFINED__
typedef interface IWPCWebSettings IWPCWebSettings;
#ifdef __cplusplus
interface IWPCWebSettings;
#endif /* __cplusplus */
#endif

#ifndef __IWindowsParentalControlsCore_FWD_DEFINED__
#define __IWindowsParentalControlsCore_FWD_DEFINED__
typedef interface IWindowsParentalControlsCore IWindowsParentalControlsCore;
#ifdef __cplusplus
interface IWindowsParentalControlsCore;
#endif /* __cplusplus */
#endif

#ifndef __IWindowsParentalControls_FWD_DEFINED__
#define __IWindowsParentalControls_FWD_DEFINED__
typedef interface IWindowsParentalControls IWindowsParentalControls;
#ifdef __cplusplus
interface IWindowsParentalControls;
#endif /* __cplusplus */
#endif

#ifndef __WindowsParentalControls_FWD_DEFINED__
#define __WindowsParentalControls_FWD_DEFINED__
#ifdef __cplusplus
typedef class WindowsParentalControls WindowsParentalControls;
#else
typedef struct WindowsParentalControls WindowsParentalControls;
#endif /* defined __cplusplus */
#endif /* defined __WindowsParentalControls_FWD_DEFINED__ */

/* Headers for imported files */

#include <oaidl.h>
#include <ocidl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum tagWPCFLAG_RESTRICTION {
    WPCFLAG_NO_RESTRICTION = 0x0,
    WPCFLAG_LOGGING_REQUIRED = 0x1,
    WPCFLAG_WEB_FILTERED = 0x2,
    WPCFLAG_HOURS_RESTRICTED = 0x4,
    WPCFLAG_GAMES_BLOCKED = 0x8,
    WPCFLAG_APPS_RESTRICTED = 0x10
} WPCFLAG_RESTRICTION;
/*****************************************************************************
 * IWPCSettings interface
 */
#ifndef __IWPCSettings_INTERFACE_DEFINED__
#define __IWPCSettings_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWPCSettings, 0x8fdf6ca1, 0x0189, 0x47e4, 0xb6,0x70, 0x1a,0x8a,0x46,0x36,0xe3,0x40);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("8fdf6ca1-0189-47e4-b670-1a8a4636e340")
IWPCSettings : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE IsLoggingRequired(
        WINBOOL *pfRequired) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetLastSettingsChangeTime(
        SYSTEMTIME *pTime) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetRestrictions(
        DWORD *pdwRestrictions) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWPCSettings, 0x8fdf6ca1, 0x0189, 0x47e4, 0xb6,0x70, 0x1a,0x8a,0x46,0x36,0xe3,0x40)
#endif
#else
typedef struct IWPCSettingsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWPCSettings *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWPCSettings *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWPCSettings *This);

    /*** IWPCSettings methods ***/
    HRESULT (STDMETHODCALLTYPE *IsLoggingRequired)(
        IWPCSettings *This,
        WINBOOL *pfRequired);

    HRESULT (STDMETHODCALLTYPE *GetLastSettingsChangeTime)(
        IWPCSettings *This,
        SYSTEMTIME *pTime);

    HRESULT (STDMETHODCALLTYPE *GetRestrictions)(
        IWPCSettings *This,
        DWORD *pdwRestrictions);

    END_INTERFACE
} IWPCSettingsVtbl;

interface IWPCSettings {
    CONST_VTBL IWPCSettingsVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWPCSettings_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWPCSettings_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWPCSettings_Release(This) (This)->lpVtbl->Release(This)
/*** IWPCSettings methods ***/
#define IWPCSettings_IsLoggingRequired(This,pfRequired) (This)->lpVtbl->IsLoggingRequired(This,pfRequired)
#define IWPCSettings_GetLastSettingsChangeTime(This,pTime) (This)->lpVtbl->GetLastSettingsChangeTime(This,pTime)
#define IWPCSettings_GetRestrictions(This,pdwRestrictions) (This)->lpVtbl->GetRestrictions(This,pdwRestrictions)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IWPCSettings_QueryInterface(IWPCSettings* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IWPCSettings_AddRef(IWPCSettings* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IWPCSettings_Release(IWPCSettings* This) {
    return This->lpVtbl->Release(This);
}
/*** IWPCSettings methods ***/
static FORCEINLINE HRESULT IWPCSettings_IsLoggingRequired(IWPCSettings* This,WINBOOL *pfRequired) {
    return This->lpVtbl->IsLoggingRequired(This,pfRequired);
}
static FORCEINLINE HRESULT IWPCSettings_GetLastSettingsChangeTime(IWPCSettings* This,SYSTEMTIME *pTime) {
    return This->lpVtbl->GetLastSettingsChangeTime(This,pTime);
}
static FORCEINLINE HRESULT IWPCSettings_GetRestrictions(IWPCSettings* This,DWORD *pdwRestrictions) {
    return This->lpVtbl->GetRestrictions(This,pdwRestrictions);
}
#endif
#endif

#endif


#endif  /* __IWPCSettings_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWPCGamesSettings interface
 */
#ifndef __IWPCGamesSettings_INTERFACE_DEFINED__
#define __IWPCGamesSettings_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWPCGamesSettings, 0x95e87780, 0xe158, 0x489e, 0xb4,0x52, 0xbb,0xb8,0x50,0x79,0x07,0x15);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("95e87780-e158-489e-b452-bbb850790715")
IWPCGamesSettings : public IWPCSettings
{
    virtual HRESULT STDMETHODCALLTYPE IsBlocked(
        GUID guidAppID,
        DWORD *pdwReasons) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWPCGamesSettings, 0x95e87780, 0xe158, 0x489e, 0xb4,0x52, 0xbb,0xb8,0x50,0x79,0x07,0x15)
#endif
#else
typedef struct IWPCGamesSettingsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWPCGamesSettings *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWPCGamesSettings *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWPCGamesSettings *This);

    /*** IWPCSettings methods ***/
    HRESULT (STDMETHODCALLTYPE *IsLoggingRequired)(
        IWPCGamesSettings *This,
        WINBOOL *pfRequired);

    HRESULT (STDMETHODCALLTYPE *GetLastSettingsChangeTime)(
        IWPCGamesSettings *This,
        SYSTEMTIME *pTime);

    HRESULT (STDMETHODCALLTYPE *GetRestrictions)(
        IWPCGamesSettings *This,
        DWORD *pdwRestrictions);

    /*** IWPCGamesSettings methods ***/
    HRESULT (STDMETHODCALLTYPE *IsBlocked)(
        IWPCGamesSettings *This,
        GUID guidAppID,
        DWORD *pdwReasons);

    END_INTERFACE
} IWPCGamesSettingsVtbl;

interface IWPCGamesSettings {
    CONST_VTBL IWPCGamesSettingsVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWPCGamesSettings_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWPCGamesSettings_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWPCGamesSettings_Release(This) (This)->lpVtbl->Release(This)
/*** IWPCSettings methods ***/
#define IWPCGamesSettings_IsLoggingRequired(This,pfRequired) (This)->lpVtbl->IsLoggingRequired(This,pfRequired)
#define IWPCGamesSettings_GetLastSettingsChangeTime(This,pTime) (This)->lpVtbl->GetLastSettingsChangeTime(This,pTime)
#define IWPCGamesSettings_GetRestrictions(This,pdwRestrictions) (This)->lpVtbl->GetRestrictions(This,pdwRestrictions)
/*** IWPCGamesSettings methods ***/
#define IWPCGamesSettings_IsBlocked(This,guidAppID,pdwReasons) (This)->lpVtbl->IsBlocked(This,guidAppID,pdwReasons)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IWPCGamesSettings_QueryInterface(IWPCGamesSettings* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IWPCGamesSettings_AddRef(IWPCGamesSettings* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IWPCGamesSettings_Release(IWPCGamesSettings* This) {
    return This->lpVtbl->Release(This);
}
/*** IWPCSettings methods ***/
static FORCEINLINE HRESULT IWPCGamesSettings_IsLoggingRequired(IWPCGamesSettings* This,WINBOOL *pfRequired) {
    return This->lpVtbl->IsLoggingRequired(This,pfRequired);
}
static FORCEINLINE HRESULT IWPCGamesSettings_GetLastSettingsChangeTime(IWPCGamesSettings* This,SYSTEMTIME *pTime) {
    return This->lpVtbl->GetLastSettingsChangeTime(This,pTime);
}
static FORCEINLINE HRESULT IWPCGamesSettings_GetRestrictions(IWPCGamesSettings* This,DWORD *pdwRestrictions) {
    return This->lpVtbl->GetRestrictions(This,pdwRestrictions);
}
/*** IWPCGamesSettings methods ***/
static FORCEINLINE HRESULT IWPCGamesSettings_IsBlocked(IWPCGamesSettings* This,GUID guidAppID,DWORD *pdwReasons) {
    return This->lpVtbl->IsBlocked(This,guidAppID,pdwReasons);
}
#endif
#endif

#endif


#endif  /* __IWPCGamesSettings_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWPCWebSettings interface
 */
#ifndef __IWPCWebSettings_INTERFACE_DEFINED__
#define __IWPCWebSettings_INTERFACE_DEFINED__

typedef enum tagWPCFLAG_WEB_SETTING {
    WPCFLAG_WEB_SETTING_NOTBLOCKED = 0,
    WPCFLAG_WEB_SETTING_DOWNLOADSBLOCKED = 1
} WPCFLAG_WEB_SETTING;
DEFINE_GUID(IID_IWPCWebSettings, 0xffccbdb8, 0x0992, 0x4c30, 0xb0,0xf1, 0x1c,0xbb,0x09,0xc2,0x40,0xaa);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("ffccbdb8-0992-4c30-b0f1-1cbb09c240aa")
IWPCWebSettings : public IWPCSettings
{
    virtual HRESULT STDMETHODCALLTYPE GetSettings(
        DWORD *pdwSettings) = 0;

    virtual HRESULT STDMETHODCALLTYPE RequestURLOverride(
        HWND hWnd,
        LPCWSTR pcszURL,
        DWORD cURLs,
        LPCWSTR *ppcszSubURLs,
        WINBOOL *pfChanged) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWPCWebSettings, 0xffccbdb8, 0x0992, 0x4c30, 0xb0,0xf1, 0x1c,0xbb,0x09,0xc2,0x40,0xaa)
#endif
#else
typedef struct IWPCWebSettingsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWPCWebSettings *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWPCWebSettings *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWPCWebSettings *This);

    /*** IWPCSettings methods ***/
    HRESULT (STDMETHODCALLTYPE *IsLoggingRequired)(
        IWPCWebSettings *This,
        WINBOOL *pfRequired);

    HRESULT (STDMETHODCALLTYPE *GetLastSettingsChangeTime)(
        IWPCWebSettings *This,
        SYSTEMTIME *pTime);

    HRESULT (STDMETHODCALLTYPE *GetRestrictions)(
        IWPCWebSettings *This,
        DWORD *pdwRestrictions);

    /*** IWPCWebSettings methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSettings)(
        IWPCWebSettings *This,
        DWORD *pdwSettings);

    HRESULT (STDMETHODCALLTYPE *RequestURLOverride)(
        IWPCWebSettings *This,
        HWND hWnd,
        LPCWSTR pcszURL,
        DWORD cURLs,
        LPCWSTR *ppcszSubURLs,
        WINBOOL *pfChanged);

    END_INTERFACE
} IWPCWebSettingsVtbl;

interface IWPCWebSettings {
    CONST_VTBL IWPCWebSettingsVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWPCWebSettings_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWPCWebSettings_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWPCWebSettings_Release(This) (This)->lpVtbl->Release(This)
/*** IWPCSettings methods ***/
#define IWPCWebSettings_IsLoggingRequired(This,pfRequired) (This)->lpVtbl->IsLoggingRequired(This,pfRequired)
#define IWPCWebSettings_GetLastSettingsChangeTime(This,pTime) (This)->lpVtbl->GetLastSettingsChangeTime(This,pTime)
#define IWPCWebSettings_GetRestrictions(This,pdwRestrictions) (This)->lpVtbl->GetRestrictions(This,pdwRestrictions)
/*** IWPCWebSettings methods ***/
#define IWPCWebSettings_GetSettings(This,pdwSettings) (This)->lpVtbl->GetSettings(This,pdwSettings)
#define IWPCWebSettings_RequestURLOverride(This,hWnd,pcszURL,cURLs,ppcszSubURLs,pfChanged) (This)->lpVtbl->RequestURLOverride(This,hWnd,pcszURL,cURLs,ppcszSubURLs,pfChanged)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IWPCWebSettings_QueryInterface(IWPCWebSettings* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IWPCWebSettings_AddRef(IWPCWebSettings* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IWPCWebSettings_Release(IWPCWebSettings* This) {
    return This->lpVtbl->Release(This);
}
/*** IWPCSettings methods ***/
static FORCEINLINE HRESULT IWPCWebSettings_IsLoggingRequired(IWPCWebSettings* This,WINBOOL *pfRequired) {
    return This->lpVtbl->IsLoggingRequired(This,pfRequired);
}
static FORCEINLINE HRESULT IWPCWebSettings_GetLastSettingsChangeTime(IWPCWebSettings* This,SYSTEMTIME *pTime) {
    return This->lpVtbl->GetLastSettingsChangeTime(This,pTime);
}
static FORCEINLINE HRESULT IWPCWebSettings_GetRestrictions(IWPCWebSettings* This,DWORD *pdwRestrictions) {
    return This->lpVtbl->GetRestrictions(This,pdwRestrictions);
}
/*** IWPCWebSettings methods ***/
static FORCEINLINE HRESULT IWPCWebSettings_GetSettings(IWPCWebSettings* This,DWORD *pdwSettings) {
    return This->lpVtbl->GetSettings(This,pdwSettings);
}
static FORCEINLINE HRESULT IWPCWebSettings_RequestURLOverride(IWPCWebSettings* This,HWND hWnd,LPCWSTR pcszURL,DWORD cURLs,LPCWSTR *ppcszSubURLs,WINBOOL *pfChanged) {
    return This->lpVtbl->RequestURLOverride(This,hWnd,pcszURL,cURLs,ppcszSubURLs,pfChanged);
}
#endif
#endif

#endif


#endif  /* __IWPCWebSettings_INTERFACE_DEFINED__ */

typedef enum tagWPCFLAG_VISIBILITY {
    WPCFLAG_WPC_VISIBLE = 0,
    WPCFLAG_WPC_HIDDEN = 1
} WPCFLAG_VISIBILITY;
/*****************************************************************************
 * IWindowsParentalControlsCore interface
 */
#ifndef __IWindowsParentalControlsCore_INTERFACE_DEFINED__
#define __IWindowsParentalControlsCore_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWindowsParentalControlsCore, 0x4ff40a0f, 0x3f3b, 0x4d7c, 0xa4,0x1b, 0x4f,0x39,0xd7,0xb4,0x4d,0x05);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("4ff40a0f-3f3b-4d7c-a41b-4f39d7b44d05")
IWindowsParentalControlsCore : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetVisibility(
        WPCFLAG_VISIBILITY *peVisibility) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetUserSettings(
        LPCWSTR pcszSID,
        IWPCSettings **ppSettings) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetWebSettings(
        LPCWSTR pcszSID,
        IWPCWebSettings **ppSettings) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetWebFilterInfo(
        GUID *pguidID,
        LPWSTR *ppszName) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWindowsParentalControlsCore, 0x4ff40a0f, 0x3f3b, 0x4d7c, 0xa4,0x1b, 0x4f,0x39,0xd7,0xb4,0x4d,0x05)
#endif
#else
typedef struct IWindowsParentalControlsCoreVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWindowsParentalControlsCore *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWindowsParentalControlsCore *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWindowsParentalControlsCore *This);

    /*** IWindowsParentalControlsCore methods ***/
    HRESULT (STDMETHODCALLTYPE *GetVisibility)(
        IWindowsParentalControlsCore *This,
        WPCFLAG_VISIBILITY *peVisibility);

    HRESULT (STDMETHODCALLTYPE *GetUserSettings)(
        IWindowsParentalControlsCore *This,
        LPCWSTR pcszSID,
        IWPCSettings **ppSettings);

    HRESULT (STDMETHODCALLTYPE *GetWebSettings)(
        IWindowsParentalControlsCore *This,
        LPCWSTR pcszSID,
        IWPCWebSettings **ppSettings);

    HRESULT (STDMETHODCALLTYPE *GetWebFilterInfo)(
        IWindowsParentalControlsCore *This,
        GUID *pguidID,
        LPWSTR *ppszName);

    END_INTERFACE
} IWindowsParentalControlsCoreVtbl;

interface IWindowsParentalControlsCore {
    CONST_VTBL IWindowsParentalControlsCoreVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWindowsParentalControlsCore_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWindowsParentalControlsCore_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWindowsParentalControlsCore_Release(This) (This)->lpVtbl->Release(This)
/*** IWindowsParentalControlsCore methods ***/
#define IWindowsParentalControlsCore_GetVisibility(This,peVisibility) (This)->lpVtbl->GetVisibility(This,peVisibility)
#define IWindowsParentalControlsCore_GetUserSettings(This,pcszSID,ppSettings) (This)->lpVtbl->GetUserSettings(This,pcszSID,ppSettings)
#define IWindowsParentalControlsCore_GetWebSettings(This,pcszSID,ppSettings) (This)->lpVtbl->GetWebSettings(This,pcszSID,ppSettings)
#define IWindowsParentalControlsCore_GetWebFilterInfo(This,pguidID,ppszName) (This)->lpVtbl->GetWebFilterInfo(This,pguidID,ppszName)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IWindowsParentalControlsCore_QueryInterface(IWindowsParentalControlsCore* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IWindowsParentalControlsCore_AddRef(IWindowsParentalControlsCore* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IWindowsParentalControlsCore_Release(IWindowsParentalControlsCore* This) {
    return This->lpVtbl->Release(This);
}
/*** IWindowsParentalControlsCore methods ***/
static FORCEINLINE HRESULT IWindowsParentalControlsCore_GetVisibility(IWindowsParentalControlsCore* This,WPCFLAG_VISIBILITY *peVisibility) {
    return This->lpVtbl->GetVisibility(This,peVisibility);
}
static FORCEINLINE HRESULT IWindowsParentalControlsCore_GetUserSettings(IWindowsParentalControlsCore* This,LPCWSTR pcszSID,IWPCSettings **ppSettings) {
    return This->lpVtbl->GetUserSettings(This,pcszSID,ppSettings);
}
static FORCEINLINE HRESULT IWindowsParentalControlsCore_GetWebSettings(IWindowsParentalControlsCore* This,LPCWSTR pcszSID,IWPCWebSettings **ppSettings) {
    return This->lpVtbl->GetWebSettings(This,pcszSID,ppSettings);
}
static FORCEINLINE HRESULT IWindowsParentalControlsCore_GetWebFilterInfo(IWindowsParentalControlsCore* This,GUID *pguidID,LPWSTR *ppszName) {
    return This->lpVtbl->GetWebFilterInfo(This,pguidID,ppszName);
}
#endif
#endif

#endif


#endif  /* __IWindowsParentalControlsCore_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWindowsParentalControls interface
 */
#ifndef __IWindowsParentalControls_INTERFACE_DEFINED__
#define __IWindowsParentalControls_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWindowsParentalControls, 0x28b4d88b, 0xe072, 0x49e6, 0x80,0x4d, 0x26,0xed,0xbe,0x21,0xa7,0xb9);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("28b4d88b-e072-49e6-804d-26edbe21a7b9")
IWindowsParentalControls : public IWindowsParentalControlsCore
{
    virtual HRESULT STDMETHODCALLTYPE GetGamesSettings(
        LPCWSTR pcszSID,
        IWPCGamesSettings **ppSettings) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWindowsParentalControls, 0x28b4d88b, 0xe072, 0x49e6, 0x80,0x4d, 0x26,0xed,0xbe,0x21,0xa7,0xb9)
#endif
#else
typedef struct IWindowsParentalControlsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWindowsParentalControls *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWindowsParentalControls *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWindowsParentalControls *This);

    /*** IWindowsParentalControlsCore methods ***/
    HRESULT (STDMETHODCALLTYPE *GetVisibility)(
        IWindowsParentalControls *This,
        WPCFLAG_VISIBILITY *peVisibility);

    HRESULT (STDMETHODCALLTYPE *GetUserSettings)(
        IWindowsParentalControls *This,
        LPCWSTR pcszSID,
        IWPCSettings **ppSettings);

    HRESULT (STDMETHODCALLTYPE *GetWebSettings)(
        IWindowsParentalControls *This,
        LPCWSTR pcszSID,
        IWPCWebSettings **ppSettings);

    HRESULT (STDMETHODCALLTYPE *GetWebFilterInfo)(
        IWindowsParentalControls *This,
        GUID *pguidID,
        LPWSTR *ppszName);

    /*** IWindowsParentalControls methods ***/
    HRESULT (STDMETHODCALLTYPE *GetGamesSettings)(
        IWindowsParentalControls *This,
        LPCWSTR pcszSID,
        IWPCGamesSettings **ppSettings);

    END_INTERFACE
} IWindowsParentalControlsVtbl;

interface IWindowsParentalControls {
    CONST_VTBL IWindowsParentalControlsVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWindowsParentalControls_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWindowsParentalControls_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWindowsParentalControls_Release(This) (This)->lpVtbl->Release(This)
/*** IWindowsParentalControlsCore methods ***/
#define IWindowsParentalControls_GetVisibility(This,peVisibility) (This)->lpVtbl->GetVisibility(This,peVisibility)
#define IWindowsParentalControls_GetUserSettings(This,pcszSID,ppSettings) (This)->lpVtbl->GetUserSettings(This,pcszSID,ppSettings)
#define IWindowsParentalControls_GetWebSettings(This,pcszSID,ppSettings) (This)->lpVtbl->GetWebSettings(This,pcszSID,ppSettings)
#define IWindowsParentalControls_GetWebFilterInfo(This,pguidID,ppszName) (This)->lpVtbl->GetWebFilterInfo(This,pguidID,ppszName)
/*** IWindowsParentalControls methods ***/
#define IWindowsParentalControls_GetGamesSettings(This,pcszSID,ppSettings) (This)->lpVtbl->GetGamesSettings(This,pcszSID,ppSettings)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IWindowsParentalControls_QueryInterface(IWindowsParentalControls* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IWindowsParentalControls_AddRef(IWindowsParentalControls* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IWindowsParentalControls_Release(IWindowsParentalControls* This) {
    return This->lpVtbl->Release(This);
}
/*** IWindowsParentalControlsCore methods ***/
static FORCEINLINE HRESULT IWindowsParentalControls_GetVisibility(IWindowsParentalControls* This,WPCFLAG_VISIBILITY *peVisibility) {
    return This->lpVtbl->GetVisibility(This,peVisibility);
}
static FORCEINLINE HRESULT IWindowsParentalControls_GetUserSettings(IWindowsParentalControls* This,LPCWSTR pcszSID,IWPCSettings **ppSettings) {
    return This->lpVtbl->GetUserSettings(This,pcszSID,ppSettings);
}
static FORCEINLINE HRESULT IWindowsParentalControls_GetWebSettings(IWindowsParentalControls* This,LPCWSTR pcszSID,IWPCWebSettings **ppSettings) {
    return This->lpVtbl->GetWebSettings(This,pcszSID,ppSettings);
}
static FORCEINLINE HRESULT IWindowsParentalControls_GetWebFilterInfo(IWindowsParentalControls* This,GUID *pguidID,LPWSTR *ppszName) {
    return This->lpVtbl->GetWebFilterInfo(This,pguidID,ppszName);
}
/*** IWindowsParentalControls methods ***/
static FORCEINLINE HRESULT IWindowsParentalControls_GetGamesSettings(IWindowsParentalControls* This,LPCWSTR pcszSID,IWPCGamesSettings **ppSettings) {
    return This->lpVtbl->GetGamesSettings(This,pcszSID,ppSettings);
}
#endif
#endif

#endif


#endif  /* __IWindowsParentalControls_INTERFACE_DEFINED__ */

/*****************************************************************************
 * WindowsParentalControls coclass
 */

DEFINE_GUID(CLSID_WindowsParentalControls, 0xe77cc89b, 0x7401, 0x4c04, 0x8c,0xed, 0x14,0x9d,0xb3,0x5a,0xdd,0x04);

#ifdef __cplusplus
class DECLSPEC_UUID("e77cc89b-7401-4c04-8ced-149db35add04") WindowsParentalControls;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(WindowsParentalControls, 0xe77cc89b, 0x7401, 0x4c04, 0x8c,0xed, 0x14,0x9d,0xb3,0x5a,0xdd,0x04)
#endif
#endif

/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER HWND_UserSize     (ULONG *, ULONG, HWND *);
unsigned char * __RPC_USER HWND_UserMarshal  (ULONG *, unsigned char *, HWND *);
unsigned char * __RPC_USER HWND_UserUnmarshal(ULONG *, unsigned char *, HWND *);
void            __RPC_USER HWND_UserFree     (ULONG *, HWND *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __wpcapi_h__ */
