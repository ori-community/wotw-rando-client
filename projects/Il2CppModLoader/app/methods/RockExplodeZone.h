#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RockExplodeZone {
    IL2CPP_REGISTER_METHOD(0x01359090, void, Awake, (app::RockExplodeZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01359400, bool, IsInsideAZone, (app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x01359600, void, OnDestroy, (app::RockExplodeZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060E860, bool, IsInside, (app::RockExplodeZone * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RockExplodeZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013596C0, void, cctor, ())
} // namespace app::classes::RockExplodeZone
