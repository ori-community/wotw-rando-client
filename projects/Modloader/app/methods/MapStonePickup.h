#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MapStonePickup.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::MapStonePickup {
    IL2CPP_REGISTER_METHOD(0x00A0AB90, void, OnCollectorCandidateTouch, (app::MapStonePickup * this_ptr, app::GameObject* collector))
    IL2CPP_REGISTER_METHOD(0x005AC260, void, ctor, (app::MapStonePickup * this_ptr))
} // namespace app::classes::MapStonePickup
