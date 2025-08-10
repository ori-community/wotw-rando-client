#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TaskSchedulerAwaitTaskContinuation_c.h>

namespace app::classes::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c {
    IL2CPP_REGISTER_METHOD(0x0233FD70, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TaskSchedulerAwaitTaskContinuation_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0233FEB0, void, _Run_b__2_0, app::TaskSchedulerAwaitTaskContinuation_c* this_ptr, app::Object* state)
} // namespace app::classes::System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation___c
