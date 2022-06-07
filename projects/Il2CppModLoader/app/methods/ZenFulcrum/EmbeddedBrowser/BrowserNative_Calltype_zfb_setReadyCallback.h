#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setReadyCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_Calltype_zfb_setReadyCallback * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (app::BrowserNative_Calltype_zfb_setReadyCallback * this_ptr, int32_t id, app::BrowserNative_ReadyFunc * cb))
    IL2CPP_REGISTER_METHOD(0x01DCBF80, app::IAsyncResult *, BeginInvoke, (app::BrowserNative_Calltype_zfb_setReadyCallback * this_ptr, int32_t id, app::BrowserNative_ReadyFunc * cb, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_setReadyCallback * this_ptr, app::IAsyncResult * result))
}
