#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_ForwardJSCallFunc {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_ForwardJSCallFunc * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01DCD100, void, Invoke, (app::BrowserNative_ForwardJSCallFunc * this_ptr, int32_t browser_id, int32_t callback_id, app::String * data, int32_t size))
    IL2CPP_REGISTER_METHOD(0x01DCD4D0, app::IAsyncResult *, BeginInvoke, (app::BrowserNative_ForwardJSCallFunc * this_ptr, int32_t browser_id, int32_t callback_id, app::String * data, int32_t size, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_ForwardJSCallFunc * this_ptr, app::IAsyncResult * result))
}
