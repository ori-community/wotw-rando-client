#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_Threading_Tasks_Task_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_Threading_Tasks_Task_.h>
#include <Modloader/app/structs/Predicate_1_System_Threading_Tasks_Task_.h>
#include <Modloader/app/structs/Task.h>

namespace app::classes::System::Collections::Generic::List_1_System_Threading_Tasks_Task_ {
    IL2CPP_REGISTER_METHOD(
        0x02F1EFE0,
        int32_t,
        RemoveAll,
        app::List_1_System_Threading_Tasks_Task_* this_ptr,
        app::Predicate_1_System_Threading_Tasks_Task_* match
    )
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_System_Threading_Tasks_Task_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_System_Threading_Tasks_Task_* this_ptr, app::Task* item)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_System_Threading_Tasks_Task_, GetEnumerator, app::List_1_System_Threading_Tasks_Task_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_System_Threading_Tasks_Task_
