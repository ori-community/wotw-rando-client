#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinEnvironmentForceController {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinEnvironmentForceController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement *, get_PlatformMovement, (app::SeinEnvironmentForceController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD1280, app::PlatformMovementListOfColliders *, get_PlatformMovementListOfColliders, (app::SeinEnvironmentForceController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD12B0, app::SeinGrabWall *, get_GrabWall, (app::SeinEnvironmentForceController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD12F0, bool, ShouldApplyForces, (app::SeinEnvironmentForceController * this_ptr, app::Rigidbody * rigidbody))
    IL2CPP_REGISTER_METHOD(0x00AD1480, void, Start, (app::SeinEnvironmentForceController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD1A20, void, OnDestroy, (app::SeinEnvironmentForceController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD1FD0, bool, get_IsGrabbingWall, (app::SeinEnvironmentForceController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD2100, void, UpdateCharacterState, (app::SeinEnvironmentForceController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD31A0, app::Vector3, get_SeinSpeed, (app::SeinEnvironmentForceController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD32B0, void, OnLandOnCeilingEvent, (app::SeinEnvironmentForceController * this_ptr, app::Vector3 normal, app::Collider * target))
    IL2CPP_REGISTER_METHODINFO(0x0474E3D0, SeinEnvironmentForceController_OnLandOnCeilingEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00AD3570, void, OnLandOnWallEvent, (app::SeinEnvironmentForceController * this_ptr, app::Vector3 normal, app::Collider * target))
    IL2CPP_REGISTER_METHODINFO(0x04769D48, SeinEnvironmentForceController_OnLandOnWallEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00AD3830, void, OnCollisionGround, (app::SeinEnvironmentForceController * this_ptr, app::Vector3 normal, app::Collider * target))
    IL2CPP_REGISTER_METHODINFO(0x047890B0, SeinEnvironmentForceController_OnCollisionGround__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00AD38C0, void, ctor, (app::SeinEnvironmentForceController * this_ptr))
}
