#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_setFocused {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_Calltype_zfb_setFocused * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01DCBA90, void, Invoke, (app::BrowserNative_Calltype_zfb_setFocused * this_ptr, int32_t id, bool focused))
    IL2CPP_REGISTER_METHOD(0x01DCBDE0, app::IAsyncResult *, BeginInvoke, (app::BrowserNative_Calltype_zfb_setFocused * this_ptr, int32_t id, bool focused, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_setFocused * this_ptr, app::IAsyncResult * result))
}
