#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_UnityEngine_Texture2D_.h>
#include <Modloader/app/structs/Action_1_ZenFulcrum_EmbeddedBrowser_Browser_.h>
#include <Modloader/app/structs/Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_.h>
#include <Modloader/app/structs/Action_2_Boolean_Boolean_.h>
#include <Modloader/app/structs/Action_2_Int32_ZenFulcrum_EmbeddedBrowser_JSONNode_.h>
#include <Modloader/app/structs/Action_2_String_String_.h>
#include <Modloader/app/structs/Action_3_String_Boolean_String_.h>
#include <Modloader/app/structs/Browser.h>
#include <Modloader/app/structs/BrowserNative_ChangeType__Enum.h>
#include <Modloader/app/structs/BrowserNative_ContextMenuOrigin__Enum.h>
#include <Modloader/app/structs/BrowserNative_DialogType__Enum.h>
#include <Modloader/app/structs/BrowserNative_DownloadAction__Enum.h>
#include <Modloader/app/structs/BrowserNative_FrameCommand__Enum.h>
#include <Modloader/app/structs/BrowserNative_ReadyFunc.h>
#include <Modloader/app/structs/Browser_JSCallback.h>
#include <Modloader/app/structs/Browser_NewWindowAction__Enum.h>
#include <Modloader/app/structs/CookieManager.h>
#include <Modloader/app/structs/IBrowserUI.h>
#include <Modloader/app/structs/INewWindowHandler.h>
#include <Modloader/app/structs/IPromise_1_JSONNode_.h>
#include <Modloader/app/structs/JSONNode.h>
#include <Modloader/app/structs/JSONNode__Array.h>
#include <Modloader/app/structs/KeyAction__Enum.h>
#include <Modloader/app/structs/KeyCode__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::Browser {
    IL2CPP_REGISTER_METHOD(0x01C61210, void, add_onConsoleMessage, app::Browser* this_ptr, app::Action_2_String_String_* value)
    IL2CPP_REGISTER_METHOD(0x01C61300, void, remove_onConsoleMessage, app::Browser* this_ptr, app::Action_2_String_String_* value)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::INewWindowHandler*, get_NewWindowHandler, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_NewWindowHandler, app::Browser* this_ptr, app::INewWindowHandler* value)
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_EnableRendering, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_EnableRendering, app::Browser* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00675C60, bool, get_EnableInput, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00675C70, void, set_EnableInput, app::Browser* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01C613F0, void, add_afterResize, app::Browser* this_ptr, app::Action_1_UnityEngine_Texture2D_* value)
    IL2CPP_REGISTER_METHOD(0x01C614E0, void, remove_afterResize, app::Browser* this_ptr, app::Action_1_UnityEngine_Texture2D_* value)
    IL2CPP_REGISTER_METHOD(0x01C615D0, app::String*, get_LocalUrlPrefix, )
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IBrowserUI*, get_UIHandler, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C616C0, void, set_UIHandler, app::Browser* this_ptr, app::IBrowserUI* value)
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::CookieManager*, get_CookieManager, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_CookieManager, app::Browser* this_ptr, app::CookieManager* value)
    IL2CPP_REGISTER_METHOD(0x002FBC80, app::Texture2D*, get_Texture, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C616D0, void, add_onNativeReady, app::Browser* this_ptr, app::BrowserNative_ReadyFunc* value)
    IL2CPP_REGISTER_METHOD(0x01C617C0, void, remove_onNativeReady, app::Browser* this_ptr, app::BrowserNative_ReadyFunc* value)
    IL2CPP_REGISTER_METHOD(0x01C618B0, void, add_onLoad, app::Browser* this_ptr, app::Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_* value)
    IL2CPP_REGISTER_METHOD(0x01C619A0, void, remove_onLoad, app::Browser* this_ptr, app::Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_* value)
    IL2CPP_REGISTER_METHOD(0x01C61A90, void, add_onFetch, app::Browser* this_ptr, app::Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_* value)
    IL2CPP_REGISTER_METHOD(0x01C61B80, void, remove_onFetch, app::Browser* this_ptr, app::Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_* value)
    IL2CPP_REGISTER_METHOD(0x01C61C70, void, add_onFetchError, app::Browser* this_ptr, app::Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_* value)
    IL2CPP_REGISTER_METHOD(0x01C61D60, void, remove_onFetchError, app::Browser* this_ptr, app::Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_* value)
    IL2CPP_REGISTER_METHOD(0x01C61E50, void, add_onCertError, app::Browser* this_ptr, app::Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_* value)
    IL2CPP_REGISTER_METHOD(0x01C61F40, void, remove_onCertError, app::Browser* this_ptr, app::Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_* value)
    IL2CPP_REGISTER_METHOD(0x01C62030, void, add_onSadTab, app::Browser* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x01C62120, void, remove_onSadTab, app::Browser* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x01C62210, void, add_onTextureUpdated, app::Browser* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x01C62300, void, remove_onTextureUpdated, app::Browser* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x01C623F0, void, add_onNavStateChange, app::Browser* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x01C624E0, void, remove_onNavStateChange, app::Browser* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x01C625D0, void, add_onDownloadStatus, app::Browser* this_ptr, app::Action_2_Int32_ZenFulcrum_EmbeddedBrowser_JSONNode_* value)
    IL2CPP_REGISTER_METHOD(0x01C626C0, void, remove_onDownloadStatus, app::Browser* this_ptr, app::Action_2_Int32_ZenFulcrum_EmbeddedBrowser_JSONNode_* value)
    IL2CPP_REGISTER_METHOD(0x01C627B0, void, add_onNodeFocus, app::Browser* this_ptr, app::Action_3_String_Boolean_String_* value)
    IL2CPP_REGISTER_METHOD(0x01C628A0, void, remove_onNodeFocus, app::Browser* this_ptr, app::Action_3_String_Boolean_String_* value)
    IL2CPP_REGISTER_METHOD(0x01C62990, void, add_onBrowserFocus, app::Browser* this_ptr, app::Action_2_Boolean_Boolean_* value)
    IL2CPP_REGISTER_METHOD(0x01C62A80, void, remove_onBrowserFocus, app::Browser* this_ptr, app::Action_2_Boolean_Boolean_* value)
    IL2CPP_REGISTER_METHOD(0x01C62B70, void, add_onAnyBrowserCreated, app::Action_1_ZenFulcrum_EmbeddedBrowser_Browser_* value)
    IL2CPP_REGISTER_METHOD(0x01C62CB0, void, remove_onAnyBrowserCreated, app::Action_1_ZenFulcrum_EmbeddedBrowser_Browser_* value)
    IL2CPP_REGISTER_METHOD(0x01C62DF0, void, add_onAnyBrowserDestroyed, app::Action_1_ZenFulcrum_EmbeddedBrowser_Browser_* value)
    IL2CPP_REGISTER_METHOD(0x01C62F30, void, remove_onAnyBrowserDestroyed, app::Action_1_ZenFulcrum_EmbeddedBrowser_Browser_* value)
    IL2CPP_REGISTER_METHOD(0x01C63070, void, Awake, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C639B0, bool, get_IsReady, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C639C0, void, WhenReady, app::Browser* this_ptr, app::Action* callback)
    IL2CPP_REGISTER_METHOD(0x01C63DF0, void, RunOnMainThread, app::Browser* this_ptr, app::Action* callback)
    IL2CPP_REGISTER_METHOD(0x01C63F50, void, WhenLoaded, app::Browser* this_ptr, app::Action* callback)
    IL2CPP_REGISTER_METHOD(0x01C63FF0, void, RequestNativeBrowser, app::Browser* this_ptr, int32_t new_browser_id)
    IL2CPP_REGISTER_METHOD(0x01C64BA0, void, OnItemChange, app::Browser* this_ptr, app::BrowserNative_ChangeType__Enum type, app::String* arg1)
    IL2CPP_REGISTER_METHOD(0x01C652C0, void, CreateDialogHandler, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C65540, void, CheckSanity, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C65650, bool, DeferUnready, app::Browser* this_ptr, app::Action* if_not_ready)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDisable, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C65680, void, OnDestroy, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010744F0, app::String*, get_Url, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C658A0, void, set_Url, app::Browser* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01C658B0, void, LoadURL, app::Browser* this_ptr, app::String* url, bool force)
    IL2CPP_REGISTER_METHOD(0x01C65C60, void, LoadHTML, app::Browser* this_ptr, app::String* html, app::String* url)
    IL2CPP_REGISTER_METHOD(
        0x01C65FB0,
        void,
        SetNewWindowHandler,
        app::Browser* this_ptr,
        app::Browser_NewWindowAction__Enum action,
        app::INewWindowHandler* new_window_handler
    )
    IL2CPP_REGISTER_METHOD(0x01C663F0, void, SendFrameCommand, app::Browser* this_ptr, app::BrowserNative_FrameCommand__Enum command)
    IL2CPP_REGISTER_METHOD(0x01C666A0, void, QueuePageReplacer, app::Browser* this_ptr, app::Action* replace_page, float priority)
    IL2CPP_REGISTER_METHOD(0x01C666D0, bool, get_CanGoBack, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C666F0, void, GoBack, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C667D0, bool, get_CanGoForward, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C667F0, void, GoForward, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C668D0, bool, get_IsLoadingRaw, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C668F0, bool, get_IsLoaded, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C669F0, void, Stop, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C66AD0, void, Reload, app::Browser* this_ptr, bool force)
    IL2CPP_REGISTER_METHOD(0x01C66C00, void, ShowDevTools, app::Browser* this_ptr, bool show)
    IL2CPP_REGISTER_METHOD(0x01C66EB0, app::Vector2, get_Size, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C66ED0, void, _Resize, app::Browser* this_ptr, app::Texture2D* new_texture, bool new_texture_is_ours)
    IL2CPP_REGISTER_METHOD(0x01C673B0, void, Resize_1, app::Browser* this_ptr, int32_t width, int32_t height)
    IL2CPP_REGISTER_METHOD(0x01C677B0, void, Resize_2, app::Browser* this_ptr, app::Texture2D* new_texture)
    IL2CPP_REGISTER_METHOD(0x006B5650, float, get_Zoom, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C677C0, void, set_Zoom, app::Browser* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01C67A80, app::IPromise_1_JSONNode_*, EvalJS, app::Browser* this_ptr, app::String* script, app::String* script_u_r_l)
    IL2CPP_REGISTER_METHOD(0x01C68270, app::IPromise_1_JSONNode_*, EvalJSCSP, app::Browser* this_ptr, app::String* script, app::String* script_u_r_l)
    IL2CPP_REGISTER_METHOD(0x01C68990, void, _EvalJS, app::Browser* this_ptr, app::String* script, app::String* script_u_r_l)
    IL2CPP_REGISTER_METHOD(0x01C68A80, app::IPromise_1_JSONNode_*, CallFunction, app::Browser* this_ptr, app::String* name, app::JSONNode__Array* arguments)
    IL2CPP_REGISTER_METHOD(0x01C68C10, void, RegisterFunction, app::Browser* this_ptr, app::String* name, app::Browser_JSCallback* callback)
    IL2CPP_REGISTER_METHOD(0x01C69050, void, ProcessCallbacks, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C69370, void, Update, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C69460, void, LateUpdate, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C69690, void, Render, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C699B0, void, SetOverlay, app::Browser* this_ptr, app::Browser* overlay_browser)
    IL2CPP_REGISTER_METHOD(0x01C69F90, void, HandleInput, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C69FE0, void, OnApplicationFocus, app::Browser* this_ptr, bool focus)
    IL2CPP_REGISTER_METHOD(0x01C6A000, void, OnApplicationPause, app::Browser* this_ptr, bool paused)
    IL2CPP_REGISTER_METHOD(0x01C6A020, void, UpdateCursor, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01C6A4F0,
        void,
        DownloadCommand,
        app::Browser* this_ptr,
        int32_t download_id,
        app::BrowserNative_DownloadAction__Enum action,
        app::String* file_name
    )
    IL2CPP_REGISTER_METHOD(0x01C6A600, void, TypeText, app::Browser* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01C6A920, void, PressKey, app::Browser* this_ptr, app::KeyCode__Enum key, app::KeyAction__Enum action)
    IL2CPP_REGISTER_METHOD(0x01C6AE00, void, _RaiseFocusEvent, app::Browser* this_ptr, bool mouse_is_focused, bool keyboard_is_focused)
    IL2CPP_REGISTER_METHOD(0x01C6AEE0, app::Browser*, GetBrowser, int32_t browser_id)
    IL2CPP_REGISTER_METHOD(0x01C6B1A0, void, CB_ForwardJSCallFunc, int32_t browser_id, int32_t callback_id, app::String* data, int32_t size)
    IL2CPP_REGISTER_METHOD(0x01C6B550, void, CB_ChangeFunc, int32_t browser_id, app::BrowserNative_ChangeType__Enum change_type, app::String* arg1)
    IL2CPP_REGISTER_METHOD(
        0x01C6BF00,
        void,
        CB_DisplayDialogFunc,
        int32_t browser_id,
        app::BrowserNative_DialogType__Enum dialog_type,
        void* text_ptr,
        void* prompt_text_ptr,
        void* source_u_r_l
    )
    IL2CPP_REGISTER_METHOD(
        0x01C6C2C0,
        void,
        CB_ShowContextMenuFunc,
        int32_t browser_id,
        app::String* json,
        int32_t x,
        int32_t y,
        app::BrowserNative_ContextMenuOrigin__Enum origin
    )
    IL2CPP_REGISTER_METHOD(0x01C6C700, void, CB_ConsoleFunc, int32_t browser_id, app::String* message, app::String* source, int32_t line)
    IL2CPP_REGISTER_METHOD(0x01C6CAB0, void, CB_ReadyFunc, int32_t browser_id)
    IL2CPP_REGISTER_METHOD(0x01C6CE50, void, CB_NavStateFunc, int32_t browser_id, bool can_go_back, bool can_go_forward, bool lodaing, void* url_raw)
    IL2CPP_REGISTER_METHOD(0x01C6D210, void, CB_NewWindowFunc, int32_t creator_browser_id, int32_t new_browser_id, void* url_ptr)
    IL2CPP_REGISTER_METHOD(0x01C6D5C0, void, ctor, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C6EBD0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x01C6F050, void, _Awake_b__105_0, app::Browser* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x01C6F1C0, void, _Awake_b__105_1, app::Browser* this_ptr, app::String* message, app::String* source)
    IL2CPP_REGISTER_METHOD(0x01C6F290, void, _Awake_b__105_2, app::Browser* this_ptr, app::JSONNode* err)
    IL2CPP_REGISTER_METHOD(0x01C6F580, void, _Awake_b__105_3, app::Browser* this_ptr, app::JSONNode* err)
    IL2CPP_REGISTER_METHOD(0x01C6F7E0, void, _Awake_b__105_4, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C6F960, void, _Awake_b__105_7, app::Browser* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C6FA90, void, _CreateDialogHandler_b__113_0, app::Browser* this_ptr, bool affirm, app::String* text1, app::String* text2)
    IL2CPP_REGISTER_METHOD(0x01C6FBA0, void, _CreateDialogHandler_b__113_1, app::Browser* this_ptr, int32_t command_id)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::Browser
