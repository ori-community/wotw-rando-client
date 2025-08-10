#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_System_Threading_Tasks_Task_1__1.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/Task_1_Task_1_System_Boolean_.h>

namespace app::classes::System::Threading::Tasks::Task_1_Task_1_System_Boolean__ {
    IL2CPP_REGISTER_METHOD(
        0x02A5BF40,
        app::Task*,
        ContinueWith,
        app::Task_1_Task_1_System_Boolean_* this_ptr,
        app::Action_1_System_Threading_Tasks_Task_1__1* continuation_action
    )
}
