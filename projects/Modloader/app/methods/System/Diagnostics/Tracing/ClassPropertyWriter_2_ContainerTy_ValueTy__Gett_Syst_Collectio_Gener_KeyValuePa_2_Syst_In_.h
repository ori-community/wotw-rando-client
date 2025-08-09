#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/ClassPropertyWriter_2_ContainerTy_ValueTy_Gett_Syst_Collectio_Gener_KeyValuePa_2_Syst_Int_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Diagnostics::Tracing::
    ClassPropertyWriter_2_ContainerType_ValueType__Getter_System_Collections_Generic_KeyValuePair_2_System_Int32_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_Collections_Generic_KeyValuePair_2_System_Int32_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x028872B0,
        int32_t,
        Invoke,
        app::ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_Collections_Generic_KeyValuePair_2_System_Int32_* this_ptr,
        app::KeyValuePair_2_System_Object_System_Object_ container
    )
    IL2CPP_REGISTER_METHOD(
        0x02FBB7B0,
        app::IAsyncResult*,
        BeginInvoke,
        app::ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_Collections_Generic_KeyValuePair_2_System_Int32_* this_ptr,
        app::KeyValuePair_2_System_Object_System_Object_ container,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00F550D0,
        int32_t,
        EndInvoke,
        app::ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_Collections_Generic_KeyValuePair_2_System_Int32_* this_ptr,
        app::IAsyncResult* result
    )
} // namespace
  // app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_ContainerType_ValueType__Getter_System_Collections_Generic_KeyValuePair_2_System_Int32_
