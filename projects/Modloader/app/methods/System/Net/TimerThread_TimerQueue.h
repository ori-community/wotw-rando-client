#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::TimerThread_TimerQueue {
    IL2CPP_REGISTER_METHOD(0x020A96E0, void, ctor, (app::TimerThread_TimerQueue * this_ptr, int32_t duration_milliseconds))
    IL2CPP_REGISTER_METHOD(0x020A9880, app::TimerThread_Timer*, CreateTimer, (app::TimerThread_TimerQueue * this_ptr, app::TimerThread_Callback* callback, app::Object* context))
    IL2CPP_REGISTER_METHOD(0x020A9BF0, bool, Fire, (app::TimerThread_TimerQueue * this_ptr, int32_t* next_expiration))
} // namespace app::classes::System::Net::TimerThread_TimerQueue
