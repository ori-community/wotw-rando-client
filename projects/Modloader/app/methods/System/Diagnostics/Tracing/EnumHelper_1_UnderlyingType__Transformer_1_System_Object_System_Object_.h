#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EnumHelper_1_UnderlyingType_Transformer_1_System_Object_System_Object_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Diagnostics::Tracing::EnumHelper_1_UnderlyingType__Transformer_1_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::EnumHelper_1_UnderlyingType_Transformer_1_System_Object_System_Object_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x01852930,
        app::Object*,
        Invoke,
        app::EnumHelper_1_UnderlyingType_Transformer_1_System_Object_System_Object_* this_ptr,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x00674080,
        app::IAsyncResult*,
        BeginInvoke,
        app::EnumHelper_1_UnderlyingType_Transformer_1_System_Object_System_Object_* this_ptr,
        app::Object* value,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00611B40,
        app::Object*,
        EndInvoke,
        app::EnumHelper_1_UnderlyingType_Transformer_1_System_Object_System_Object_* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::System::Diagnostics::Tracing::EnumHelper_1_UnderlyingType__Transformer_1_System_Object_System_Object_
