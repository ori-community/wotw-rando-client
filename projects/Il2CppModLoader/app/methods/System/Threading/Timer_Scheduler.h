#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Threading::Timer_Scheduler {
    IL2CPP_REGISTER_METHOD(0x02349F50, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x0234A0A0, app::Timer_Scheduler *, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x0234A140, void, ctor, (app::Timer_Scheduler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0234A600, void, Remove, (app::Timer_Scheduler * this_ptr, app::Timer * timer))
    IL2CPP_REGISTER_METHOD(0x0234A700, void, Change, (app::Timer_Scheduler * this_ptr, app::Timer * timer, int64_t new_next_run))
    IL2CPP_REGISTER_METHOD(0x0234A8E0, int32_t, FindByDueTime, (app::Timer_Scheduler * this_ptr, int64_t nr))
    IL2CPP_REGISTER_METHOD(0x0234AAB0, void, Add, (app::Timer_Scheduler * this_ptr, app::Timer * timer))
    IL2CPP_REGISTER_METHOD(0x0234AC50, int32_t, InternalRemove, (app::Timer_Scheduler * this_ptr, app::Timer * timer))
    IL2CPP_REGISTER_METHOD(0x0234ACC0, void, TimerCB, (app::Object * o))
    IL2CPP_REGISTER_METHODINFO(0x04798060, Timer_Scheduler_TimerCB__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0234AD80, void, SchedulerThread, (app::Timer_Scheduler * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04710810, Timer_Scheduler_SchedulerThread__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0234B540, void, ShrinkIfNeeded, (app::Timer_Scheduler * this_ptr, app::List_1_System_Threading_Timer_ * list, int32_t initial))
}
