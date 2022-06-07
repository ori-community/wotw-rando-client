#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_destroyBrowser {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_Calltype_zfb_destroyBrowser * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (app::BrowserNative_Calltype_zfb_destroyBrowser * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x01C78B00, app::IAsyncResult *, BeginInvoke, (app::BrowserNative_Calltype_zfb_destroyBrowser * this_ptr, int32_t id, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_destroyBrowser * this_ptr, app::IAsyncResult * result))
}
