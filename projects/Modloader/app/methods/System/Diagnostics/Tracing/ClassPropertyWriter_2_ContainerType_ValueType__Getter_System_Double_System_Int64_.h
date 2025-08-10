#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_Double_System_Int64_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_ContainerType_ValueType__Getter_System_Double_System_Int64_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_Double_System_Int64_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02B32390,
        int64_t,
        Invoke,
        app::ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_Double_System_Int64_* this_ptr,
        double container
    )
    IL2CPP_REGISTER_METHOD(
        0x02B326E0,
        app::IAsyncResult*,
        BeginInvoke,
        app::ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_Double_System_Int64_* this_ptr,
        double container,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00F52480,
        int64_t,
        EndInvoke,
        app::ClassPropertyWriter_2_ContainerType_ValueType_Getter_System_Double_System_Int64_* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_ContainerType_ValueType__Getter_System_Double_System_Int64_
