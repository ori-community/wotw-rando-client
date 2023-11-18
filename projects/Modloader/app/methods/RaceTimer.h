#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RaceTimer.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::RaceTimer {
    IL2CPP_REGISTER_METHOD(0x00446960, float, get_ElapsedTime, (app::RaceTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724010, void, set_ElapsedTime, (app::RaceTimer * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00447340, float, get_PersonalBestTime, (app::RaceTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447350, void, set_PersonalBestTime, (app::RaceTimer * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_TimeLimit, (app::RaceTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A5EC0, void, set_TimeLimit, (app::RaceTimer * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00724020, float, get_BestTime, (app::RaceTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724030, void, set_BestTime, (app::RaceTimer * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_TimeToBeat, (app::RaceTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00449EB0, void, set_TimeToBeat, (app::RaceTimer * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00724040, float, get_PreviousElapsedTime, (app::RaceTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724050, void, set_PreviousElapsedTime, (app::RaceTimer * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00724060, float, get_AdjustedElapsedTime, (app::RaceTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724130, void, set_AdjustedElapsedTime, (app::RaceTimer * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00405F50, bool, get_IsSuspended, (app::RaceTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724140, void, set_IsSuspended, (app::RaceTimer * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FF7D0, app::SuspendableMask__Enum, get_Mask, (app::RaceTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724150, void, set_Mask, (app::RaceTimer * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00724200, bool, get_IsOvertime, (app::RaceTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724320, void, Awake, (app::RaceTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007243D0, void, OnDestroy, (app::RaceTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724470, void, Update, (app::RaceTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724560, void, TimeoutWarning, (app::RaceTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724630, void, BestTimeNotBeaten, (app::RaceTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A5EC0, void, SetTimeLimit, (app::RaceTimer * this_ptr, float seconds))
    IL2CPP_REGISTER_METHOD(0x00724720, void, StartTimer, (app::RaceTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724730, void, Stop, (app::RaceTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724740, void, Reset, (app::RaceTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724760, void, DebugDraw, (app::RaceTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724950, void, ctor, (app::RaceTimer * this_ptr))
} // namespace app::classes::RaceTimer
