#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SDK_XBL_XblCleanupResult.h>

namespace app::classes::XGamingRuntime::SDK_XBL_XblCleanupResult {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::SDK_XBL_XblCleanupResult* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, app::SDK_XBL_XblCleanupResult* this_ptr, int32_t hresult)
    IL2CPP_REGISTER_METHOD(
        0x030BAB70,
        app::IAsyncResult*,
        BeginInvoke,
        app::SDK_XBL_XblCleanupResult* this_ptr,
        int32_t hresult,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::SDK_XBL_XblCleanupResult* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::XGamingRuntime::SDK_XBL_XblCleanupResult
