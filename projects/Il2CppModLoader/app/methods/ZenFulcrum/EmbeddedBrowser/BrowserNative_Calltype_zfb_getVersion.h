#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_getVersion {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_Calltype_zfb_getVersion * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01938310, void *, Invoke, (app::BrowserNative_Calltype_zfb_getVersion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult *, BeginInvoke, (app::BrowserNative_Calltype_zfb_getVersion * this_ptr, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F52480, void *, EndInvoke, (app::BrowserNative_Calltype_zfb_getVersion * this_ptr, app::IAsyncResult * result))
}
