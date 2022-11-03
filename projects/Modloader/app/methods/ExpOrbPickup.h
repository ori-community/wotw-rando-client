#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ExpOrbPickup {
    IL2CPP_REGISTER_METHOD(0x00986F10, void, OnCollectorCandidateTouch, (app::ExpOrbPickup * this_ptr, app::GameObject* collector))
    IL2CPP_REGISTER_METHOD(0x00987020, void, PickupStateChanged, (app::ExpOrbPickup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009870B0, void, ctor, (app::ExpOrbPickup * this_ptr))
} // namespace app::classes::ExpOrbPickup
