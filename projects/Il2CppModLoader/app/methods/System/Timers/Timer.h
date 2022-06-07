#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Timers::Timer {
    IL2CPP_REGISTER_METHOD(0x02A7AED0, void, ctor_1, (app::Timer_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A7B060, void, ctor_2, (app::Timer_1 * this_ptr, double interval))
    IL2CPP_REGISTER_METHODINFO(0x04765608, Timer_1__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A7B1D0, void, set_AutoReset, (app::Timer_1 * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02A7B260, void, set_Enabled, (app::Timer_1 * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x0471DA00, Timer_1_set_Enabled__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A7B590, int32_t, CalculateRoundedInterval, (double interval, bool argument_check))
    IL2CPP_REGISTER_METHODINFO(0x0472D7E8, Timer_1_CalculateRoundedInterval__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A7B780, void, UpdateTimer, (app::Timer_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A7B7D0, void, set_Interval, (app::Timer_1 * this_ptr, double value))
    IL2CPP_REGISTER_METHODINFO(0x047415E8, Timer_1_set_Interval__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A7B980, void, add_Elapsed, (app::Timer_1 * this_ptr, app::ElapsedEventHandler * value))
    IL2CPP_REGISTER_METHOD(0x02A7BA40, void, remove_Elapsed, (app::Timer_1 * this_ptr, app::ElapsedEventHandler * value))
    IL2CPP_REGISTER_METHOD(0x02A7BB00, void, set_Site, (app::Timer_1 * this_ptr, app::ISite * value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::ISite *, get_Site, (app::Timer_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A7BB30, app::ISynchronizeInvoke *, get_SynchronizingObject, (app::Timer_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A7BC90, void, BeginInit, (app::Timer_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A7BCD0, void, Close, (app::Timer_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A7BD10, void, Dispose, (app::Timer_1 * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x02A7BD60, void, EndInit, (app::Timer_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A7BD70, void, Start, (app::Timer_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A7BD80, void, Stop, (app::Timer_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A7BD90, void, MyTimerCallback, (app::Timer_1 * this_ptr, app::Object * state))
    IL2CPP_REGISTER_METHODINFO(0x0471D3A8, Timer_1_MyTimerCallback__MethodInfo)
}
