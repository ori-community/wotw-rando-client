#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Threading::Tasks::TaskScheduler {
    IL2CPP_REGISTER_METHOD(0x0233EC50, bool, TryRunInline, (app::TaskScheduler * this_ptr, app::Task* task, bool task_was_previously_queued))
    IL2CPP_REGISTER_METHODINFO(0x0477A6F0, TaskScheduler_TryRunInline__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, TryDequeue, (app::TaskScheduler * this_ptr, app::Task* task))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, NotifyWorkItemProgress, (app::TaskScheduler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_RequiresAtomicStartTransition, (app::TaskScheduler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0233EED0, void, InternalQueueTask, (app::TaskScheduler * this_ptr, app::Task* task))
    IL2CPP_REGISTER_METHOD(0x0233EF00, void, ctor, (app::TaskScheduler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0233EFB0, void, AddToActiveTaskSchedulers, (app::TaskScheduler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0233F190, app::TaskScheduler*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x0233F230, app::TaskScheduler*, get_Current, ())
    IL2CPP_REGISTER_METHOD(0x0233F2F0, app::TaskScheduler*, get_InternalCurrent, ())
    IL2CPP_REGISTER_METHOD(0x0233F3B0, int32_t, get_Id, (app::TaskScheduler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0233F490, void, PublishUnobservedTaskException, (app::Object * sender, app::UnobservedTaskExceptionEventArgs* ueea))
    IL2CPP_REGISTER_METHOD(0x0233F650, void, cctor, ())
} // namespace app::classes::System::Threading::Tasks::TaskScheduler
