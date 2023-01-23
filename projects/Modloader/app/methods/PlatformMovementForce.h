#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlatformBehaviour.h>
#include <Modloader/app/structs/PlatformMovementForce.h>
#include <Modloader/app/structs/PlatformMovementListOfColliders.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/ForceMode__Enum.h>

namespace app::classes::PlatformMovementForce {
    IL2CPP_REGISTER_METHOD(0x0116F490, app::PlatformBehaviour*, get_PlatformBehaviour, (app::PlatformMovementForce * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0116F4B0, app::PlatformMovementListOfColliders*, get_ListOfColliders, (app::PlatformMovementForce * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0116F4E0, app::PlatformMovement*, get_PlatformMovement, (app::PlatformMovementForce * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, SetReferenceToSein, (app::PlatformMovementForce * this_ptr, app::SeinCharacter* sein))
    IL2CPP_REGISTER_METHOD(0x0116F510, bool, ShouldApplyForces, (app::PlatformMovementForce * this_ptr, app::Rigidbody* rigidbody))
    IL2CPP_REGISTER_METHOD(0x0116F5E0, void, ApplyGroundForce, (app::PlatformMovementForce * this_ptr, app::Vector3 force, app::ForceMode__Enum force_mode))
    IL2CPP_REGISTER_METHOD(0x0116F630, void, ApplyCeilingForce, (app::PlatformMovementForce * this_ptr, app::Vector3 force, app::ForceMode__Enum force_mode))
    IL2CPP_REGISTER_METHOD(0x0116F9B0, void, ApplyWallLeftForce, (app::PlatformMovementForce * this_ptr, app::Vector3 force, app::ForceMode__Enum force_mode))
    IL2CPP_REGISTER_METHOD(0x0116FD30, void, ApplyWallRightForce, (app::PlatformMovementForce * this_ptr, app::Vector3 force))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PlatformMovementForce * this_ptr))
} // namespace app::classes::PlatformMovementForce
