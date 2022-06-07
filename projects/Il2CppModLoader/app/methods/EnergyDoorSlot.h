#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::EnergyDoorSlot {
    IL2CPP_REGISTER_METHOD(0x00C89290, void, Awake, (app::EnergyDoorSlot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C89340, void, Refresh, (app::EnergyDoorSlot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C89590, void, FixedUpdate, (app::EnergyDoorSlot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::EnergyDoorSlot * this_ptr))
}
