#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FollowerCapsuleCollider {
    IL2CPP_REGISTER_METHOD(0x0127CE30, bool, HasFromReference, (app::FollowerCapsuleCollider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0127CED0, bool, HasToReference, (app::FollowerCapsuleCollider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0127CF70, app::Vector3, get_CapsuleBase, (app::FollowerCapsuleCollider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0127D0F0, app::Vector3, get_CapsuleTop, (app::FollowerCapsuleCollider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0127D270, app::Vector3, GetCapsuleAxisFromDirection, (app::CapsuleCollider * capsule))
    IL2CPP_REGISTER_METHOD(0x0127D400, void, UpdatePendingBatch, ())
    IL2CPP_REGISTER_METHOD(0x0127D4A0, void, RegisterBatchedCapsule, (app::CapsuleCollider * capsule))
    IL2CPP_REGISTER_METHOD(0x0127D5C0, void, RegisterBatchedCapsules, (app::CapsuleCollider__Array * capsules))
    IL2CPP_REGISTER_METHOD(0x0127D780, void, UnregisterBatchedCapsule, (app::CapsuleCollider * capsule))
    IL2CPP_REGISTER_METHOD(0x0127D8A0, void, UnregisterBatchedCapsules, (app::CapsuleCollider__Array * capsules))
    IL2CPP_REGISTER_METHOD(0x0127DA80, void, Awake, (app::FollowerCapsuleCollider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0127DC20, void, OnDestroy, (app::FollowerCapsuleCollider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0127DDC0, void, UpdateCapsule, (app::Vector3 from, app::Vector3 to, app::CapsuleCollider * capsule, app::FollowerCapsuleCollider_CapsulePlacementMode__Enum mode, bool batched))
    IL2CPP_REGISTER_METHOD(0x0127E490, void, FixedUpdate, (app::FollowerCapsuleCollider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0127E850, float, get_ErrorDistanceToleranceEx, (app::FollowerCapsuleCollider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0127E940, app::Vector3, GetProjectedPointOnZ, (app::FollowerCapsuleCollider * this_ptr, app::Vector3 point_position))
    IL2CPP_REGISTER_METHOD(0x0127EA30, void, OnDrawGizmosSelected, (app::FollowerCapsuleCollider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::FollowerCapsuleCollider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0127EF90, void, cctor, ())
}
