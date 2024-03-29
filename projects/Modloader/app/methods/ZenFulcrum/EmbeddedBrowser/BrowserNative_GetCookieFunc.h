#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BrowserNative_GetCookieFunc.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/BrowserNative_NativeCookie.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_GetCookieFunc {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_GetCookieFunc * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::BrowserNative_GetCookieFunc * this_ptr, app::BrowserNative_NativeCookie* cookie))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::BrowserNative_GetCookieFunc * this_ptr, app::BrowserNative_NativeCookie* cookie, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_GetCookieFunc * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_GetCookieFunc
