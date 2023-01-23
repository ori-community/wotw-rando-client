#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BrowserNative_WindowCallbackFunc.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_WindowCallbackFunc {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_WindowCallbackFunc * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (app::BrowserNative_WindowCallbackFunc * this_ptr, int32_t window_id, void* data))
    IL2CPP_REGISTER_METHOD(0x01DCE3A0, app::IAsyncResult*, BeginInvoke, (app::BrowserNative_WindowCallbackFunc * this_ptr, int32_t window_id, void* data, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_WindowCallbackFunc * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_WindowCallbackFunc
