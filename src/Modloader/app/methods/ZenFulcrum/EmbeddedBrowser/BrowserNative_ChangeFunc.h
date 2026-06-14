#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/BrowserNative_ChangeFunc.h>
#include <Modloader/app/structs/BrowserNative_ChangeType__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_ChangeFunc {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::BrowserNative_ChangeFunc* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x01DCB240,
        void,
        Invoke,
        app::BrowserNative_ChangeFunc* this_ptr,
        int32_t browser_id,
        app::BrowserNative_ChangeType__Enum change_type,
        app::String* arg1
    )
    IL2CPP_REGISTER_METHOD(
        0x01DCC570,
        app::IAsyncResult*,
        BeginInvoke,
        app::BrowserNative_ChangeFunc* this_ptr,
        int32_t browser_id,
        app::BrowserNative_ChangeType__Enum change_type,
        app::String* arg1,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::BrowserNative_ChangeFunc* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_ChangeFunc
