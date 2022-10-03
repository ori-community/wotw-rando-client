#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MapStonePickup {
    IL2CPP_REGISTER_METHOD(0x00A0AB90, void, OnCollectorCandidateTouch, (app::MapStonePickup * this_ptr, app::GameObject* collector))
    IL2CPP_REGISTER_METHOD(0x005AC260, void, ctor, (app::MapStonePickup * this_ptr))
} // namespace app::classes::MapStonePickup
