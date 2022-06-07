#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MaxEnergyContainerPickup {
    IL2CPP_REGISTER_METHOD(0x01385410, void, OnCollectorCandidateTouch, (app::MaxEnergyContainerPickup * this_ptr, app::GameObject * collector))
    IL2CPP_REGISTER_METHOD(0x01385520, void, PickupStateChanged, (app::MaxEnergyContainerPickup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005AC260, void, ctor, (app::MaxEnergyContainerPickup * this_ptr))
}
