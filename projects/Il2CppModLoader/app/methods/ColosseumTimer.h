#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ColosseumTimer {
    IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_TimeRemaining, (app::ColosseumTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00449EB0, void, set_TimeRemaining, (app::ColosseumTimer * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x011DD8A0, void, OnEnable, (app::ColosseumTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011DD940, void, OnDisable, (app::ColosseumTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011DD9E0, void, Update, (app::ColosseumTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011DDA80, void, SetTime, (app::ColosseumTimer * this_ptr, float seconds))
    IL2CPP_REGISTER_METHOD(0x011DDA90, void, AddTime, (app::ColosseumTimer * this_ptr, float seconds))
    IL2CPP_REGISTER_METHOD(0x011DDAA0, void, Stop, (app::ColosseumTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011DDAB0, void, Pause, (app::ColosseumTimer * this_ptr, bool paused))
    IL2CPP_REGISTER_METHOD(0x004FBAC0, bool, get_IsSuspended, (app::ColosseumTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004FBAD0, void, set_IsSuspended, (app::ColosseumTimer * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x006410F0, app::SuspendableMask__Enum, get_Mask, (app::ColosseumTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011DDAC0, void, set_Mask, (app::ColosseumTimer * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x011DDB70, void, ctor, (app::ColosseumTimer * this_ptr))
} // namespace app::classes::ColosseumTimer
