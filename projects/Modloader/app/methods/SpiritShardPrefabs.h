#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SpiritShardPrefabs.h>

namespace app::classes::SpiritShardPrefabs {
    IL2CPP_REGISTER_METHOD(0x00D68C00, void, FollowOri, (app::GameObject * fx))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SpiritShardPrefabs * this_ptr))
} // namespace app::classes::SpiritShardPrefabs
