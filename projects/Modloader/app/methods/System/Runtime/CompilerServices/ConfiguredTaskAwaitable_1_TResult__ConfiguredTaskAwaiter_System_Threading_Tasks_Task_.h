#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_Task___Boxed.h>
#include <Modloader/app/structs/Task.h>

namespace app::classes::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_TResult__ConfiguredTaskAwaiter_System_Threading_Tasks_Task_ {
    IL2CPP_REGISTER_METHOD(
        0x0018EEE0,
        bool,
        get_IsCompleted,
        app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_Task___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001FF750,
        app::Task*,
        GetResult,
        app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_Task___Boxed* this_ptr
    )
} // namespace app::classes::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_TResult__ConfiguredTaskAwaiter_System_Threading_Tasks_Task_
