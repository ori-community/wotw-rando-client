#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Task_WhenAllPromise_1_System_Object_.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/Task_1_System_Object___Array.h>

namespace app::classes::System::Threading::Tasks::Task_WhenAllPromise_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02776B30, bool, get_ShouldNotifyDebuggerOfWaitCompletion, (app::Task_WhenAllPromise_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02776470, void, ctor, (app::Task_WhenAllPromise_1_System_Object_ * this_ptr, app::Task_1_System_Object___Array* tasks))
    IL2CPP_REGISTER_METHOD(0x02776690, void, Invoke, (app::Task_WhenAllPromise_1_System_Object_ * this_ptr, app::Task* ignored))
} // namespace app::classes::System::Threading::Tasks::Task_WhenAllPromise_1_System_Object_
