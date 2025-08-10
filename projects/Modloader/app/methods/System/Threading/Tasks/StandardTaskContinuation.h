#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StandardTaskContinuation.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/TaskContinuationOptions__Enum.h>
#include <Modloader/app/structs/TaskScheduler.h>

namespace app::classes::System::Threading::Tasks::StandardTaskContinuation {
    IL2CPP_REGISTER_METHOD(
        0x0232FBB0,
        void,
        ctor,
        app::StandardTaskContinuation* this_ptr,
        app::Task* task,
        app::TaskContinuationOptions__Enum options,
        app::TaskScheduler* scheduler
    )
    IL2CPP_REGISTER_METHOD(0x0232FCB0, void, Run, app::StandardTaskContinuation* this_ptr, app::Task* completed_task, bool b_can_inline_continuation_task)
} // namespace app::classes::System::Threading::Tasks::StandardTaskContinuation
