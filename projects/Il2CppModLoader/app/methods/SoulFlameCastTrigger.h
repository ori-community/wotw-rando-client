#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SoulFlameCastTrigger {
    IL2CPP_REGISTER_METHOD(0x00EE4640, void, Awake, (app::SoulFlameCastTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B26430, void, OnSoulFlameCast, (app::SoulFlameCastTrigger * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473E460, SoulFlameCastTrigger_OnSoulFlameCast__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00EE48D0, void, OnDestroy, (app::SoulFlameCastTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611C70, void, ctor, (app::SoulFlameCastTrigger * this_ptr))
}
