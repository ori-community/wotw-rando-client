#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FollowPositionRotation.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::FollowPositionRotation {
    IL2CPP_REGISTER_METHOD(0x00C944C0, void, OnPoolSpawned, app::FollowPositionRotation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, app::FollowPositionRotation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0127C550, void, SetTarget, app::FollowPositionRotation* this_ptr, app::Transform* target)
    IL2CPP_REGISTER_METHOD(0x0127C990, void, FixedUpdate, app::FollowPositionRotation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, app::FollowPositionRotation* this_ptr)
} // namespace app::classes::FollowPositionRotation
