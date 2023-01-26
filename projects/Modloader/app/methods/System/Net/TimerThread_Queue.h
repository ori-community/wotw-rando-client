#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TimerThread_Queue.h>
#include <Modloader/app/structs/TimerThread_Timer.h>

namespace app::classes::System::Net::TimerThread_Queue {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::TimerThread_Queue * this_ptr, int32_t duration_milliseconds))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Duration, (app::TimerThread_Queue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020A8FA0, app::TimerThread_Timer*, CreateTimer, (app::TimerThread_Queue * this_ptr))
} // namespace app::classes::System::Net::TimerThread_Queue
