#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TaskAwaiter_1_System_Boolean___Boxed.h>
#include <Modloader/app/structs/Task_1_System_Boolean_.h>
#include <Modloader/app/structs/Action.h>

namespace app::classes::System::Runtime::CompilerServices::TaskAwaiter_1_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x001FF6C0, bool, GetResult, (app::TaskAwaiter_1_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04774B78, TaskAwaiter_1_System_Boolean__GetResult__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::TaskAwaiter_1_System_Boolean___Boxed * this_ptr, app::Task_1_System_Boolean_* task))
    IL2CPP_REGISTER_METHOD(0x0018EEE0, bool, get_IsCompleted, (app::TaskAwaiter_1_System_Boolean___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0018F1B0, void, OnCompleted, (app::TaskAwaiter_1_System_Boolean___Boxed * this_ptr, app::Action* continuation))
    IL2CPP_REGISTER_METHOD(0x0018F1E0, void, UnsafeOnCompleted, (app::TaskAwaiter_1_System_Boolean___Boxed * this_ptr, app::Action* continuation))
} // namespace app::classes::System::Runtime::CompilerServices::TaskAwaiter_1_System_Boolean_
