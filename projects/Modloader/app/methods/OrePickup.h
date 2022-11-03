#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::OrePickup {
    IL2CPP_REGISTER_METHOD(0x0061DFA0, void, OnCollectorCandidateTouch, (app::OrePickup * this_ptr, app::GameObject* collector))
    IL2CPP_REGISTER_METHOD(0x0061E0B0, void, PickupStateChanged, (app::OrePickup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005AC260, void, ctor, (app::OrePickup * this_ptr))
} // namespace app::classes::OrePickup
