#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Threading::Tasks::ThreadPoolTaskScheduler {
    IL2CPP_REGISTER_METHOD(0x02340880, void, ctor, (app::ThreadPoolTaskScheduler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023409B0, void, LongRunningThreadWork, (app::Object * obj))
    IL2CPP_REGISTER_METHODINFO(0x04711EF8, ThreadPoolTaskScheduler_LongRunningThreadWork__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02340AB0, void, QueueTask, (app::ThreadPoolTaskScheduler * this_ptr, app::Task * task))
    IL2CPP_REGISTER_METHOD(0x02340CA0, bool, TryExecuteTaskInline, (app::ThreadPoolTaskScheduler * this_ptr, app::Task * task, bool task_was_previously_queued))
    IL2CPP_REGISTER_METHOD(0x02340DA0, bool, TryDequeue, (app::ThreadPoolTaskScheduler * this_ptr, app::Task * task))
    IL2CPP_REGISTER_METHOD(0x02340DB0, app::IEnumerable_1_System_Threading_Tasks_Task_ *, GetScheduledTasks, (app::ThreadPoolTaskScheduler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02340ED0, app::IEnumerable_1_System_Threading_Tasks_Task_ *, FilterTasksFromWorkItems, (app::ThreadPoolTaskScheduler * this_ptr, app::IEnumerable_1_System_Threading_IThreadPoolWorkItem_ * tpw_items))
    IL2CPP_REGISTER_METHOD(0x02341060, void, NotifyWorkItemProgress, (app::ThreadPoolTaskScheduler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_RequiresAtomicStartTransition, (app::ThreadPoolTaskScheduler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02341070, void, cctor, ())
}
