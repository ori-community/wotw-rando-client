#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiritShardPickup.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::SpiritShardPickup {
    IL2CPP_REGISTER_METHOD(0x00D685A0, void, OnCollectorCandidateTouch, (app::SpiritShardPickup * this_ptr, app::GameObject* collector))
    IL2CPP_REGISTER_METHOD(0x005AC260, void, ctor, (app::SpiritShardPickup * this_ptr))
} // namespace app::classes::SpiritShardPickup
