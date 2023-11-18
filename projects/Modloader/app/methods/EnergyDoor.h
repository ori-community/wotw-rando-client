#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnergyDoor.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/EnergyDoorSlot.h>

namespace app::classes::EnergyDoor {
    IL2CPP_REGISTER_METHOD(0x00C878F0, void, OnValidate, (app::EnergyDoor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (app::EnergyDoor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C87960, void, Highlight, (app::EnergyDoor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C87F20, void, Unhighlight, (app::EnergyDoor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C88250, void, RestoreOrbs, (app::EnergyDoor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C88470, void, OnDisable, (app::EnergyDoor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C884A0, void, Serialize, (app::EnergyDoor * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x00C885A0, float, get_DistanceToSein, (app::EnergyDoor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C88750, bool, get_OriHasTargets, (app::EnergyDoor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C88870, bool, get_SeinInRange, (app::EnergyDoor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C888B0, void, RegisterSlot, (app::EnergyDoor * this_ptr, app::EnergyDoorSlot* slot))
    IL2CPP_REGISTER_METHOD(0x00C88950, void, UpdateSlots, (app::EnergyDoor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C88A90, void, FixedUpdate, (app::EnergyDoor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C89120, void, ctor, (app::EnergyDoor * this_ptr))
} // namespace app::classes::EnergyDoor
