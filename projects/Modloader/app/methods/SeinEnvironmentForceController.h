#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinEnvironmentForceController.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/PlatformMovementListOfColliders.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SeinGrabWall.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SeinEnvironmentForceController {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinEnvironmentForceController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement*, get_PlatformMovement, (app::SeinEnvironmentForceController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD1280, app::PlatformMovementListOfColliders*, get_PlatformMovementListOfColliders, (app::SeinEnvironmentForceController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD12B0, app::SeinGrabWall*, get_GrabWall, (app::SeinEnvironmentForceController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD12F0, bool, ShouldApplyForces, (app::SeinEnvironmentForceController * this_ptr, app::Rigidbody* rigidbody))
    IL2CPP_REGISTER_METHOD(0x00AD1480, void, Start, (app::SeinEnvironmentForceController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD1A20, void, OnDestroy, (app::SeinEnvironmentForceController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD1FD0, bool, get_IsGrabbingWall, (app::SeinEnvironmentForceController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD2100, void, UpdateCharacterState, (app::SeinEnvironmentForceController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD31A0, app::Vector3, get_SeinSpeed, (app::SeinEnvironmentForceController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD32B0, void, OnLandOnCeilingEvent, (app::SeinEnvironmentForceController * this_ptr, app::Vector3 normal, app::Collider* target))
    IL2CPP_REGISTER_METHOD(0x00AD3570, void, OnLandOnWallEvent, (app::SeinEnvironmentForceController * this_ptr, app::Vector3 normal, app::Collider* target))
    IL2CPP_REGISTER_METHOD(0x00AD3830, void, OnCollisionGround, (app::SeinEnvironmentForceController * this_ptr, app::Vector3 normal, app::Collider* target))
    IL2CPP_REGISTER_METHOD(0x00AD38C0, void, ctor, (app::SeinEnvironmentForceController * this_ptr))
} // namespace app::classes::SeinEnvironmentForceController
