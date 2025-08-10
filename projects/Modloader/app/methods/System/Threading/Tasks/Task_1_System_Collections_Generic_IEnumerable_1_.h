#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_System_Threading_Tasks_Task_1_.h>
#include <Modloader/app/structs/Func_2_System_Threading_Tasks_Task_1_Byte_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Byte__1.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/Task_1_System_Byte_.h>
#include <Modloader/app/structs/Task_1_System_Collections_Generic_IEnumerable_1_.h>

namespace app::classes::System::Threading::Tasks::Task_1_System_Collections_Generic_IEnumerable_1_ {
    IL2CPP_REGISTER_METHOD(
        0x02A5BF40,
        app::Task*,
        ContinueWith_1,
        app::Task_1_System_Collections_Generic_IEnumerable_1_* this_ptr,
        app::Action_1_System_Threading_Tasks_Task_1_* continuation_action
    )
    IL2CPP_REGISTER_METHOD(
        0x01542810,
        app::Task_1_System_Byte_*,
        ContinueWith_2,
        app::Task_1_System_Collections_Generic_IEnumerable_1_* this_ptr,
        app::Func_2_System_Threading_Tasks_Task_1_Byte_* continuation_function
    )
    IL2CPP_REGISTER_METHOD(0x02A5A760, app::IEnumerable_1_System_Byte__1*, get_Result, app::Task_1_System_Collections_Generic_IEnumerable_1_* this_ptr)
} // namespace app::classes::System::Threading::Tasks::Task_1_System_Collections_Generic_IEnumerable_1_
