#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/PhysicsCollisionResender.h>

namespace app::classes::PhysicsCollisionResender {
    IL2CPP_REGISTER_METHOD(0x014FC8B0, void, OnEnable, app::PhysicsCollisionResender* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014FCA40, void, OnCollisionEnter, app::PhysicsCollisionResender* this_ptr, app::Collision* other)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::PhysicsCollisionResender* this_ptr)
} // namespace app::classes::PhysicsCollisionResender
