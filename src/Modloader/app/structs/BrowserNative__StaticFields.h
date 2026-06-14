#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrowserNative__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrowserNative__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserNative__StaticFields_DEFINED)
#define IL2CPP_STRUCT_BrowserNative__StaticFields_DEFINED
struct Object;
struct List_1_System_String_;
struct WebResources;
struct String;
struct BrowserNative_Calltype_zfb_noop;
struct BrowserNative_Calltype_zfb_flatColorTexture;
struct BrowserNative_Calltype_zfb_copyToColor32;
struct BrowserNative_Calltype_zfb_free;
struct BrowserNative_Calltype_zfb_memcpy;
struct BrowserNative_Calltype_zfb_getVersion;
struct BrowserNative_Calltype_zfb_setDebugFunc;
struct BrowserNative_Calltype_zfb_setLocalRequestHandler;
struct BrowserNative_Calltype_zfb_sendRequestHeaders;
struct BrowserNative_Calltype_zfb_sendRequestData;
struct BrowserNative_Calltype_zfb_setCallbacksEnabled;
struct BrowserNative_Calltype_zfb_destroyAllBrowsers;
struct BrowserNative_Calltype_zfb_addCLISwitch;
struct BrowserNative_Calltype_zfb_init;
struct BrowserNative_Calltype_zfb_shutdown;
struct BrowserNative_Calltype_zfb_createBrowser;
struct BrowserNative_Calltype_zfb_numBrowsers;
struct BrowserNative_Calltype_zfb_destroyBrowser;
struct BrowserNative_Calltype_zfb_tick;
struct BrowserNative_Calltype_zfb_setReadyCallback;
struct BrowserNative_Calltype_zfb_resize;
struct BrowserNative_Calltype_zfb_setOverlay;
struct BrowserNative_Calltype_zfb_getImage;
struct BrowserNative_Calltype_zfb_registerNavStateCallback;
struct BrowserNative_Calltype_zfb_goToURL;
struct BrowserNative_Calltype_zfb_goToHTML;
struct BrowserNative_Calltype_zfb_doNav;
struct BrowserNative_Calltype_zfb_setZoom;
struct BrowserNative_Calltype_zfb_changeLoading;
struct BrowserNative_Calltype_zfb_showDevTools;
struct BrowserNative_Calltype_zfb_setFocused;
struct BrowserNative_Calltype_zfb_mouseMove;
struct BrowserNative_Calltype_zfb_mouseButton;
struct BrowserNative_Calltype_zfb_mouseScroll;
struct BrowserNative_Calltype_zfb_keyEvent;
struct BrowserNative_Calltype_zfb_characterEvent;
struct BrowserNative_Calltype_zfb_registerConsoleCallback;
struct BrowserNative_Calltype_zfb_evalJS;
struct BrowserNative_Calltype_zfb_registerJSCallback;
struct BrowserNative_Calltype_zfb_registerChangeCallback;
struct BrowserNative_Calltype_zfb_getMouseCursor;
struct BrowserNative_Calltype_zfb_getMouseCustomCursor;
struct BrowserNative_Calltype_zfb_registerDialogCallback;
struct BrowserNative_Calltype_zfb_sendDialogResults;
struct BrowserNative_Calltype_zfb_registerPopupCallback;
struct BrowserNative_Calltype_zfb_registerContextMenuCallback;
struct BrowserNative_Calltype_zfb_sendContextMenuResults;
struct BrowserNative_Calltype_zfb_sendCommandToFocusedFrame;
struct BrowserNative_Calltype_zfb_getCookies;
struct BrowserNative_Calltype_zfb_editCookie;
struct BrowserNative_Calltype_zfb_clearCookies;
struct BrowserNative_Calltype_zfb_downloadCommand;
struct BrowserNative__StaticFields {
    bool _NativeLoaded_k__BackingField;
    bool _SymbolsLoaded_k__BackingField;
    struct Object* symbolsLock;
    struct List_1_System_String_* commandLineSwitches;
    struct WebResources* webResources;
    bool isAppDomainUnloading;
    struct String* _profilePath;
    void* moduleHandle;
    struct BrowserNative_Calltype_zfb_noop* zfb_noop;
    struct BrowserNative_Calltype_zfb_flatColorTexture* zfb_flatColorTexture;
    struct BrowserNative_Calltype_zfb_copyToColor32* zfb_copyToColor32;
    struct BrowserNative_Calltype_zfb_free* zfb_free;
    struct BrowserNative_Calltype_zfb_memcpy* zfb_memcpy;
    struct BrowserNative_Calltype_zfb_getVersion* zfb_getVersion;
    struct BrowserNative_Calltype_zfb_setDebugFunc* zfb_setDebugFunc;
    struct BrowserNative_Calltype_zfb_setLocalRequestHandler* zfb_setLocalRequestHandler;
    struct BrowserNative_Calltype_zfb_sendRequestHeaders* zfb_sendRequestHeaders;
    struct BrowserNative_Calltype_zfb_sendRequestData* zfb_sendRequestData;
    struct BrowserNative_Calltype_zfb_setCallbacksEnabled* zfb_setCallbacksEnabled;
    struct BrowserNative_Calltype_zfb_destroyAllBrowsers* zfb_destroyAllBrowsers;
    struct BrowserNative_Calltype_zfb_addCLISwitch* zfb_addCLISwitch;
    struct BrowserNative_Calltype_zfb_init* zfb_init;
    struct BrowserNative_Calltype_zfb_shutdown* zfb_shutdown;
    struct BrowserNative_Calltype_zfb_createBrowser* zfb_createBrowser;
    struct BrowserNative_Calltype_zfb_numBrowsers* zfb_numBrowsers;
    struct BrowserNative_Calltype_zfb_destroyBrowser* zfb_destroyBrowser;
    struct BrowserNative_Calltype_zfb_tick* zfb_tick;
    struct BrowserNative_Calltype_zfb_setReadyCallback* zfb_setReadyCallback;
    struct BrowserNative_Calltype_zfb_resize* zfb_resize;
    struct BrowserNative_Calltype_zfb_setOverlay* zfb_setOverlay;
    struct BrowserNative_Calltype_zfb_getImage* zfb_getImage;
    struct BrowserNative_Calltype_zfb_registerNavStateCallback* zfb_registerNavStateCallback;
    struct BrowserNative_Calltype_zfb_goToURL* zfb_goToURL;
    struct BrowserNative_Calltype_zfb_goToHTML* zfb_goToHTML;
    struct BrowserNative_Calltype_zfb_doNav* zfb_doNav;
    struct BrowserNative_Calltype_zfb_setZoom* zfb_setZoom;
    struct BrowserNative_Calltype_zfb_changeLoading* zfb_changeLoading;
    struct BrowserNative_Calltype_zfb_showDevTools* zfb_showDevTools;
    struct BrowserNative_Calltype_zfb_setFocused* zfb_setFocused;
    struct BrowserNative_Calltype_zfb_mouseMove* zfb_mouseMove;
    struct BrowserNative_Calltype_zfb_mouseButton* zfb_mouseButton;
    struct BrowserNative_Calltype_zfb_mouseScroll* zfb_mouseScroll;
    struct BrowserNative_Calltype_zfb_keyEvent* zfb_keyEvent;
    struct BrowserNative_Calltype_zfb_characterEvent* zfb_characterEvent;
    struct BrowserNative_Calltype_zfb_registerConsoleCallback* zfb_registerConsoleCallback;
    struct BrowserNative_Calltype_zfb_evalJS* zfb_evalJS;
    struct BrowserNative_Calltype_zfb_registerJSCallback* zfb_registerJSCallback;
    struct BrowserNative_Calltype_zfb_registerChangeCallback* zfb_registerChangeCallback;
    struct BrowserNative_Calltype_zfb_getMouseCursor* zfb_getMouseCursor;
    struct BrowserNative_Calltype_zfb_getMouseCustomCursor* zfb_getMouseCustomCursor;
    struct BrowserNative_Calltype_zfb_registerDialogCallback* zfb_registerDialogCallback;
    struct BrowserNative_Calltype_zfb_sendDialogResults* zfb_sendDialogResults;
    struct BrowserNative_Calltype_zfb_registerPopupCallback* zfb_registerPopupCallback;
    struct BrowserNative_Calltype_zfb_registerContextMenuCallback* zfb_registerContextMenuCallback;
    struct BrowserNative_Calltype_zfb_sendContextMenuResults* zfb_sendContextMenuResults;
    struct BrowserNative_Calltype_zfb_sendCommandToFocusedFrame* zfb_sendCommandToFocusedFrame;
    struct BrowserNative_Calltype_zfb_getCookies* zfb_getCookies;
    struct BrowserNative_Calltype_zfb_editCookie* zfb_editCookie;
    struct BrowserNative_Calltype_zfb_clearCookies* zfb_clearCookies;
    struct BrowserNative_Calltype_zfb_downloadCommand* zfb_downloadCommand;
};
#endif
#if !defined(IL2CPP_STRUCT_BrowserNative__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_BrowserNative__StaticFields_FWDDECL
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_addCLISwitch.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_changeLoading.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_characterEvent.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_clearCookies.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_copyToColor32.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_createBrowser.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_destroyAllBrowsers.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_destroyBrowser.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_doNav.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_downloadCommand.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_editCookie.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_evalJS.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_flatColorTexture.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_free.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_getCookies.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_getImage.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_getMouseCursor.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_getMouseCustomCursor.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_getVersion.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_goToHTML.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_goToURL.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_init.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_keyEvent.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_memcpy.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_mouseButton.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_mouseMove.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_mouseScroll.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_noop.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_numBrowsers.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_registerChangeCallback.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_registerConsoleCallback.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_registerContextMenuCallback.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_registerDialogCallback.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_registerJSCallback.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_registerNavStateCallback.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_registerPopupCallback.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_resize.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_sendCommandToFocusedFrame.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_sendContextMenuResults.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_sendDialogResults.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_sendRequestData.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_sendRequestHeaders.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_setCallbacksEnabled.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_setDebugFunc.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_setFocused.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_setLocalRequestHandler.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_setOverlay.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_setReadyCallback.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_setZoom.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_showDevTools.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_shutdown.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_tick.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/WebResources.h>
#endif
#undef IL2CPP_STRUCT_BrowserNative__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserNative__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_BrowserNative__StaticFields_FWDDECL)
#include <Modloader/app/structs/BrowserNative__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrowserNative__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
