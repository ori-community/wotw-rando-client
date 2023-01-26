#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CollisionFilter.h>
#include <Modloader/app/structs/Collision.h>

namespace app::classes::CollisionFilter {
    IL2CPP_REGISTER_METHOD(0x012D08F0, void, Awake, (app::CollisionFilter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012D0980, void, OnCollisionEnter, (app::CollisionFilter * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CollisionFilter * this_ptr))
} // namespace app::classes::CollisionFilter
