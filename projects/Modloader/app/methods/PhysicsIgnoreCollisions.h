#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PhysicsIgnoreCollisions.h>

namespace app::classes::PhysicsIgnoreCollisions {
    IL2CPP_REGISTER_METHOD(0x011525D0, void, OnEnable, app::PhysicsIgnoreCollisions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011527B0, void, OnDisable, app::PhysicsIgnoreCollisions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01152990, void, DoTheThing, app::PhysicsIgnoreCollisions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::PhysicsIgnoreCollisions* this_ptr)
} // namespace app::classes::PhysicsIgnoreCollisions
