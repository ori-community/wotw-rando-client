#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnergyDoorSlot.h>

namespace app::classes::EnergyDoorSlot {
    IL2CPP_REGISTER_METHOD(0x00C89290, void, Awake, (app::EnergyDoorSlot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C89340, void, Refresh, (app::EnergyDoorSlot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C89590, void, FixedUpdate, (app::EnergyDoorSlot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::EnergyDoorSlot * this_ptr))
} // namespace app::classes::EnergyDoorSlot
