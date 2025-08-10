#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/JumpShotProjectile.h>

namespace app::classes::JumpShotProjectile {
    IL2CPP_REGISTER_METHOD(0x00E4FE70, void, Start, app::JumpShotProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E4FFE0, void, FixedUpdate, app::JumpShotProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E501B0, void, ExplodeProjectile, app::JumpShotProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E503F0, void, OnCollisionEnter, app::JumpShotProjectile* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x00E50580, void, OnTriggerEnter, app::JumpShotProjectile* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x00E508B0, void, ctor, app::JumpShotProjectile* this_ptr)
} // namespace app::classes::JumpShotProjectile
