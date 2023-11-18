#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ProjectileExplodeWall.h>
#include <Modloader/app/structs/Damage.h>

namespace app::classes::ProjectileExplodeWall {
    IL2CPP_REGISTER_METHOD(0x00C7B7A0, void, Awake, (app::ProjectileExplodeWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7B960, void, OnDestroy, (app::ProjectileExplodeWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7BB20, void, OnPreProcessDamage, (app::ProjectileExplodeWall * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00443680, void, ctor, (app::ProjectileExplodeWall * this_ptr))
} // namespace app::classes::ProjectileExplodeWall
