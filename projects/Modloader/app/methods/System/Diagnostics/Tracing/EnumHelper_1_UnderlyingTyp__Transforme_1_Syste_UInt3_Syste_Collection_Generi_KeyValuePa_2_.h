#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EnumHelper_1_UnderlyingTyp_Transforme_1_Syste_UInt3_Syste_Collection_Generi_KeyValuePai_2_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Diagnostics::Tracing::EnumHelper_1_UnderlyingType__Transformer_1_System_UInt32_System_Collections_Generic_KeyValuePair_2_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::EnumHelper_1_UnderlyingType_Transformer_1_System_UInt32_System_Collections_Generic_KeyValuePair_2_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x028872B0,
        uint32_t,
        Invoke,
        app::EnumHelper_1_UnderlyingType_Transformer_1_System_UInt32_System_Collections_Generic_KeyValuePair_2_* this_ptr,
        app::KeyValuePair_2_System_Object_System_Object_ value
    )
    IL2CPP_REGISTER_METHOD(
        0x02F462C0,
        app::IAsyncResult*,
        BeginInvoke,
        app::EnumHelper_1_UnderlyingType_Transformer_1_System_UInt32_System_Collections_Generic_KeyValuePair_2_* this_ptr,
        app::KeyValuePair_2_System_Object_System_Object_ value,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00F550D0,
        uint32_t,
        EndInvoke,
        app::EnumHelper_1_UnderlyingType_Transformer_1_System_UInt32_System_Collections_Generic_KeyValuePair_2_* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::System::Diagnostics::Tracing::EnumHelper_1_UnderlyingType__Transformer_1_System_UInt32_System_Collections_Generic_KeyValuePair_2_
