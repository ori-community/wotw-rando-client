#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_VoidTaskResult___Boxed.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Task_1_VoidTaskResult_.h>
#include <Modloader/app/structs/VoidTaskResult.h>

namespace app::classes::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_TResult__ConfiguredTaskAwaiter_System_Threading_Tasks_VoidTaskResult_ {
    IL2CPP_REGISTER_METHOD(0x00151890, void, ctor, (app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_VoidTaskResult___Boxed * this_ptr, app::Task_1_VoidTaskResult_* task, bool continue_on_captured_context))
    IL2CPP_REGISTER_METHOD(0x0018EEE0, bool, get_IsCompleted, (app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_VoidTaskResult___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0018EF00, void, OnCompleted, (app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_VoidTaskResult___Boxed * this_ptr, app::Action* continuation))
    IL2CPP_REGISTER_METHOD(0x0018EF30, void, UnsafeOnCompleted, (app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_VoidTaskResult___Boxed * this_ptr, app::Action* continuation))
    IL2CPP_REGISTER_METHOD(0x001FF6C0, app::VoidTaskResult, GetResult, (app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_VoidTaskResult___Boxed * this_ptr))
} // namespace app::classes::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_TResult__ConfiguredTaskAwaiter_System_Threading_Tasks_VoidTaskResult_
