#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/StickToMovingPlatforms.h>

namespace app::classes::StickToMovingPlatforms {
    IL2CPP_REGISTER_METHOD(0x00650850, void, Awake, app::StickToMovingPlatforms* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006509F0, void, OnDestroy, app::StickToMovingPlatforms* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00650B90, void, OnRestoreCheckpoint, app::StickToMovingPlatforms* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00650BA0, void, OnCollisionEnter, app::StickToMovingPlatforms* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x00650BA0, void, OnCollisionStay, app::StickToMovingPlatforms* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x00650BB0, void, OnCollision, app::StickToMovingPlatforms* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x00650E70, void, UpdateGroundMatrix, app::StickToMovingPlatforms* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00650EC0, void, FixedUpdate, app::StickToMovingPlatforms* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00650B90, void, OnPoolSpawned, app::StickToMovingPlatforms* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, app::StickToMovingPlatforms* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::StickToMovingPlatforms* this_ptr)
} // namespace app::classes::StickToMovingPlatforms
