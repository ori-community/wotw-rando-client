#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::NightBerrySpiritRing {
    IL2CPP_REGISTER_METHOD(0x006016D0, void, OnTriggerEnter, (app::NightBerrySpiritRing * this_ptr, app::Collider * collider))
    IL2CPP_REGISTER_METHOD(0x006017D0, void, OnTriggerExit, (app::NightBerrySpiritRing * this_ptr, app::Collider * collider))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::NightBerrySpiritRing * this_ptr))
}
