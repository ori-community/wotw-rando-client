#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Object_.h>
#include <Modloader/app/structs/Action_1_System_Threading_Tasks_Task_.h>
#include <Modloader/app/structs/Action_2_System_Threading_Tasks_Task_Object_.h>
#include <Modloader/app/structs/AggregateException.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable.h>
#include <Modloader/app/structs/Delegate.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/ExceptionDispatchInfo.h>
#include <Modloader/app/structs/ExecutionContext.h>
#include <Modloader/app/structs/Func_1_Int32_.h>
#include <Modloader/app/structs/Func_1_Object_.h>
#include <Modloader/app/structs/Func_1_System_IO_Stream_.h>
#include <Modloader/app/structs/Func_1_System_Threading_Tasks_Task_.h>
#include <Modloader/app/structs/Func_1_System_Threading_Tasks_Task_1_.h>
#include <Modloader/app/structs/Func_1_System_Threading_Tasks_Task_1__1.h>
#include <Modloader/app/structs/Func_1_System_Threading_Tasks_Task_1__2.h>
#include <Modloader/app/structs/ITaskCompletionAction.h>
#include <Modloader/app/structs/InternalTaskOptions__Enum.h>
#include <Modloader/app/structs/ManualResetEventSlim.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/OperationCanceledException.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_.h>
#include <Modloader/app/structs/StackCrawlMark__Enum.h>
#include <Modloader/app/structs/StackGuard.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/TaskAwaiter.h>
#include <Modloader/app/structs/TaskContinuation.h>
#include <Modloader/app/structs/TaskContinuationOptions__Enum.h>
#include <Modloader/app/structs/TaskCreationOptions__Enum.h>
#include <Modloader/app/structs/TaskFactory.h>
#include <Modloader/app/structs/TaskScheduler.h>
#include <Modloader/app/structs/TaskStatus__Enum.h>
#include <Modloader/app/structs/Task_1_SystemIntegration_Races_RaceRequestResultEntry__1.h>
#include <Modloader/app/structs/Task_1_SystemIntegration_Races_RaceRequestResultEntry___Array.h>
#include <Modloader/app/structs/Task_1_System_Boolean_.h>
#include <Modloader/app/structs/Task_1_System_Byte_.h>
#include <Modloader/app/structs/Task_1_System_IO_Stream_.h>
#include <Modloader/app/structs/Task_1_System_Int32_.h>
#include <Modloader/app/structs/Task_1_System_Net_WebResponse_.h>
#include <Modloader/app/structs/Task_1_System_Object_.h>
#include <Modloader/app/structs/Task_1_System_Object__1.h>
#include <Modloader/app/structs/Task_1_System_Object___Array.h>
#include <Modloader/app/structs/Task_1_System_Tuple_4_.h>
#include <Modloader/app/structs/Task_1_Task_.h>
#include <Modloader/app/structs/Task_1_VoidTaskResult_.h>
#include <Modloader/app/structs/Task_ContingentProperties.h>
#include <Modloader/app/structs/Task__Array.h>
#include <Modloader/app/structs/ThreadAbortException.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/Tuple_4_Int32_Int32_Int32_Boolean_.h>
#include <Modloader/app/structs/WaitHandle.h>
#include <Modloader/app/structs/YieldAwaitable.h>

namespace app::classes::System::Threading::Tasks::Task {
    IL2CPP_REGISTER_METHOD(0x02330800, bool, AddToActiveTasks, app::Task* task)
    IL2CPP_REGISTER_METHOD(0x023309F0, void, RemoveFromActiveTasks, int32_t task_id)
    IL2CPP_REGISTER_METHOD(
        0x02330B90,
        void,
        ctor_1,
        app::Task* this_ptr,
        bool canceled,
        app::TaskCreationOptions__Enum creation_options,
        app::CancellationToken ct
    )
    IL2CPP_REGISTER_METHOD(0x02330D30, void, ctor_2, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02330D40,
        void,
        ctor_3,
        app::Task* this_ptr,
        app::Object* state,
        app::TaskCreationOptions__Enum creation_options,
        bool promise_style
    )
    IL2CPP_REGISTER_METHOD(
        0x02330E60,
        void,
        ctor_4,
        app::Task* this_ptr,
        app::Delegate* action,
        app::Object* state,
        app::Task* parent,
        app::CancellationToken cancellation_token,
        app::TaskCreationOptions__Enum creation_options,
        app::InternalTaskOptions__Enum internal_options,
        app::TaskScheduler* scheduler
    )
    IL2CPP_REGISTER_METHOD(
        0x02330F90,
        void,
        TaskConstructorCore,
        app::Task* this_ptr,
        app::Object* action,
        app::Object* state,
        app::CancellationToken cancellation_token,
        app::TaskCreationOptions__Enum creation_options,
        app::InternalTaskOptions__Enum internal_options,
        app::TaskScheduler* scheduler
    )
    IL2CPP_REGISTER_METHOD(
        0x023311C0,
        void,
        AssignCancellationToken,
        app::Task* this_ptr,
        app::CancellationToken cancellation_token,
        app::Task* antecedent,
        app::TaskContinuation* continuation
    )
    IL2CPP_REGISTER_METHOD(0x02331610, void, TaskCancelCallback, app::Object* o)
    IL2CPP_REGISTER_METHOD(0x02331750, app::String*, get_DebuggerDisplayMethodDescription, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02331860, void, PossiblyCaptureContext, app::Task* this_ptr, app::StackCrawlMark__Enum* stack_mark)
    IL2CPP_REGISTER_METHOD(0x02331970, app::TaskCreationOptions__Enum, get_Options, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015FAE60, app::TaskCreationOptions__Enum, OptionsMethod, int32_t flags)
    IL2CPP_REGISTER_METHOD(0x02331A10, bool, AtomicStateUpdate_1, app::Task* this_ptr, int32_t new_bits, int32_t illegal_bits)
    IL2CPP_REGISTER_METHOD(0x02331B10, bool, AtomicStateUpdate_2, app::Task* this_ptr, int32_t new_bits, int32_t illegal_bits, int32_t* old_flags)
    IL2CPP_REGISTER_METHOD(0x02331C30, void, SetNotificationForWaitCompletion, app::Task* this_ptr, bool enabled)
    IL2CPP_REGISTER_METHOD(0x02331D40, bool, NotifyDebuggerOfWaitCompletionIfNecessary, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02331D90, bool, AnyTaskRequiresNotifyDebuggerOfWaitCompletion, app::Task__Array* tasks)
    IL2CPP_REGISTER_METHOD(0x02331E20, bool, get_IsWaitNotificationEnabledOrNotRanToCompletion, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02331E40, bool, get_ShouldNotifyDebuggerOfWaitCompletion, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02331E40, bool, get_IsWaitNotificationEnabled, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02331E60, void, NotifyDebuggerOfWaitCompletion, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02331E90, bool, MarkStarted, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, FireTaskScheduledIfNeeded, app::Task* this_ptr, app::TaskScheduler* ts)
    IL2CPP_REGISTER_METHOD(0x02331EB0, void, AddNewChild, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02331F40, void, DisregardChild, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02331F80,
        app::Task*,
        InternalStartNew,
        app::Task* creating_task,
        app::Delegate* action,
        app::Object* state,
        app::CancellationToken cancellation_token,
        app::TaskScheduler* scheduler,
        app::TaskCreationOptions__Enum options,
        app::InternalTaskOptions__Enum internal_options,
        app::StackCrawlMark__Enum* stack_mark
    )
    IL2CPP_REGISTER_METHOD(0x02332190, int32_t, NewId, )
    IL2CPP_REGISTER_METHOD(0x02332250, int32_t, get_Id, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023323B0, app::Task*, get_InternalCurrent, )
    IL2CPP_REGISTER_METHOD(0x02332490, app::Task*, InternalCurrentIfAttached, app::TaskCreationOptions__Enum creation_options)
    IL2CPP_REGISTER_METHOD(0x02332540, app::StackGuard*, get_CurrentStackGuard, )
    IL2CPP_REGISTER_METHOD(0x02332740, app::AggregateException*, get_Exception, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02332770, app::TaskStatus__Enum, get_Status, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023327D0, bool, get_IsCanceled, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023327F0, bool, get_IsCancellationRequested, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02332830, app::Task_ContingentProperties*, EnsureContingentPropertiesInitialized, app::Task* this_ptr, bool needs_protection)
    IL2CPP_REGISTER_METHOD(0x02332860, app::Task_ContingentProperties*, EnsureContingentPropertiesInitializedCore, app::Task* this_ptr, bool needs_protection)
    IL2CPP_REGISTER_METHOD(0x02332A50, app::CancellationToken, get_CancellationToken, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02332A70, bool, get_IsCancellationAcknowledged, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02332A90, bool, get_IsCompleted, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02332B30, bool, IsCompletedMethod, int32_t flags)
    IL2CPP_REGISTER_METHOD(0x02332B40, bool, get_IsRanToCompletion, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02332B60, app::TaskCreationOptions__Enum, get_CreationOptions, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02332B80, app::WaitHandle*, IAsyncResult_get_AsyncWaitHandle, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Object*, get_AsyncState, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IAsyncResult_get_CompletedSynchronously, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::TaskScheduler*, get_ExecutingTaskScheduler, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02332C90, app::TaskFactory*, get_Factory, )
    IL2CPP_REGISTER_METHOD(0x02332D30, app::Task*, get_CompletedTask, )
    IL2CPP_REGISTER_METHOD(0x02332F40, app::ManualResetEventSlim*, get_CompletedEvent, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02333160, bool, get_IsSelfReplicatingRoot, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02333180, bool, get_IsChildReplica, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023331A0, bool, get_ExceptionRecorded, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023331F0, bool, get_IsFaulted, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02333210, app::ExecutionContext*, get_CapturedContext, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023332E0, void, set_CapturedContext, app::Task* this_ptr, app::ExecutionContext* value)
    IL2CPP_REGISTER_METHOD(0x02333340, app::ExecutionContext*, CopyExecutionContext, app::ExecutionContext* captured_context)
    IL2CPP_REGISTER_METHOD(0x02333400, void, Dispose_1, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023334B0, void, Dispose_2, app::Task* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x02333600, void, ScheduleAndStart, app::Task* this_ptr, bool needs_protection)
    IL2CPP_REGISTER_METHOD(0x02333910, void, AddException_1, app::Task* this_ptr, app::Object* exception_object)
    IL2CPP_REGISTER_METHOD(0x02333920, void, AddException_2, app::Task* this_ptr, app::Object* exception_object, bool represents_cancellation)
    IL2CPP_REGISTER_METHOD(0x02333CE0, app::AggregateException*, GetExceptions, app::Task* this_ptr, bool include_task_canceled_exceptions)
    IL2CPP_REGISTER_METHOD(
        0x02334030,
        app::ReadOnlyCollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_*,
        GetExceptionDispatchInfos,
        app::Task* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02334240, app::ExceptionDispatchInfo*, GetCancellationExceptionDispatchInfo, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02334270, void, ThrowIfExceptional, app::Task* this_ptr, bool include_task_canceled_exceptions)
    IL2CPP_REGISTER_METHOD(0x02334320, void, UpdateExceptionObservedStatus, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02334400, bool, get_IsExceptionObservedByParent, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02334420, bool, get_IsDelegateInvoked, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02334440, void, Finish, app::Task* this_ptr, bool b_user_delegate_executed)
    IL2CPP_REGISTER_METHOD(0x02334630, void, FinishStageTwo, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02334800, void, FinishStageThree, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02334860, void, ProcessChildCompletion, app::Task* this_ptr, app::Task* child_task)
    IL2CPP_REGISTER_METHOD(0x02334B30, void, AddExceptionsFromChildren, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02334DE0, void, FinishThreadAbortedTask, app::Task* this_ptr, bool b_t_a_e_added_to_exception_holder, bool delegate_ran)
    IL2CPP_REGISTER_METHOD(0x02334E60, void, Execute, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldReplicate, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02334FF0,
        app::Task*,
        CreateReplicaTask,
        app::Task* this_ptr,
        app::Action_1_Object_* task_replica_delegate,
        app::Object* state_object,
        app::Task* parent_task,
        app::TaskScheduler* task_scheduler,
        app::TaskCreationOptions__Enum creation_options_for_replica,
        app::InternalTaskOptions__Enum internal_options_for_replica
    )
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Object*, get_SavedStateForNextReplica, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_SavedStateFromPreviousReplica, app::Task* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Task*, get_HandedOverChildReplica, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_HandedOverChildReplica, app::Task* this_ptr, app::Task* value)
    IL2CPP_REGISTER_METHOD(0x02335190, void, ExecuteSelfReplicating, app::Task* root)
    IL2CPP_REGISTER_METHOD(0x02335400, void, IThreadPoolWorkItem_ExecuteWorkItem, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02335410, void, IThreadPoolWorkItem_MarkAborted, app::Task* this_ptr, app::ThreadAbortException* tae)
    IL2CPP_REGISTER_METHOD(0x023354A0, bool, ExecuteEntry, app::Task* this_ptr, bool b_prevent_double_execution)
    IL2CPP_REGISTER_METHOD(0x023356A0, void, ExecuteWithThreadLocal, app::Task* this_ptr, app::Task** current_task_slot)
    IL2CPP_REGISTER_METHOD(0x023359C0, void, ExecutionContextCallback, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x02335AC0, void, InnerInvoke, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02335BA0, void, InnerInvokeWithArg, app::Task* this_ptr, app::Task* child_task)
    IL2CPP_REGISTER_METHOD(0x02335BD0, void, HandleException, app::Task* this_ptr, app::Exception* unhandled_exception)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::TaskAwaiter, GetAwaiter, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02335D60, app::ConfiguredTaskAwaitable, ConfigureAwait, app::Task* this_ptr, bool continue_on_captured_context)
    IL2CPP_REGISTER_METHOD(
        0x02335D90,
        void,
        SetContinuationForAwait,
        app::Task* this_ptr,
        app::Action* continuation_action,
        bool continue_on_captured_context,
        bool flow_execution_context,
        app::StackCrawlMark__Enum* stack_mark
    )
    IL2CPP_REGISTER_METHOD(0x00417870, app::YieldAwaitable, Yield, )
    IL2CPP_REGISTER_METHOD(0x023361F0, void, Wait_1, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02336200, void, Wait_2, app::Task* this_ptr, app::CancellationToken cancellation_token)
    IL2CPP_REGISTER_METHOD(0x02336210, bool, Wait_3, app::Task* this_ptr, int32_t milliseconds_timeout, app::CancellationToken cancellation_token)
    IL2CPP_REGISTER_METHOD(0x02336370, bool, WrappedTryRunInline, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02336490, bool, InternalWait, app::Task* this_ptr, int32_t milliseconds_timeout, app::CancellationToken cancellation_token)
    IL2CPP_REGISTER_METHOD(0x02336600, bool, SpinThenBlockingWait, app::Task* this_ptr, int32_t milliseconds_timeout, app::CancellationToken cancellation_token)
    IL2CPP_REGISTER_METHOD(0x02336A50, bool, SpinWait, app::Task* this_ptr, int32_t milliseconds_timeout)
    IL2CPP_REGISTER_METHOD(0x02336AF0, bool, InternalCancel, app::Task* this_ptr, bool b_cancel_non_executing_only)
    IL2CPP_REGISTER_METHOD(0x02336E20, void, RecordInternalCancellationRequest_1, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02336E60, void, RecordInternalCancellationRequest_2, app::Task* this_ptr, app::CancellationToken token_to_record)
    IL2CPP_REGISTER_METHOD(
        0x02336F70,
        void,
        RecordInternalCancellationRequest_3,
        app::Task* this_ptr,
        app::CancellationToken token_to_record,
        app::Object* cancellation_exception
    )
    IL2CPP_REGISTER_METHOD(0x023370A0, void, CancellationCleanupLogic, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02337220, void, SetCancellationAcknowledged, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02337240, void, FinishContinuations, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, LogFinishCompletionNotification, app::Task* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023378D0, app::Task*, ContinueWith_1, app::Task* this_ptr, app::Action_1_System_Threading_Tasks_Task_* continuation_action)
    IL2CPP_REGISTER_METHOD(
        0x023379B0,
        app::Task*,
        ContinueWith_2,
        app::Task* this_ptr,
        app::Action_1_System_Threading_Tasks_Task_* continuation_action,
        app::TaskScheduler* scheduler,
        app::CancellationToken cancellation_token,
        app::TaskContinuationOptions__Enum continuation_options,
        app::StackCrawlMark__Enum* stack_mark
    )
    IL2CPP_REGISTER_METHOD(
        0x02337C30,
        app::Task*,
        ContinueWith_3,
        app::Task* this_ptr,
        app::Action_2_System_Threading_Tasks_Task_Object_* continuation_action,
        app::Object* state,
        app::CancellationToken cancellation_token,
        app::TaskContinuationOptions__Enum continuation_options,
        app::TaskScheduler* scheduler
    )
    IL2CPP_REGISTER_METHOD(
        0x02337C70,
        app::Task*,
        ContinueWith_4,
        app::Task* this_ptr,
        app::Action_2_System_Threading_Tasks_Task_Object_* continuation_action,
        app::Object* state,
        app::TaskScheduler* scheduler,
        app::CancellationToken cancellation_token,
        app::TaskContinuationOptions__Enum continuation_options,
        app::StackCrawlMark__Enum* stack_mark
    )
    IL2CPP_REGISTER_METHOD(
        0x02337EF0,
        void,
        CreationOptionsFromContinuationOptions,
        app::TaskContinuationOptions__Enum continuation_options,
        app::TaskCreationOptions__Enum* creation_options,
        app::InternalTaskOptions__Enum* internal_options
    )
    IL2CPP_REGISTER_METHOD(
        0x02338080,
        void,
        ContinueWithCore,
        app::Task* this_ptr,
        app::Task* continuation_task,
        app::TaskScheduler* scheduler,
        app::CancellationToken cancellation_token,
        app::TaskContinuationOptions__Enum options
    )
    IL2CPP_REGISTER_METHOD(0x02338350, void, AddCompletionAction_1, app::Task* this_ptr, app::ITaskCompletionAction* action)
    IL2CPP_REGISTER_METHOD(0x02338360, void, AddCompletionAction_2, app::Task* this_ptr, app::ITaskCompletionAction* action, bool add_before_others)
    IL2CPP_REGISTER_METHOD(0x02338420, bool, AddTaskContinuationComplex, app::Task* this_ptr, app::Object* tc, bool add_before_others)
    IL2CPP_REGISTER_METHOD(0x02338820, bool, AddTaskContinuation, app::Task* this_ptr, app::Object* tc, bool add_before_others)
    IL2CPP_REGISTER_METHOD(0x023388B0, void, RemoveContinuation, app::Task* this_ptr, app::Object* continuation_object)
    IL2CPP_REGISTER_METHOD(0x02338C30, app::Task*, FromException_1, app::Exception* exception)
    IL2CPP_REGISTER_METHOD(0x02338CD0, app::Task*, FromCancellation_1, app::CancellationToken cancellation_token)
    IL2CPP_REGISTER_METHOD(0x02338E70, app::Task*, Run_1, app::Action* action)
    IL2CPP_REGISTER_METHOD(0x02338F80, app::Task*, Run_2, app::Func_1_System_Threading_Tasks_Task_* function)
    IL2CPP_REGISTER_METHOD(0x02339030, app::Task*, Run_3, app::Func_1_System_Threading_Tasks_Task_* function, app::CancellationToken cancellation_token)
    IL2CPP_REGISTER_METHOD(0x023392D0, app::Task*, Delay_1, app::TimeSpan delay, app::CancellationToken cancellation_token)
    IL2CPP_REGISTER_METHOD(0x02339400, app::Task*, Delay_2, int32_t milliseconds_delay)
    IL2CPP_REGISTER_METHOD(0x023394B0, app::Task*, Delay_3, int32_t milliseconds_delay, app::CancellationToken cancellation_token)
    IL2CPP_REGISTER_METHOD(0x02339BE0, app::Task*, WhenAll_1, app::Task__Array* tasks)
    IL2CPP_REGISTER_METHOD(0x02339DD0, app::Task*, InternalWhenAll_1, app::Task__Array* tasks)
    IL2CPP_REGISTER_METHOD(0x02339F70, app::Task_1_Task_*, WhenAny, app::Task__Array* tasks)
    IL2CPP_REGISTER_METHOD(0x0233A160, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x01544350, app::Task_1_System_Object_*, FromResult_1, app::Object* result)
    IL2CPP_REGISTER_METHOD(0x01543DD0, app::Task_1_System_Object_*, FromException_2, app::Exception* exception)
    IL2CPP_REGISTER_METHOD(0x01543880, app::Task_1_System_Object_*, FromCancellation_2, app::CancellationToken cancellation_token)
    IL2CPP_REGISTER_METHOD(0x015436B0, app::Task_1_System_Object_*, FromCancellation_3, app::OperationCanceledException* exception)
    IL2CPP_REGISTER_METHOD(0x01544980, app::Task_1_System_Object_*, Run_4, app::Func_1_Object_* function)
    IL2CPP_REGISTER_METHOD(0x015445B0, app::Task_1_System_Object_*, Run_5, app::Func_1_System_Threading_Tasks_Task_1_* function)
    IL2CPP_REGISTER_METHOD(
        0x01544670,
        app::Task_1_System_Object_*,
        Run_6,
        app::Func_1_System_Threading_Tasks_Task_1_* function,
        app::CancellationToken cancellation_token
    )
    IL2CPP_REGISTER_METHOD(0x01546050, app::Task_1_System_Object__1*, WhenAll_2, app::Task_1_System_Object___Array* tasks)
    IL2CPP_REGISTER_METHOD(0x01545E10, app::Task_1_System_Object__1*, InternalWhenAll_2, app::Task_1_System_Object___Array* tasks)
    IL2CPP_REGISTER_METHOD(0x015434F0, app::Task_1_System_Int32_*, FromCancellation_4, app::CancellationToken cancellation_token)
    IL2CPP_REGISTER_METHOD(0x01544250, app::Task_1_System_Int32_*, FromResult_2, int32_t result)
    IL2CPP_REGISTER_METHOD(0x01543320, app::Task_1_System_Int32_*, FromCancellation_5, app::OperationCanceledException* exception)
    IL2CPP_REGISTER_METHOD(0x01543C10, app::Task_1_System_Int32_*, FromException_3, app::Exception* exception)
    IL2CPP_REGISTER_METHOD(0x01543A40, app::Task_1_VoidTaskResult_*, FromCancellation_6, app::OperationCanceledException* exception)
    IL2CPP_REGISTER_METHOD(0x01543160, app::Task_1_System_Boolean_*, FromCancellation_7, app::CancellationToken cancellation_token)
    IL2CPP_REGISTER_METHOD(0x01543F90, app::Task_1_VoidTaskResult_*, FromException_4, app::Exception* exception)
    IL2CPP_REGISTER_METHOD(0x01544450, app::Task_1_System_Int32_*, Run_7, app::Func_1_Int32_* function)
    IL2CPP_REGISTER_METHOD(0x015445B0, app::Task_1_System_IO_Stream_*, Run_8, app::Func_1_System_Threading_Tasks_Task_1__1* function)
    IL2CPP_REGISTER_METHOD(0x015445B0, app::Task_1_System_Net_WebResponse_*, Run_9, app::Func_1_System_Threading_Tasks_Task_1__2* function)
    IL2CPP_REGISTER_METHOD(0x01544150, app::Task_1_System_Boolean_*, FromResult_3, bool result)
    IL2CPP_REGISTER_METHOD(0x01544980, app::Task_1_System_IO_Stream_*, Run_10, app::Func_1_System_IO_Stream_* function)
    IL2CPP_REGISTER_METHOD(0x01544350, app::Task_1_System_Tuple_4_*, FromResult_4, app::Tuple_4_Int32_Int32_Int32_Boolean_* result)
    IL2CPP_REGISTER_METHOD(
        0x01546050,
        app::Task_1_SystemIntegration_Races_RaceRequestResultEntry__1*,
        WhenAll_3,
        app::Task_1_SystemIntegration_Races_RaceRequestResultEntry___Array* tasks
    )
    IL2CPP_REGISTER_METHOD(0x01544350, app::Task_1_System_Byte_*, FromResult_5, app::Byte__Array* result)
} // namespace app::classes::System::Threading::Tasks::Task
