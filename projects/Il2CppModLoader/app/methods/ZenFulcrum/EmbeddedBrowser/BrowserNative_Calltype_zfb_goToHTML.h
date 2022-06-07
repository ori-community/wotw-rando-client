#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_goToHTML {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_Calltype_zfb_goToHTML * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01C795D0, void, Invoke, (app::BrowserNative_Calltype_zfb_goToHTML * this_ptr, int32_t id, app::String * html, app::String * url))
    IL2CPP_REGISTER_METHOD(0x01C7B1C0, app::IAsyncResult *, BeginInvoke, (app::BrowserNative_Calltype_zfb_goToHTML * this_ptr, int32_t id, app::String * html, app::String * url, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_goToHTML * this_ptr, app::IAsyncResult * result))
}
