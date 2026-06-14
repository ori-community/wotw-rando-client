#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Comparison_1_UberPoolManager_ObjectTracking_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UberPoolManager_ObjectTracking.h>

namespace app::classes::System::Comparison_1_UberPoolManager_ObjectTracking_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Comparison_1_UberPoolManager_ObjectTracking_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02B840F0,
        int32_t,
        Invoke,
        app::Comparison_1_UberPoolManager_ObjectTracking_* this_ptr,
        app::UberPoolManager_ObjectTracking x,
        app::UberPoolManager_ObjectTracking y
    )
    IL2CPP_REGISTER_METHOD(
        0x02C80BD0,
        app::IAsyncResult*,
        BeginInvoke,
        app::Comparison_1_UberPoolManager_ObjectTracking_* this_ptr,
        app::UberPoolManager_ObjectTracking x,
        app::UberPoolManager_ObjectTracking y,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, app::Comparison_1_UberPoolManager_ObjectTracking_* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Comparison_1_UberPoolManager_ObjectTracking_
