#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::EnergyOrbPickup {
    IL2CPP_REGISTER_METHOD(0x00C895A0, void, Awake, (app::EnergyOrbPickup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C895D0, void, OnCollectorCandidateTouch, (app::EnergyOrbPickup * this_ptr, app::GameObject* collector))
    IL2CPP_REGISTER_METHOD(0x00C896E0, void, OnPoolDespawned, (app::EnergyOrbPickup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C896F0, void, ctor, (app::EnergyOrbPickup * this_ptr))
} // namespace app::classes::EnergyOrbPickup
