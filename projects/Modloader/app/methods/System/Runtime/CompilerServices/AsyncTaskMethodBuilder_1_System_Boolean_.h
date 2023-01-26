#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_System_Boolean_.h>
#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_System_Boolean___Boxed.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean_.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Object_.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_Task_.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IAsyncStateMachine.h>
#include <Modloader/app/structs/SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31.h>
#include <Modloader/app/structs/Task_1_System_Boolean_.h>

namespace app::classes::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x00C537F0, app::AsyncTaskMethodBuilder_1_System_Boolean_, Create, ())
    IL2CPP_REGISTER_METHOD(0x001A3BA0, void, Start, (app::AsyncTaskMethodBuilder_1_System_Boolean___Boxed * this_ptr, app::SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31* state_machine))
    IL2CPP_REGISTER_METHOD(0x001FF3E0, app::Task_1_System_Boolean_*, get_Task, (app::AsyncTaskMethodBuilder_1_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001A3B90, void, AwaitUnsafeOnCompleted_1, (app::AsyncTaskMethodBuilder_1_System_Boolean___Boxed * this_ptr, app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_Task_* awaiter, app::SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31* state_machine))
    IL2CPP_REGISTER_METHOD(0x001A3B80, void, AwaitUnsafeOnCompleted_2, (app::AsyncTaskMethodBuilder_1_System_Boolean___Boxed * this_ptr, app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean_* awaiter, app::SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31* state_machine))
    IL2CPP_REGISTER_METHOD(0x001FF460, void, SetException, (app::AsyncTaskMethodBuilder_1_System_Boolean___Boxed * this_ptr, app::Exception* exception))
    IL2CPP_REGISTER_METHOD(0x001FF3F0, void, SetResult_1, (app::AsyncTaskMethodBuilder_1_System_Boolean___Boxed * this_ptr, bool result))
    IL2CPP_REGISTER_METHOD(0x0018ED60, void, SetStateMachine, (app::AsyncTaskMethodBuilder_1_System_Boolean___Boxed * this_ptr, app::IAsyncStateMachine* state_machine))
    IL2CPP_REGISTER_METHOD(0x001A3B90, void, AwaitUnsafeOnCompleted_3, (app::AsyncTaskMethodBuilder_1_System_Boolean___Boxed * this_ptr, app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Object_* awaiter, app::SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31* state_machine))
    IL2CPP_REGISTER_METHOD(0x001FF400, void, SetResult_2, (app::AsyncTaskMethodBuilder_1_System_Boolean___Boxed * this_ptr, app::Task_1_System_Boolean_* completed_task))
    IL2CPP_REGISTER_METHOD(0x001FF470, app::Task_1_System_Boolean_*, GetTaskForResult, (app::AsyncTaskMethodBuilder_1_System_Boolean___Boxed * this_ptr, bool result))
    IL2CPP_REGISTER_METHOD(0x02768260, void, cctor, ())
} // namespace app::classes::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1_System_Boolean_
