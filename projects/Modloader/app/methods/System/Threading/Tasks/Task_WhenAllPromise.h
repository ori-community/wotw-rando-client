#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Task_WhenAllPromise.h>
#include <Modloader/app/structs/Task__Array.h>
#include <Modloader/app/structs/Task.h>

namespace app::classes::System::Threading::Tasks::Task_WhenAllPromise {
    IL2CPP_REGISTER_METHOD(0x0233B690, void, ctor, (app::Task_WhenAllPromise * this_ptr, app::Task__Array* tasks))
    IL2CPP_REGISTER_METHOD(0x0233B8A0, void, Invoke, (app::Task_WhenAllPromise * this_ptr, app::Task* completed_task))
    IL2CPP_REGISTER_METHOD(0x0233BD80, bool, get_ShouldNotifyDebuggerOfWaitCompletion, (app::Task_WhenAllPromise * this_ptr))
} // namespace app::classes::System::Threading::Tasks::Task_WhenAllPromise
