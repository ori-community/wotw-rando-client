#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MaxEnergyContainerPickup.h>

namespace app::classes::MaxEnergyContainerPickup {
    IL2CPP_REGISTER_METHOD(0x01385410, void, OnCollectorCandidateTouch, app::MaxEnergyContainerPickup* this_ptr, app::GameObject* collector)
    IL2CPP_REGISTER_METHOD(0x01385520, void, PickupStateChanged, app::MaxEnergyContainerPickup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005AC260, void, ctor, app::MaxEnergyContainerPickup* this_ptr)
} // namespace app::classes::MaxEnergyContainerPickup
