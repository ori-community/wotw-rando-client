#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::TimerThread_InfiniteTimerQueue {
    IL2CPP_REGISTER_METHOD(0x01D1D120, void, ctor, (app::TimerThread_InfiniteTimerQueue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020A8E30, app::TimerThread_Timer *, CreateTimer, (app::TimerThread_InfiniteTimerQueue * this_ptr, app::TimerThread_Callback * callback, app::Object * context))
}
