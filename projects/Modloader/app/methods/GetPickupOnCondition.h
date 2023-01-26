#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPickupOnCondition.h>

namespace app::classes::GetPickupOnCondition {
    IL2CPP_REGISTER_METHOD(0x00446590, bool, ShouldCreateCheckpointOnPickup, (app::GetPickupOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E11F60, void, OnEnable, (app::GetPickupOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E12210, void, OnDisable, (app::GetPickupOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E123F0, void, FixedUpdate, (app::GetPickupOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E12450, bool, IsConditionMet, (app::GetPickupOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E124B0, void, OnEventStart, (app::GetPickupOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E125A0, void, GivePickup, (app::GetPickupOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E12750, void, OnSkipCutscene, (app::GetPickupOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::GetPickupOnCondition * this_ptr))
} // namespace app::classes::GetPickupOnCondition
