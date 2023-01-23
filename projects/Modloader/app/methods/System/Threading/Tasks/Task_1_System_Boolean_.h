#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TaskAwaiter_1_System_Boolean_.h>
#include <Modloader/app/structs/Task_1_System_Boolean_.h>
#include <Modloader/app/structs/TaskCreationOptions__Enum.h>
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_System_Boolean_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Func_2_Object_Boolean_.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/InternalTaskOptions__Enum.h>
#include <Modloader/app/structs/TaskScheduler.h>
#include <Modloader/app/structs/StackCrawlMark__Enum.h>
#include <Modloader/app/structs/Delegate.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TaskFactory_1_System_Boolean_.h>
#include <Modloader/app/structs/Action_1_System_Threading_Tasks_Task_1__6.h>
#include <Modloader/app/structs/TaskContinuationOptions__Enum.h>

namespace app::classes::System::Threading::Tasks::Task_1_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::TaskAwaiter_1_System_Boolean_, GetAwaiter, (app::Task_1_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470A320, Task_1_System_Boolean__GetAwaiter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0277E780, void, ctor_1, (app::Task_1_System_Boolean_ * this_ptr, bool canceled, bool result, app::TaskCreationOptions__Enum creation_options, app::CancellationToken ct))
    IL2CPP_REGISTER_METHODINFO(0x0472C720, Task_1_System_Boolean___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0277FBD0, app::ConfiguredTaskAwaitable_1_System_Boolean_, ConfigureAwait, (app::Task_1_System_Boolean_ * this_ptr, bool continue_on_captured_context))
    IL2CPP_REGISTER_METHODINFO(0x0476C710, Task_1_System_Boolean__ConfigureAwait__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0277E4E0, void, ctor_2, (app::Task_1_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471E788, Task_1_System_Boolean___ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0277F6C0, bool, TrySetResult, (app::Task_1_System_Boolean_ * this_ptr, bool result))
    IL2CPP_REGISTER_METHODINFO(0x04700F80, Task_1_System_Boolean__TrySetResult__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0277E590, void, ctor_3, (app::Task_1_System_Boolean_ * this_ptr, app::Object* state, app::TaskCreationOptions__Enum options))
    IL2CPP_REGISTER_METHOD(0x0277E660, void, ctor_4, (app::Task_1_System_Boolean_ * this_ptr, bool result))
    IL2CPP_REGISTER_METHOD(0x0277E870, void, ctor_5, (app::Task_1_System_Boolean_ * this_ptr, app::Func_2_Object_Boolean_* function, app::Object* state, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options))
    IL2CPP_REGISTER_METHOD(0x0277E9B0, void, ctor_6, (app::Task_1_System_Boolean_ * this_ptr, app::Func_1_Boolean_* value_selector, app::Task* parent, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler* scheduler, app::StackCrawlMark__Enum* stack_mark))
    IL2CPP_REGISTER_METHOD(0x0277EAE0, void, ctor_7, (app::Task_1_System_Boolean_ * this_ptr, app::Func_1_Boolean_* value_selector, app::Task* parent, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler* scheduler))
    IL2CPP_REGISTER_METHODINFO(0x04790048, Task_1_System_Boolean___ctor_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0277EC30, void, ctor_8, (app::Task_1_System_Boolean_ * this_ptr, app::Func_2_Object_Boolean_* value_selector, app::Object* state, app::Task* parent, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler* scheduler, app::StackCrawlMark__Enum* stack_mark))
    IL2CPP_REGISTER_METHOD(0x0277ED60, void, ctor_9, (app::Task_1_System_Boolean_ * this_ptr, app::Delegate* value_selector, app::Object* state, app::Task* parent, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler* scheduler))
    IL2CPP_REGISTER_METHODINFO(0x04769D88, Task_1_System_Boolean___ctor_8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0277EEC0, app::Task_1_System_Boolean_*, StartNew_1, (app::Task * parent, app::Func_1_Boolean_* function, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler* scheduler, app::StackCrawlMark__Enum* stack_mark))
    IL2CPP_REGISTER_METHODINFO(0x047560B8, Task_1_System_Boolean__StartNew__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0277F1D0, app::Task_1_System_Boolean_*, StartNew_2, (app::Task * parent, app::Func_2_Object_Boolean_* function, app::Object* state, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler* scheduler, app::StackCrawlMark__Enum* stack_mark))
    IL2CPP_REGISTER_METHODINFO(0x047399A8, Task_1_System_Boolean__StartNew_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0277F4E0, app::String*, get_DebuggerDisplayResultDescription, (app::Task_1_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0277F5D0, app::String*, get_DebuggerDisplayMethodDescription, (app::Task_1_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0277F770, void, DangerousSetResult, (app::Task_1_System_Boolean_ * this_ptr, bool result))
    IL2CPP_REGISTER_METHOD(0x0277F7C0, bool, get_Result, (app::Task_1_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_ResultOnSuccess, (app::Task_1_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0277F810, bool, GetResultCore, (app::Task_1_System_Boolean_ * this_ptr, bool wait_completion_notification))
    IL2CPP_REGISTER_METHOD(0x0277F8C0, bool, TrySetException, (app::Task_1_System_Boolean_ * this_ptr, app::Object* exception_object))
    IL2CPP_REGISTER_METHOD(0x0277F950, bool, TrySetCanceled_1, (app::Task_1_System_Boolean_ * this_ptr, app::CancellationToken token_to_record))
    IL2CPP_REGISTER_METHOD(0x0277F980, bool, TrySetCanceled_2, (app::Task_1_System_Boolean_ * this_ptr, app::CancellationToken token_to_record, app::Object* cancellation_exception))
    IL2CPP_REGISTER_METHOD(0x0277FA00, app::TaskFactory_1_System_Boolean_*, get_Factory, ())
    IL2CPP_REGISTER_METHOD(0x0277FB00, void, InnerInvoke, (app::Task_1_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0277FC50, app::Task*, ContinueWith_1, (app::Task_1_System_Boolean_ * this_ptr, app::Action_1_System_Threading_Tasks_Task_1__6* continuation_action))
    IL2CPP_REGISTER_METHOD(0x0277FD50, app::Task*, ContinueWith_2, (app::Task_1_System_Boolean_ * this_ptr, app::Action_1_System_Threading_Tasks_Task_1__6* continuation_action, app::TaskScheduler* scheduler, app::CancellationToken cancellation_token, app::TaskContinuationOptions__Enum continuation_options, app::StackCrawlMark__Enum* stack_mark))
    IL2CPP_REGISTER_METHODINFO(0x047454C0, Task_1_System_Boolean__ContinueWith_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02780010, void, cctor, ())
} // namespace app::classes::System::Threading::Tasks::Task_1_System_Boolean_
