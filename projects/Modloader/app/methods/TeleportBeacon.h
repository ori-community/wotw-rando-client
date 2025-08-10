#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/GrabbableSurface.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/ITeleportBeaconAttackable.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/TeleportBeacon.h>
#include <Modloader/app/structs/TeleportBeacon_State__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::TeleportBeacon {
    IL2CPP_REGISTER_METHOD(0x00CE5210, bool, get_IsLockOnTargetValid, app::TeleportBeacon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, app::TeleportBeacon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0057A580, bool, get_IsSuspended, app::TeleportBeacon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0057A590, void, set_IsSuspended, app::TeleportBeacon* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0057A5A0, app::SuspendableMask__Enum, get_Mask, app::TeleportBeacon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CE5330, void, set_Mask, app::TeleportBeacon* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x002FBC70, void, SetLockOnTarget, app::TeleportBeacon* this_ptr, app::IAttackable* target)
    IL2CPP_REGISTER_METHOD(0x00CE53F0, void, ChangeState, app::TeleportBeacon* this_ptr, app::TeleportBeacon_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x00CE56D0, void, OnEnable, app::TeleportBeacon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CE5770, void, Awake, app::TeleportBeacon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CE5850, void, Start, app::TeleportBeacon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CE5860, void, OnDestroy, app::TeleportBeacon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CE5920, void, Invalidate, app::TeleportBeacon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CE5B60, void, Explode_1, app::TeleportBeacon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CE60B0, void, Explode_2, app::TeleportBeacon* this_ptr, app::ITeleportBeaconAttackable* target)
    IL2CPP_REGISTER_METHOD(0x00CE63E0, void, ExplodeOnGrabableSurface, app::TeleportBeacon* this_ptr, app::GrabbableSurface* surface)
    IL2CPP_REGISTER_METHOD(0x00CE6770, void, Teleport, app::TeleportBeacon* this_ptr, app::ITeleportBeaconAttackable* teleport_beacon_attackable)
    IL2CPP_REGISTER_METHOD(0x00CE6950, void, SetTrajectory, app::TeleportBeacon* this_ptr, app::Vector2 speed)
    IL2CPP_REGISTER_METHOD(0x00CE6A80, void, UpdateState, app::TeleportBeacon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CE7010, void, FixedUpdate, app::TeleportBeacon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CE7400, void, OnFrustumEnter, app::TeleportBeacon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CE7410, void, OnFrustumExit, app::TeleportBeacon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_InsideFrustum, app::TeleportBeacon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CE7420, app::Bounds, get_Bounds, app::TeleportBeacon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, app::TeleportBeacon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CE7660, void, OnCollisionEnter, app::TeleportBeacon* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x00CE7870, void, OnDrawGizmosSelected, app::TeleportBeacon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CE7920, void, ctor, app::TeleportBeacon* this_ptr)
} // namespace app::classes::TeleportBeacon
