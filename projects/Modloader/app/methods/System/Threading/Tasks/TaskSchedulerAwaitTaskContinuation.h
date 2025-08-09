#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/StackCrawlMark__Enum.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/TaskScheduler.h>
#include <Modloader/app/structs/TaskSchedulerAwaitTaskContinuation.h>

namespace app::classes::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation {
    IL2CPP_REGISTER_METHOD(
        0x0232FE20,
        void,
        ctor,
        app::TaskSchedulerAwaitTaskContinuation* this_ptr,
        app::TaskScheduler* scheduler,
        app::Action* action,
        bool flow_execution_context,
        app::StackCrawlMark__Enum* stack_mark
    )
    IL2CPP_REGISTER_METHOD(0x0233F990, void, Run, app::TaskSchedulerAwaitTaskContinuation* this_ptr, app::Task* ignored, bool can_inline_continuation_task)
} // namespace app::classes::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation
