#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Threading::Tasks::AwaitTaskContinuation {
    IL2CPP_REGISTER_METHOD(0x0232E5F0, void, ctor_1, (app::AwaitTaskContinuation * this_ptr, app::Action* action, bool flow_execution_context, app::StackCrawlMark__Enum* stack_mark))
    IL2CPP_REGISTER_METHOD(0x0232E6C0, void, ctor_2, (app::AwaitTaskContinuation * this_ptr, app::Action* action, bool flow_execution_context))
    IL2CPP_REGISTER_METHOD(0x0232E780, app::Task*, CreateTask, (app::AwaitTaskContinuation * this_ptr, app::Action_1_Object_* action, app::Object* state, app::TaskScheduler* scheduler))
    IL2CPP_REGISTER_METHOD(0x0232E960, void, Run, (app::AwaitTaskContinuation * this_ptr, app::Task* task, bool can_inline_continuation_task))
    IL2CPP_REGISTER_METHOD(0x0232EAA0, bool, get_IsValidLocationForInlining, ())
    IL2CPP_REGISTER_METHOD(0x0232EC00, void, ExecuteWorkItemHelper, (app::AwaitTaskContinuation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0232ED60, void, IThreadPoolWorkItem_ExecuteWorkItem, (app::AwaitTaskContinuation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IThreadPoolWorkItem_MarkAborted, (app::AwaitTaskContinuation * this_ptr, app::ThreadAbortException* tae))
    IL2CPP_REGISTER_METHOD(0x0232ED90, void, InvokeAction, (app::Object * state))
    IL2CPP_REGISTER_METHODINFO(0x04703390, AwaitTaskContinuation_InvokeAction__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0232EE40, app::ContextCallback*, GetInvokeActionCallback, ())
    IL2CPP_REGISTER_METHOD(0x0232EFC0, void, RunCallback, (app::AwaitTaskContinuation * this_ptr, app::ContextCallback* callback, app::Object* state, app::Task** current_task))
    IL2CPP_REGISTER_METHOD(0x0232F180, void, RunOrScheduleAction, (app::Action * action, bool allow_inlining, app::Task** current_task))
    IL2CPP_REGISTER_METHOD(0x0232F320, void, UnsafeScheduleAction, (app::Action * action, app::Task* task))
    IL2CPP_REGISTER_METHOD(0x0232F4C0, void, ThrowAsyncIfNecessary, (app::Exception * exc))
} // namespace app::classes::System::Threading::Tasks::AwaitTaskContinuation
