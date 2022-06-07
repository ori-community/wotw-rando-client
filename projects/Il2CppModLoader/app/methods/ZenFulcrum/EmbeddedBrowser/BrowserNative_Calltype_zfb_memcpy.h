#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_memcpy {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_Calltype_zfb_memcpy * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01C78130, void, Invoke, (app::BrowserNative_Calltype_zfb_memcpy * this_ptr, void * dst, void * src, int32_t size))
    IL2CPP_REGISTER_METHOD(0x01C7C270, app::IAsyncResult *, BeginInvoke, (app::BrowserNative_Calltype_zfb_memcpy * this_ptr, void * dst, void * src, int32_t size, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_memcpy * this_ptr, app::IAsyncResult * result))
}
