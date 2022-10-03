#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_mouseScroll {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_Calltype_zfb_mouseScroll * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01C778D0, void, Invoke, (app::BrowserNative_Calltype_zfb_mouseScroll * this_ptr, int32_t id, int32_t delta_x, int32_t delta_y))
    IL2CPP_REGISTER_METHOD(0x01DC9D60, app::IAsyncResult*, BeginInvoke, (app::BrowserNative_Calltype_zfb_mouseScroll * this_ptr, int32_t id, int32_t delta_x, int32_t delta_y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_mouseScroll * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_mouseScroll
