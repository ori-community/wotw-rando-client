#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_editCookie.h>
#include <Modloader/app/structs/BrowserNative_CookieAction__Enum.h>
#include <Modloader/app/structs/BrowserNative_NativeCookie.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_editCookie {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::BrowserNative_Calltype_zfb_editCookie* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x01C79170,
        void,
        Invoke,
        app::BrowserNative_Calltype_zfb_editCookie* this_ptr,
        int32_t id,
        app::BrowserNative_NativeCookie* cookie,
        app::BrowserNative_CookieAction__Enum action
    )
    IL2CPP_REGISTER_METHOD(
        0x01C794F0,
        app::IAsyncResult*,
        BeginInvoke,
        app::BrowserNative_Calltype_zfb_editCookie* this_ptr,
        int32_t id,
        app::BrowserNative_NativeCookie* cookie,
        app::BrowserNative_CookieAction__Enum action,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::BrowserNative_Calltype_zfb_editCookie* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_editCookie
