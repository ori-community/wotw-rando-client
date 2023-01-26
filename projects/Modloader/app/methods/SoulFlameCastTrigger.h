#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SoulFlameCastTrigger.h>

namespace app::classes::SoulFlameCastTrigger {
    IL2CPP_REGISTER_METHOD(0x00EE4640, void, Awake, (app::SoulFlameCastTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B26430, void, OnSoulFlameCast, (app::SoulFlameCastTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EE48D0, void, OnDestroy, (app::SoulFlameCastTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611C70, void, ctor, (app::SoulFlameCastTrigger * this_ptr))
} // namespace app::classes::SoulFlameCastTrigger
