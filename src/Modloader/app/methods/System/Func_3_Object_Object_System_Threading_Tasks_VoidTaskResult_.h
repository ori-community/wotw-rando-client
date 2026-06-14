#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Func_3_Object_Object_System_Threading_Tasks_VoidTaskResult_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/VoidTaskResult.h>

namespace app::classes::System::Func_3_Object_Object_System_Threading_Tasks_VoidTaskResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::Func_3_Object_Object_System_Threading_Tasks_VoidTaskResult_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x01D3D560,
        app::VoidTaskResult,
        Invoke,
        app::Func_3_Object_Object_System_Threading_Tasks_VoidTaskResult_* this_ptr,
        app::Object* arg1,
        app::Object* arg2
    )
    IL2CPP_REGISTER_METHOD(
        0x01435260,
        app::IAsyncResult*,
        BeginInvoke,
        app::Func_3_Object_Object_System_Threading_Tasks_VoidTaskResult_* this_ptr,
        app::Object* arg1,
        app::Object* arg2,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x008A1BF0,
        app::VoidTaskResult,
        EndInvoke,
        app::Func_3_Object_Object_System_Threading_Tasks_VoidTaskResult_* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::System::Func_3_Object_Object_System_Threading_Tasks_VoidTaskResult_
