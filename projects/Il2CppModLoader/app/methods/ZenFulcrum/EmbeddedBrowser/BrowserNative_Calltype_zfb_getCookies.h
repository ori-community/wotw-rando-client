#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getCookies {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_Calltype_zfb_getCookies * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (app::BrowserNative_Calltype_zfb_getCookies * this_ptr, int32_t id, app::BrowserNative_GetCookieFunc * cb))
    IL2CPP_REGISTER_METHOD(0x01C7A090, app::IAsyncResult *, BeginInvoke, (app::BrowserNative_Calltype_zfb_getCookies * this_ptr, int32_t id, app::BrowserNative_GetCookieFunc * cb, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_getCookies * this_ptr, app::IAsyncResult * result))
}
