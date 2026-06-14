#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/DateTimeOffset.h>
#include <Modloader/app/structs/EnumHelper_1_UnderlyingType_Transformer_1_System_Byte_System_DateTimeOffset_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Diagnostics::Tracing::EnumHelper_1_UnderlyingType__Transformer_1_System_Byte_System_DateTimeOffset_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::EnumHelper_1_UnderlyingType_Transformer_1_System_Byte_System_DateTimeOffset_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02885850,
        uint8_t,
        Invoke,
        app::EnumHelper_1_UnderlyingType_Transformer_1_System_Byte_System_DateTimeOffset_* this_ptr,
        app::DateTimeOffset value
    )
    IL2CPP_REGISTER_METHOD(
        0x02C5AE80,
        app::IAsyncResult*,
        BeginInvoke,
        app::EnumHelper_1_UnderlyingType_Transformer_1_System_Byte_System_DateTimeOffset_* this_ptr,
        app::DateTimeOffset value,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x008A1BF0,
        uint8_t,
        EndInvoke,
        app::EnumHelper_1_UnderlyingType_Transformer_1_System_Byte_System_DateTimeOffset_* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::System::Diagnostics::Tracing::EnumHelper_1_UnderlyingType__Transformer_1_System_Byte_System_DateTimeOffset_
