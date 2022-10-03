#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewWindowFunc {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_NewWindowFunc * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01DCB240, void, Invoke, (app::BrowserNative_NewWindowFunc * this_ptr, int32_t creator_browser_id, int32_t new_browser_id, void* initial_u_r_l))
    IL2CPP_REGISTER_METHOD(0x01DCDC60, app::IAsyncResult*, BeginInvoke, (app::BrowserNative_NewWindowFunc * this_ptr, int32_t creator_browser_id, int32_t new_browser_id, void* initial_u_r_l, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_NewWindowFunc * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewWindowFunc
