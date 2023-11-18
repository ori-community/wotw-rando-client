#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComboMoveType__Enum.h>
#include <Modloader/app/structs/CharacterGravity.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DrillZone.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/SeinDrill.h>
#include <Modloader/app/structs/SeinDrillPuppet.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SeinDrill {
    IL2CPP_REGISTER_METHOD(0x00417920, app::ComboMoveType__Enum, get_ComboMoveType, (app::SeinDrill * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinDrill * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006E4240, app::CharacterGravity*, get_Gravity, (app::SeinDrill * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::CharacterPlatformMovement*, get_PlatformMovement, (app::SeinDrill * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00805AA0, int32_t, get_GroundMask, ())
    IL2CPP_REGISTER_METHOD(0x00AC9A70, app::SeinDrillPuppet*, get_Puppet, (app::SeinDrill * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, Update, (app::SeinDrill * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AC9B30, void, Start, (app::SeinDrill * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AC9CD0, void, OnDestroy, (app::SeinDrill * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AC9FA0, void, OnSetReferenceToSein, (app::SeinDrill * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACA270, bool, IsDrilling, (app::SeinDrill * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACA280, void, ModifyGravityPlatformMovementSettings, (app::SeinDrill * this_ptr, app::GravityPlatformMovementSettings* settings))
    IL2CPP_REGISTER_METHOD(0x00ACA2B0, float, AdaptSpeed, (app::SeinDrill * this_ptr, float speed))
    IL2CPP_REGISTER_METHOD(0x00ACA480, bool, IsInsideDashTimeWindow, (app::SeinDrill * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACA610, app::DrillZone*, RayCastTest, (app::SeinDrill * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACA940, bool, IsCorrectDrillAngle, (app::SeinDrill * this_ptr, app::Vector2 velocity, app::Vector2 normal))
    IL2CPP_REGISTER_METHOD(0x00ACAA40, bool, TryDrillEntity, (app::SeinDrill * this_ptr, app::Vector2 velocity, app::Vector2 normal, app::GameObject* entity))
    IL2CPP_REGISTER_METHOD(0x00ACAB90, void, StartDrill, (app::SeinDrill * this_ptr, app::DrillZone* drill_zone))
    IL2CPP_REGISTER_METHOD(0x00ACAE50, void, StopDrill, (app::SeinDrill * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnProcessRootMotion, (app::SeinDrill * this_ptr, app::Vector3 root_velocity))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTakeDamage, (app::SeinDrill * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00ACAF00, void, OnDrillZoneReleaseEvent, (app::SeinDrill * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACB100, void, ctor, (app::SeinDrill * this_ptr))
} // namespace app::classes::SeinDrill
