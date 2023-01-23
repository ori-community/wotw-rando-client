#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MaxEnergyHalfContainerPickup.h>

namespace app::classes::MaxEnergyHalfContainerPickup {
    IL2CPP_REGISTER_METHOD(0x01385BC0, app::GameObject*, get_EffectiveCollectedEffect, (app::MaxEnergyHalfContainerPickup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01385CB0, void, OnCollectorCandidateTouch, (app::MaxEnergyHalfContainerPickup * this_ptr, app::GameObject* collector))
    IL2CPP_REGISTER_METHOD(0x01385DC0, void, PickupStateChanged, (app::MaxEnergyHalfContainerPickup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005AC260, void, ctor, (app::MaxEnergyHalfContainerPickup * this_ptr))
} // namespace app::classes::MaxEnergyHalfContainerPickup
