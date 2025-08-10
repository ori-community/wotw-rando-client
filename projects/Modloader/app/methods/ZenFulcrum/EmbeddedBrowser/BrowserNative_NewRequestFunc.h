#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/BrowserNative_NewRequestFunc.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewRequestFunc {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::BrowserNative_NewRequestFunc* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, app::BrowserNative_NewRequestFunc* this_ptr, int32_t request_id, app::String* url)
    IL2CPP_REGISTER_METHOD(
        0x01DCDB90,
        app::IAsyncResult*,
        BeginInvoke,
        app::BrowserNative_NewRequestFunc* this_ptr,
        int32_t request_id,
        app::String* url,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::BrowserNative_NewRequestFunc* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewRequestFunc
