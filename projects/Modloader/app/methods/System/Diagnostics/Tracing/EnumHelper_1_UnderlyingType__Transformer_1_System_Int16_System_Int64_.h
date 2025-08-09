#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EnumHelper_1_UnderlyingType_Transformer_1_System_Int16_System_Int64_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Diagnostics::Tracing::EnumHelper_1_UnderlyingType__Transformer_1_System_Int16_System_Int64_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::EnumHelper_1_UnderlyingType_Transformer_1_System_Int16_System_Int64_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(0x02C5DB90, int16_t, Invoke, app::EnumHelper_1_UnderlyingType_Transformer_1_System_Int16_System_Int64_* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(
        0x02C5DEE0,
        app::IAsyncResult*,
        BeginInvoke,
        app::EnumHelper_1_UnderlyingType_Transformer_1_System_Int16_System_Int64_* this_ptr,
        int64_t value,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x024CEF10,
        int16_t,
        EndInvoke,
        app::EnumHelper_1_UnderlyingType_Transformer_1_System_Int16_System_Int64_* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::System::Diagnostics::Tracing::EnumHelper_1_UnderlyingType__Transformer_1_System_Int16_System_Int64_
