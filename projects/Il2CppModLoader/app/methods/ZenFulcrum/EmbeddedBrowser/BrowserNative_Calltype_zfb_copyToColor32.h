#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_copyToColor32 {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_Calltype_zfb_copyToColor32 * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01C78130, void, Invoke, (app::BrowserNative_Calltype_zfb_copyToColor32 * this_ptr, void * src, void * dest, int32_t pixel_count))
    IL2CPP_REGISTER_METHOD(0x01C784B0, app::IAsyncResult *, BeginInvoke, (app::BrowserNative_Calltype_zfb_copyToColor32 * this_ptr, void * src, void * dest, int32_t pixel_count, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_copyToColor32 * this_ptr, app::IAsyncResult * result))
}
