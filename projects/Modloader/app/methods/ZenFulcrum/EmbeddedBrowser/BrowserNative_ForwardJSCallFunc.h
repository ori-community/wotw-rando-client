#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/BrowserNative_ForwardJSCallFunc.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_ForwardJSCallFunc {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::BrowserNative_ForwardJSCallFunc* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x01DCD100,
        void,
        Invoke,
        app::BrowserNative_ForwardJSCallFunc* this_ptr,
        int32_t browser_id,
        int32_t callback_id,
        app::String* data,
        int32_t size
    )
    IL2CPP_REGISTER_METHOD(
        0x01DCD4D0,
        app::IAsyncResult*,
        BeginInvoke,
        app::BrowserNative_ForwardJSCallFunc* this_ptr,
        int32_t browser_id,
        int32_t callback_id,
        app::String* data,
        int32_t size,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::BrowserNative_ForwardJSCallFunc* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_ForwardJSCallFunc
