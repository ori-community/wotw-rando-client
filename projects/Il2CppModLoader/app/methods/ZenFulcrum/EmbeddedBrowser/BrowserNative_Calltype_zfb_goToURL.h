#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_goToURL {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_Calltype_zfb_goToURL * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01C7B2A0, void, Invoke, (app::BrowserNative_Calltype_zfb_goToURL * this_ptr, int32_t id, app::String * url, bool force))
    IL2CPP_REGISTER_METHOD(0x01C7B630, app::IAsyncResult *, BeginInvoke, (app::BrowserNative_Calltype_zfb_goToURL * this_ptr, int32_t id, app::String * url, bool force, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_goToURL * this_ptr, app::IAsyncResult * result))
}
