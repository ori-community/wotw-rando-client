#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView.h>
#include <Modloader/app/structs/IEnumerable_1_System_Threading_Tasks_Task_.h>
#include <Modloader/app/structs/TaskScheduler.h>

namespace app::classes::System::Threading::Tasks::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView * this_ptr, app::TaskScheduler* scheduler))
    IL2CPP_REGISTER_METHOD(0x0233F970, int32_t, get_Id, (app::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016D9400, app::IEnumerable_1_System_Threading_Tasks_Task_*, get_ScheduledTasks, (app::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView * this_ptr))
} // namespace app::classes::System::Threading::Tasks::TaskScheduler_SystemThreadingTasks_TaskSchedulerDebugView
