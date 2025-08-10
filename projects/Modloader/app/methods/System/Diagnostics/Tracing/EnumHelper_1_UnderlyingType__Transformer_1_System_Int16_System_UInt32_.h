#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EnumHelper_1_UnderlyingType_Transformer_1_System_Int16_System_UInt32_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Diagnostics::Tracing::EnumHelper_1_UnderlyingType__Transformer_1_System_Int16_System_UInt32_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::EnumHelper_1_UnderlyingType_Transformer_1_System_Int16_System_UInt32_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(0x02C5D790, int16_t, Invoke, app::EnumHelper_1_UnderlyingType_Transformer_1_System_Int16_System_UInt32_* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(
        0x02C5E880,
        app::IAsyncResult*,
        BeginInvoke,
        app::EnumHelper_1_UnderlyingType_Transformer_1_System_Int16_System_UInt32_* this_ptr,
        uint32_t value,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x024CEF10,
        int16_t,
        EndInvoke,
        app::EnumHelper_1_UnderlyingType_Transformer_1_System_Int16_System_UInt32_* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::System::Diagnostics::Tracing::EnumHelper_1_UnderlyingType__Transformer_1_System_Int16_System_UInt32_
