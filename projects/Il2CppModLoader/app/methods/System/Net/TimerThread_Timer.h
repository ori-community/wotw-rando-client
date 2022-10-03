#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::TimerThread_Timer {
    IL2CPP_REGISTER_METHOD(0x020A8FC0, void, ctor, (app::TimerThread_Timer * this_ptr, int32_t duration_milliseconds))
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_Duration, (app::TimerThread_Timer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_StartTime, (app::TimerThread_Timer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020A9010, int32_t, get_Expiration, (app::TimerThread_Timer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020A9020, int32_t, get_TimeRemaining, (app::TimerThread_Timer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC2AF0, void, Dispose, (app::TimerThread_Timer * this_ptr))
} // namespace app::classes::System::Net::TimerThread_Timer
