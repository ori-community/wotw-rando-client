#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/CharacterGravity.h>
#include <Modloader/app/structs/CharacterLeftRightMovement.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/IGreanade.h>
#include <Modloader/app/structs/SeinGrenadeAttack.h>
#include <Modloader/app/structs/StartLoopEndEffect.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SeinGrenadeAttack {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D0A00, bool, get_AutoAimAllowed, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D0A20, bool, get_ExplodeWithSecondButtonPress, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D0A40, bool, get_ForceExplodeGrenadeOnCollision, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D0A60, bool, get_IsInQuickThrowWindow, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D0A80, float, get_AnimationAimAngle, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D0A90, void, set_AnimationAimAngle, app::SeinGrenadeAttack* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x014D0B10, app::AbilityType__Enum, get_AbilityType, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D0B20, bool, get_IsGrabbingWall, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D0B70, bool, get_IsInAir, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D0B80, void, ResetAimToDefault, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D0BF0, int32_t, PickAnimationIndex, app::SeinGrenadeAttack* this_ptr, int32_t length)
    IL2CPP_REGISTER_METHOD(0x014D0DA0, float, IndexToAnimationAngle, app::SeinGrenadeAttack* this_ptr, int32_t index, int32_t length)
    IL2CPP_REGISTER_METHOD(0x014D0F10, bool, get_HasEnoughEnergy, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D0F90, void, SpendEnergy, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D1020, void, RestoreEnergy, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D1060, void, OnEnable, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D1200, void, OnDisable, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D13B0, void, Start, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D18C0, void, OnDestroy, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D1E00, void, OnRestoreCheckpoint, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D06F0, app::CharacterLeftRightMovement*, get_CharacterLeftRightMovement, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006E4240, app::CharacterGravity*, get_CharacterGravity, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x014D1E10,
        void,
        ModifyGravityPlatformMovementSettings,
        app::SeinGrenadeAttack* this_ptr,
        app::GravityPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(
        0x014D1EA0,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::SeinGrenadeAttack* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x014D20D0, void, OnDamageReceived, app::SeinGrenadeAttack* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x014D2100, void, OnSetReferenceToSein, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D21E0, void, FixedUpdate, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D21F0, void, UpdateCharacterState, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D2460, void, UpdateChargedHandGrenadeEffect, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D27D0, void, UpdateWasGrounded, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D2810, void, UpdateCurrentThrow, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D29B0, bool, CanResetGroundedFlag, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D2AA0, app::Vector3, get_GrenadeSpawnPosition, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D2BD0, app::Vector3, get_RightHandPosition, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D2D80, app::Vector3, get_SeinCenterPosition, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D2F00, void, OnDoubleJump, app::SeinGrenadeAttack* this_ptr, float strength)
    IL2CPP_REGISTER_METHOD(0x014D3000, void, SpawnGrenadeDelayed, app::SeinGrenadeAttack* this_ptr, app::Vector2 velocity)
    IL2CPP_REGISTER_METHOD(
        0x014D3030,
        void,
        OnGrenadeSpawn,
        app::SeinGrenadeAttack* this_ptr,
        app::IGreanade* grenade,
        app::Vector2 velocity,
        bool bashable,
        float damage,
        bool can_fracture,
        bool is_fractured_piece
    )
    IL2CPP_REGISTER_METHOD(0x014D3280, void, SpawnGrenade, app::SeinGrenadeAttack* this_ptr, app::Vector2 velocity, bool bashable, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x014D3770, void, SpawnFracturedGrenades, app::SeinGrenadeAttack* this_ptr, app::Vector2 speed, bool bashable, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(
        0x014D3EA0,
        void,
        SpawnGrenadeInternal,
        app::SeinGrenadeAttack* this_ptr,
        app::Vector2 velocity,
        bool bashable,
        float damage,
        app::Vector3 position,
        bool can_fracture,
        bool is_fractured_piece
    )
    IL2CPP_REGISTER_METHOD(0x014D42C0, void, ClampGrenadeListToMaxAllowed, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D45A0, void, CleanUpListOfGrenades, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D4770, bool, get_IsAiming, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D4770, bool, get_IsStatePerforming, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D4780, bool, get_CanAim, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D47C0, bool, get_IsProjectileSpawnPlanned, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D47E0, void, PlayAimAnimation, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D4A70, void, PlayThrowAnimation, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D4B70, void, PlayThrowSound, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D4D30, void, EndAiming, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D4F90, void, UpdateTrajectory, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D50B0, void, UpdateAimAnimationAngle, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D5290, float, TimeToTarget, app::SeinGrenadeAttack* this_ptr, app::Vector2 velocity, app::IAttackable* target)
    IL2CPP_REGISTER_METHOD(0x014D53B0, bool, WillRayHitEnemy, app::SeinGrenadeAttack* this_ptr, app::Vector2 initial_velocity, app::IAttackable* target)
    IL2CPP_REGISTER_METHOD(0x014D5850, bool, KeepPlayingAirThrowAnimation, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006EAA90, bool, KeepPlayingGroundThrowAnimation, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D5980, void, SetHandGrenadeEffect, app::SeinGrenadeAttack* this_ptr, app::StartLoopEndEffect* effect)
    IL2CPP_REGISTER_METHOD(0x014D5A70, void, UpdateAiming, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D6770, float, GetDesiredAimAngleSmoothed, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D6840, bool, IsFracturedPiece, app::SeinGrenadeAttack* this_ptr, app::IGreanade* grenade)
    IL2CPP_REGISTER_METHOD(0x014D6940, bool, IsInManualExplodeTimeRange, app::SeinGrenadeAttack* this_ptr, app::IGreanade* grenade)
    IL2CPP_REGISTER_METHOD(0x014D6A60, bool, IsNonFracturedGrenadeAlive, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D6BF0, void, UpdateNormal, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D4770, bool, KeepPlayingAimAnimation, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D7530, bool, KeepPlayingNotEnoughEnergyAnimation, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D7630, void, BeginAiming, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D7CC0, app::IAttackable*, get_FindAutoAttackable, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D8270, void, AutoTarget, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D83D0, void, SetAimVelocity, app::SeinGrenadeAttack* this_ptr, app::Vector2 aim)
    IL2CPP_REGISTER_METHOD(0x014D8440, app::Vector3, GetSafeGrenadeSpawnPosition, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D8960, app::Vector2, VelocityToAimAtTarget, app::SeinGrenadeAttack* this_ptr, app::IAttackable* attackable)
    IL2CPP_REGISTER_METHOD(0x014D8BA0, void, OnExit, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D8BC0, void, CancelAiming, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D8D80, void, StartStressTest, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StressTestUpdate, app::SeinGrenadeAttack* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndStressTest, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00696560, app::StressTestStatus__Enum, get_StressTestStatus, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00696570, void, set_StressTestStatus, app::SeinGrenadeAttack* this_ptr, app::StressTestStatus__Enum value)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IStressTest_get_CanExecuteStressTest, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_StopMovingPlayerWhilePerforming, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D8D90, app::String*, get_StressTestName, app::SeinGrenadeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014D8E10, void, ctor, app::SeinGrenadeAttack* this_ptr)
} // namespace app::classes::SeinGrenadeAttack
