#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_createBrowser {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_Calltype_zfb_createBrowser * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01C785A0, int32_t, Invoke, (app::BrowserNative_Calltype_zfb_createBrowser * this_ptr, app::BrowserNative_ZFBSettings settings))
    IL2CPP_REGISTER_METHOD(0x01C78A30, app::IAsyncResult*, BeginInvoke, (app::BrowserNative_Calltype_zfb_createBrowser * this_ptr, app::BrowserNative_ZFBSettings settings, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::BrowserNative_Calltype_zfb_createBrowser * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_createBrowser
