#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_TimeSpan_System_Object_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TimeSpan.h>

namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_ContainerType_ValueType__Getter_System_TimeSpan_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_TimeSpan_System_Object_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02B34D70,
        app::Object*,
        Invoke,
        app::ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_TimeSpan_System_Object_* this_ptr,
        app::TimeSpan container
    )
    IL2CPP_REGISTER_METHOD(
        0x02B35180,
        app::IAsyncResult*,
        BeginInvoke,
        app::ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_TimeSpan_System_Object_* this_ptr,
        app::TimeSpan container,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00611B40,
        app::Object*,
        EndInvoke,
        app::ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_TimeSpan_System_Object_* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_ContainerType_ValueType__Getter_System_TimeSpan_System_Object_
