#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::OrePickup {
    IL2CPP_REGISTER_METHOD(0x0061DFA0, void, OnCollectorCandidateTouch, (app::OrePickup * this_ptr, app::GameObject * collector))
    IL2CPP_REGISTER_METHOD(0x0061E0B0, void, PickupStateChanged, (app::OrePickup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005AC260, void, ctor, (app::OrePickup * this_ptr))
}
