#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Task_1_VoidTaskResult_.h>
#include <Modloader/app/structs/Action_1_System_Threading_Tasks_Task_1__9.h>
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_System_Threading_Tasks_VoidTaskResult_.h>
#include <Modloader/app/structs/Delegate.h>
#include <Modloader/app/structs/Func_1_System_Threading_Tasks_VoidTaskResult_.h>
#include <Modloader/app/structs/Func_2_Object_System_Threading_Tasks_VoidTaskResult_.h>
#include <Modloader/app/structs/InternalTaskOptions__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StackCrawlMark__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/TaskAwaiter_1_System_Threading_Tasks_VoidTaskResult_.h>
#include <Modloader/app/structs/TaskContinuationOptions__Enum.h>
#include <Modloader/app/structs/TaskCreationOptions__Enum.h>
#include <Modloader/app/structs/TaskFactory_1_VoidTaskResult_.h>
#include <Modloader/app/structs/TaskScheduler.h>
#include <Modloader/app/structs/VoidTaskResult.h>

namespace app::classes::System::Threading::Tasks::Task_1_VoidTaskResult_ {
    IL2CPP_REGISTER_METHOD(0x02A5C300, void, ctor_1, (app::Task_1_VoidTaskResult_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0277F950, bool, TrySetCanceled_1, (app::Task_1_VoidTaskResult_ * this_ptr, app::CancellationToken token_to_record))
    IL2CPP_REGISTER_METHOD(0x02A5D4E0, bool, TrySetResult, (app::Task_1_VoidTaskResult_ * this_ptr, app::VoidTaskResult result))
    IL2CPP_REGISTER_METHOD(0x0277F8C0, bool, TrySetException, (app::Task_1_VoidTaskResult_ * this_ptr, app::Object* exception_object))
    IL2CPP_REGISTER_METHOD(0x0277F980, bool, TrySetCanceled_2, (app::Task_1_VoidTaskResult_ * this_ptr, app::CancellationToken token_to_record, app::Object* cancellation_exception))
    IL2CPP_REGISTER_METHOD(0x02A5C3B0, void, ctor_2, (app::Task_1_VoidTaskResult_ * this_ptr, app::Object* state, app::TaskCreationOptions__Enum options))
    IL2CPP_REGISTER_METHOD(0x02A5C480, void, ctor_3, (app::Task_1_VoidTaskResult_ * this_ptr, app::VoidTaskResult result))
    IL2CPP_REGISTER_METHOD(0x02A5C5A0, void, ctor_4, (app::Task_1_VoidTaskResult_ * this_ptr, bool canceled, app::VoidTaskResult result, app::TaskCreationOptions__Enum creation_options, app::CancellationToken ct))
    IL2CPP_REGISTER_METHOD(0x02A5C690, void, ctor_5, (app::Task_1_VoidTaskResult_ * this_ptr, app::Func_2_Object_System_Threading_Tasks_VoidTaskResult_* function, app::Object* state, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options))
    IL2CPP_REGISTER_METHOD(0x02A5C7D0, void, ctor_6, (app::Task_1_VoidTaskResult_ * this_ptr, app::Func_1_System_Threading_Tasks_VoidTaskResult_* value_selector, app::Task* parent, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler* scheduler, app::StackCrawlMark__Enum* stack_mark))
    IL2CPP_REGISTER_METHOD(0x02A5C900, void, ctor_7, (app::Task_1_VoidTaskResult_ * this_ptr, app::Func_1_System_Threading_Tasks_VoidTaskResult_* value_selector, app::Task* parent, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler* scheduler))
    IL2CPP_REGISTER_METHOD(0x02A5CA50, void, ctor_8, (app::Task_1_VoidTaskResult_ * this_ptr, app::Func_2_Object_System_Threading_Tasks_VoidTaskResult_* value_selector, app::Object* state, app::Task* parent, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler* scheduler, app::StackCrawlMark__Enum* stack_mark))
    IL2CPP_REGISTER_METHOD(0x02A5CB80, void, ctor_9, (app::Task_1_VoidTaskResult_ * this_ptr, app::Delegate* value_selector, app::Object* state, app::Task* parent, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler* scheduler))
    IL2CPP_REGISTER_METHOD(0x02A5CCE0, app::Task_1_VoidTaskResult_*, StartNew_1, (app::Task * parent, app::Func_1_System_Threading_Tasks_VoidTaskResult_* function, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler* scheduler, app::StackCrawlMark__Enum* stack_mark))
    IL2CPP_REGISTER_METHOD(0x02A5CFF0, app::Task_1_VoidTaskResult_*, StartNew_2, (app::Task * parent, app::Func_2_Object_System_Threading_Tasks_VoidTaskResult_* function, app::Object* state, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler* scheduler, app::StackCrawlMark__Enum* stack_mark))
    IL2CPP_REGISTER_METHOD(0x02A5D300, app::String*, get_DebuggerDisplayResultDescription, (app::Task_1_VoidTaskResult_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A5D3F0, app::String*, get_DebuggerDisplayMethodDescription, (app::Task_1_VoidTaskResult_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0277F770, void, DangerousSetResult, (app::Task_1_VoidTaskResult_ * this_ptr, app::VoidTaskResult result))
    IL2CPP_REGISTER_METHOD(0x0277F7C0, app::VoidTaskResult, get_Result, (app::Task_1_VoidTaskResult_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004430B0, app::VoidTaskResult, get_ResultOnSuccess, (app::Task_1_VoidTaskResult_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0277F810, app::VoidTaskResult, GetResultCore, (app::Task_1_VoidTaskResult_ * this_ptr, bool wait_completion_notification))
    IL2CPP_REGISTER_METHOD(0x0277FA00, app::TaskFactory_1_VoidTaskResult_*, get_Factory, ())
    IL2CPP_REGISTER_METHOD(0x0277FB00, void, InnerInvoke, (app::Task_1_VoidTaskResult_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::TaskAwaiter_1_System_Threading_Tasks_VoidTaskResult_, GetAwaiter, (app::Task_1_VoidTaskResult_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0277FBD0, app::ConfiguredTaskAwaitable_1_System_Threading_Tasks_VoidTaskResult_, ConfigureAwait, (app::Task_1_VoidTaskResult_ * this_ptr, bool continue_on_captured_context))
    IL2CPP_REGISTER_METHOD(0x02A5D590, app::Task*, ContinueWith_1, (app::Task_1_VoidTaskResult_ * this_ptr, app::Action_1_System_Threading_Tasks_Task_1__9* continuation_action))
    IL2CPP_REGISTER_METHOD(0x02A5D690, app::Task*, ContinueWith_2, (app::Task_1_VoidTaskResult_ * this_ptr, app::Action_1_System_Threading_Tasks_Task_1__9* continuation_action, app::TaskScheduler* scheduler, app::CancellationToken cancellation_token, app::TaskContinuationOptions__Enum continuation_options, app::StackCrawlMark__Enum* stack_mark))
    IL2CPP_REGISTER_METHOD(0x02780010, void, cctor, ())
} // namespace app::classes::System::Threading::Tasks::Task_1_VoidTaskResult_
