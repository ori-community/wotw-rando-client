#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_System_Threading_Tasks_Task_1__3.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__28.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/TaskAwaiter_1_System_Byte_.h>
#include <Modloader/app/structs/Task_1_System_Byte_.h>
#include <Modloader/app/structs/Task_1_Task_1_System_Boolean_.h>

namespace app::classes::System::Threading::Tasks::Task_1_System_Byte___ {
    IL2CPP_REGISTER_METHOD(
        0x02A5BF40,
        app::Task*,
        ContinueWith_1,
        app::Task_1_System_Byte_* this_ptr,
        app::Action_1_System_Threading_Tasks_Task_1__3* continuation_action
    )
    IL2CPP_REGISTER_METHOD(0x02A5A760, app::Byte__Array*, get_Result, app::Task_1_System_Byte_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::TaskAwaiter_1_System_Byte_, GetAwaiter, app::Task_1_System_Byte_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01542810,
        app::Task_1_Task_1_System_Boolean_*,
        ContinueWith_2,
        app::Task_1_System_Byte_* this_ptr,
        app::Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__28* continuation_function
    )
} // namespace app::classes::System::Threading::Tasks::Task_1_System_Byte___
