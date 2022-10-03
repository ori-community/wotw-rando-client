#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_init {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_Calltype_zfb_init * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01C7B710, bool, Invoke, (app::BrowserNative_Calltype_zfb_init * this_ptr, app::BrowserNative_ZFBInitialSettings settings))
    IL2CPP_REGISTER_METHOD(0x01C7BD20, app::IAsyncResult*, BeginInvoke, (app::BrowserNative_Calltype_zfb_init * this_ptr, app::BrowserNative_ZFBInitialSettings settings, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::BrowserNative_Calltype_zfb_init * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_init
