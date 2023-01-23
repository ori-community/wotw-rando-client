#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TaskAwaiter__Boxed.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/Action.h>

namespace app::classes::System::Runtime::CompilerServices::TaskAwaiter {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::TaskAwaiter__Boxed * this_ptr, app::Task* task))
    IL2CPP_REGISTER_METHOD(0x0018EEE0, bool, get_IsCompleted, (app::TaskAwaiter__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0018F1B0, void, OnCompleted, (app::TaskAwaiter__Boxed * this_ptr, app::Action* continuation))
    IL2CPP_REGISTER_METHOD(0x0018F1E0, void, UnsafeOnCompleted, (app::TaskAwaiter__Boxed * this_ptr, app::Action* continuation))
    IL2CPP_REGISTER_METHOD(0x0018EF60, void, GetResult, (app::TaskAwaiter__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A92BB0, void, ValidateEnd, (app::Task * task))
    IL2CPP_REGISTER_METHOD(0x01A92C60, void, HandleNonSuccessAndDebuggerNotification, (app::Task * task))
    IL2CPP_REGISTER_METHOD(0x01A92CF0, void, ThrowForNonSuccess, (app::Task * task))
    IL2CPP_REGISTER_METHODINFO(0x04769BE8, TaskAwaiter_ThrowForNonSuccess__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A92ED0, void, OnCompletedInternal, (app::Task * task, app::Action* continuation, bool continue_on_captured_context, bool flow_execution_context))
    IL2CPP_REGISTER_METHODINFO(0x0478FC20, TaskAwaiter_OnCompletedInternal__MethodInfo)
} // namespace app::classes::System::Runtime::CompilerServices::TaskAwaiter
