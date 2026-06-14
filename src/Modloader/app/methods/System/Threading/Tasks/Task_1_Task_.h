#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_System_Threading_Tasks_Task_1__5.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_System_Threading_Tasks_Task_.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/TaskAwaiter_1_System_Threading_Tasks_Task_.h>
#include <Modloader/app/structs/TaskFactory_1_Task_.h>
#include <Modloader/app/structs/Task_1_Task_.h>

namespace app::classes::System::Threading::Tasks::Task_1_Task_ {
    IL2CPP_REGISTER_METHOD(
        0x0277FBD0,
        app::ConfiguredTaskAwaitable_1_System_Threading_Tasks_Task_,
        ConfigureAwait,
        app::Task_1_Task_* this_ptr,
        bool continue_on_captured_context
    )
    IL2CPP_REGISTER_METHOD(0x0277FA00, app::TaskFactory_1_Task_*, get_Factory, )
    IL2CPP_REGISTER_METHOD(0x02A5ACF0, void, ctor, app::Task_1_Task_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A5BE90, bool, TrySetResult, app::Task_1_Task_* this_ptr, app::Task* result)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::TaskAwaiter_1_System_Threading_Tasks_Task_, GetAwaiter, app::Task_1_Task_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02A5BF40,
        app::Task*,
        ContinueWith,
        app::Task_1_Task_* this_ptr,
        app::Action_1_System_Threading_Tasks_Task_1__5* continuation_action
    )
    IL2CPP_REGISTER_METHOD(0x02A5A760, app::Task*, get_Result, app::Task_1_Task_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A5A860, void, InnerInvoke, app::Task_1_Task_* this_ptr)
} // namespace app::classes::System::Threading::Tasks::Task_1_Task_
