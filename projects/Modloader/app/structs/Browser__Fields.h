#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Browser__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Browser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Browser__Fields_DEFINED)
#include <Modloader/app/structs/BrowserNative_ContextMenuOrigin__Enum.h>
#include <Modloader/app/structs/Browser_NewWindowAction__Enum.h>
#include <Modloader/app/structs/Color32.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color32_DEFINED) && defined(IL2CPP_STRUCT_BrowserNative_ContextMenuOrigin__Enum_DEFINED) && defined(IL2CPP_STRUCT_Browser_NewWindowAction__Enum_DEFINED)
#define IL2CPP_STRUCT_Browser__Fields_DEFINED
struct String;
struct Action_2_String_String_;
struct INewWindowHandler;
struct Action_1_UnityEngine_Texture2D_;
struct IBrowserUI;
struct CookieManager;
struct Texture2D;
struct List_1_System_Action_;
struct List_1_System_Object_;
struct Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_;
struct BrowserNative_ReadyFunc;
struct Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_;
struct Action;
struct Action_2_Int32_ZenFulcrum_EmbeddedBrowser_JSONNode_;
struct Action_3_String_Boolean_String_;
struct Action_2_Boolean_Boolean_;
struct BrowserFocusState;
struct BrowserInput;
struct Browser;
struct BrowserNavState;
struct DialogHandler;
struct Color32__Array;
struct Browser__Fields {
    struct MonoBehaviour__Fields _;
    struct String* _url;
    int32_t _width;
    int32_t _height;
    bool generateMipmap;
    struct Color32 baseColor;
    float _zoom;
    struct Action_2_String_String_* onConsoleMessage;
    BrowserNative_ContextMenuOrigin__Enum allowContextMenuOn;

    Browser_NewWindowAction__Enum newWindowAction;

    struct INewWindowHandler* _NewWindowHandler_k__BackingField;
    bool _EnableRendering_k__BackingField;
    bool _EnableInput_k__BackingField;
    struct Action_1_UnityEngine_Texture2D_* afterResize;
    struct IBrowserUI* _uiHandler;
    bool uiHandlerAssigned;
    struct CookieManager* _CookieManager_k__BackingField;
    int32_t browserId;
    int32_t unsafeBrowserId;
    bool browserIdRequested;
    struct Texture2D* texture;
    bool textureIsOurs;
    bool forceNextRender;
    bool isPopup;
    struct List_1_System_Action_* thingsToDo;
    struct List_1_System_Action_* onloadActions;
    struct List_1_System_Object_* thingsToRemember;
    int32_t nextCallbackId;
    struct Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_* registeredCallbacks;
    struct BrowserNative_ReadyFunc* onNativeReady;
    struct Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_* onLoad;
    struct Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_* onFetch;
    struct Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_* onFetchError;
    struct Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_* onCertError;
    struct Action* onSadTab;
    struct Action* onTextureUpdated;
    struct Action* onNavStateChange;
    struct Action_2_Int32_ZenFulcrum_EmbeddedBrowser_JSONNode_* onDownloadStarted;
    struct Action_2_Int32_ZenFulcrum_EmbeddedBrowser_JSONNode_* onDownloadStatus;
    struct Action_3_String_Boolean_String_* onNodeFocus;
    struct Action_2_Boolean_Boolean_* onBrowserFocus;
    struct BrowserFocusState* focusState;
    struct BrowserInput* browserInput;
    struct Browser* overlay;
    bool skipNextLoad;
    bool loadPending;
    struct BrowserNavState* navState;
    bool newWindowHandlerSet;
    struct INewWindowHandler* newWindowHandler;
    struct DialogHandler* dialogHandler;
    struct Action* pageReplacer;
    float pageReplacerPriority;
    struct List_1_System_Action_* thingsToDoClone;
    struct Color32__Array* colorBuffer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Browser__Fields_FWDDECL)
#define IL2CPP_STRUCT_Browser__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_UnityEngine_Texture2D_.h>
#include <Modloader/app/structs/Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_.h>
#include <Modloader/app/structs/Action_2_Boolean_Boolean_.h>
#include <Modloader/app/structs/Action_2_Int32_ZenFulcrum_EmbeddedBrowser_JSONNode_.h>
#include <Modloader/app/structs/Action_2_String_String_.h>
#include <Modloader/app/structs/Action_3_String_Boolean_String_.h>
#include <Modloader/app/structs/Browser.h>
#include <Modloader/app/structs/BrowserFocusState.h>
#include <Modloader/app/structs/BrowserInput.h>
#include <Modloader/app/structs/BrowserNative_ReadyFunc.h>
#include <Modloader/app/structs/BrowserNavState.h>
#include <Modloader/app/structs/Color32__Array.h>
#include <Modloader/app/structs/CookieManager.h>
#include <Modloader/app/structs/DialogHandler.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_.h>
#include <Modloader/app/structs/IBrowserUI.h>
#include <Modloader/app/structs/INewWindowHandler.h>
#include <Modloader/app/structs/List_1_System_Action_.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_Browser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Browser__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Browser__Fields_FWDDECL)
#include <Modloader/app/structs/Browser__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Browser__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
