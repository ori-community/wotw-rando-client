#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_Char_System_Int32_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_ContainerType_ValueType__Getter_System_Char_System_Int32_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_Char_System_Int32_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02B32AF0,
        int32_t,
        Invoke,
        app::ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_Char_System_Int32_* this_ptr,
        char16_t container
    )
    IL2CPP_REGISTER_METHOD(
        0x02FBB540,
        app::IAsyncResult*,
        BeginInvoke,
        app::ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_Char_System_Int32_* this_ptr,
        char16_t container,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00F550D0,
        int32_t,
        EndInvoke,
        app::ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_Char_System_Int32_* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_ContainerType_ValueType__Getter_System_Char_System_Int32_
