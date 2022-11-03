#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::CompilerServices::TaskAwaiter_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x0018EEE0, bool, get_IsCompleted, (app::TaskAwaiter_1_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::TaskAwaiter_1_System_Object___Boxed * this_ptr, app::Task_1_System_Object_* task))
    IL2CPP_REGISTER_METHOD(0x0018F1B0, void, OnCompleted, (app::TaskAwaiter_1_System_Object___Boxed * this_ptr, app::Action* continuation))
    IL2CPP_REGISTER_METHOD(0x0018F1E0, void, UnsafeOnCompleted, (app::TaskAwaiter_1_System_Object___Boxed * this_ptr, app::Action* continuation))
    IL2CPP_REGISTER_METHOD(0x001FF750, app::Object*, GetResult, (app::TaskAwaiter_1_System_Object___Boxed * this_ptr))
} // namespace app::classes::System::Runtime::CompilerServices::TaskAwaiter_1_System_Object_
