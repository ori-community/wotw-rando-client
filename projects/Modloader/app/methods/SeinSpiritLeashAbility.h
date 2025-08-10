#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/ButtonInputType__Enum.h>
#include <Modloader/app/structs/CharacterAirNoDeceleration.h>
#include <Modloader/app/structs/CharacterApplyFrictionToSpeed.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/ComboInput.h>
#include <Modloader/app/structs/ComboMoveType__Enum.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GrabbableSurface.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/IComboMove.h>
#include <Modloader/app/structs/ISpiritLeashAttackable.h>
#include <Modloader/app/structs/Input_InputButtonProcessor.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/List_1_Moon_ComboSystem_IComboMove_.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonControllerColliderHit.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/SeinController3D_EventId__Enum.h>
#include <Modloader/app/structs/SeinLeashPuppet.h>
#include <Modloader/app/structs/SeinSpiritLeashAbility.h>
#include <Modloader/app/structs/SeinSpiritLeashAbility_LeashableInfo.h>
#include <Modloader/app/structs/SeinSpiritLeashAbility_State__Enum.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SeinSpiritLeashAbility {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ButtonInputType__Enum, get_ButtonInputType, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E57B0, app::Transform*, get_LeashMarkPositionTransform, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E59C0, app::LayerMask, get_GroundMask, )
    IL2CPP_REGISTER_METHOD(0x005E5AD0, app::LayerMask, get_RaycastMask, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E5C70, bool, get_IsPerformingSpiritLeash, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E5C90, bool, get_HasTarget, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E5D40, bool, MovesTowards, app::SeinSpiritLeashAbility* this_ptr, app::IAttackable* attackable)
    IL2CPP_REGISTER_METHOD(0x005E5DC0, bool, IsHookedOn, app::SeinSpiritLeashAbility* this_ptr, app::IAttackable* attackable)
    IL2CPP_REGISTER_METHOD(0x005E5DE0, bool, get_UsingLeftTrigger, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E5E10, app::Input_InputButtonProcessor*, get_ActivationButton, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E5F00, bool, get_ButtonPressed, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E5F20, bool, get_SpriteMirrorLock, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E5F30, void, set_SpriteMirrorLock, app::SeinSpiritLeashAbility* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x005E5FF0, bool, get_FinishThrow, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E6040, void, OnEnable, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E6200, void, OnDisable, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E63E0, void, Start, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E6DB0, void, Update, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E6ED0, void, UpdateTurnAnimations, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E70B0, app::GrabbableSurface*, GetAndCacheObjectSurface, app::SeinSpiritLeashAbility* this_ptr, app::GameObject* obj)
    IL2CPP_REGISTER_METHOD(0x005E7370, void, PruneRecentHitSurfaces, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E7710, void, PreDash, app::SeinSpiritLeashAbility* this_ptr, bool* allow)
    IL2CPP_REGISTER_METHOD(0x005E79D0, void, OnDash, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E7A90, void, OnBash, app::SeinSpiritLeashAbility* this_ptr, app::Vector2 speed)
    IL2CPP_REGISTER_METHOD(0x005E7B40, void, OnCollision, app::SeinSpiritLeashAbility* this_ptr, app::GameObject* other_obj, app::Vector3 normal)
    IL2CPP_REGISTER_METHOD(0x005E7DC0, void, OnMoonControllerCollision, app::SeinSpiritLeashAbility* this_ptr, app::MoonControllerColliderHit hit)
    IL2CPP_REGISTER_METHOD(0x005E7E80, void, OnNativeCollision, app::SeinSpiritLeashAbility* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(
        0x005E8110,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::SeinSpiritLeashAbility* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x005E8360, float, get_MoveCooldown, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E8370, float, get_MoveCooldownTimer, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E8380, void, set_MoveCooldownTimer, app::SeinSpiritLeashAbility* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x005E8390, bool, get_WasGroundedSinceLastExecution, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E83A0, void, set_WasGroundedSinceLastExecution, app::SeinSpiritLeashAbility* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationEvent, app::SeinSpiritLeashAbility* this_ptr, app::SeinController3D_EventId__Enum event_id)
    IL2CPP_REGISTER_METHOD(0x005E83B0, void, OnSetReferenceToSein, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E8500, bool, get_MoveHasFinished, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, app::ComboMoveType__Enum, get_ComboMoveType, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E5F00, bool, get_IsAttackButtonDown, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E8510, bool, get_OnAttackButtonPressed, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E8540, bool, get_OnAttackButtonReleased, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E8570, bool, CanExecute, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E8580, void, EnterMove, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E8680, void, UpdateMove, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E8690, void, ExitMove, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E86B0, void, InterruptMove, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x005E8730,
        void,
        ModifyGravityPlatformMovementSettings,
        app::SeinSpiritLeashAbility* this_ptr,
        app::GravityPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(
        0x005E8760,
        void,
        IComboMove_ModifyHorizontalPlatformMovementSettings,
        app::SeinSpiritLeashAbility* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x005E8770, void, ChangeState, app::SeinSpiritLeashAbility* this_ptr, app::SeinSpiritLeashAbility_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x005E8DB0, bool, WillDamageInterruptLeash, app::SeinSpiritLeashAbility* this_ptr, app::DamageType__Enum type)
    IL2CPP_REGISTER_METHOD(0x005E8E10, void, OnTakeDamage, app::SeinSpiritLeashAbility* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x005E8E90, bool, get_IsStatePerforming, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E8F60, bool, ShouldPullNeedToPlay, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E9020, void, UpdateCharacterState, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E9550, void, UpdateStates, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E9800, void, UpdateSustainedInput, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E9950, void, SustainInput, app::SeinSpiritLeashAbility* this_ptr, app::Vector2 input_direction, float sustain_time)
    IL2CPP_REGISTER_METHOD(0x005E9980, bool, HasSustainedInput, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E99A0, void, ResetJumpAndDash, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E99D0, void, EnterIdle, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E9C70, void, UpdateIdle, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E9D50, void, TryLeash, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E9E50, void, Interrupt, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E9E60, void, EnterReady, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005EA190, void, ExitReady, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005EA1A0, bool, PlaySound, app::SeinSpiritLeashAbility* this_ptr, app::SoundProvider* sound)
    IL2CPP_REGISTER_METHOD(0x005EA340, void, UpdateReady, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005EAFD0, void, EnterHook, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x005EB3F0,
        void,
        ComputeTrajectoryCorrection,
        app::SeinSpiritLeashAbility* this_ptr,
        app::SeinSpiritLeashAbility_LeashableInfo* leash_info
    )
    IL2CPP_REGISTER_METHOD(0x005EBEB0, void, ExitHook, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005EBF90, void, EnterHookPull, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005EA190, void, ExitHookPull, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EnterHooked, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ExitHooked, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005EC1F0, void, FlingJump, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005EC470, void, EnterFling, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E9E50, void, UpdateFling, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ExitFling, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005EC4D0, void, UpdateHook, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005ED910, void, DealDamage, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005EDED0, void, UpdateHooked, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005EE100, void, LockControl, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005EE1C0, void, UnlockControl, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005EE290, void, UpdateHookPull, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005EE4B0, void, SetAnimationAngle, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005EE680, void, ThrowLeashStartAnimation, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005EED80, void, EndThrowing, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005EED90, void, LeashPulledStartAnimation, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005EF0E0, void, LeashPullStartAnimation, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005EF660, void, FlingJumpStartAnimation, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005EF9B0, void, EnableGenericJumpFlipTransition, app::SeinSpiritLeashAbility* this_ptr, float time)
    IL2CPP_REGISTER_METHOD(0x005EFA20, void, CancelGenericJumpFlipTransition, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ReleaseLock, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005EFA90, void, LeashGrabWallHookAnimation, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005EFD20, void, LeashGrabCeilingHookAnimation, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005EFF40, void, LeashGrabRotatingHookAnimation, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F0020, void, LeashWallHookIdle, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F02F0, void, LeashCeilingHookIdle, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F0520, bool, StayHooked, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F0530, bool, IsHookedIdling, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F0540, void, EnterQuickAttack, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement*, get_PlatformMovement, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F0710, void, LimitSpeedNearTarget, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F0980, void, UpdateQuickAttack, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F0B00, void, EnterHoldReleaseAttack, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F0D10, void, UpdateHoldReleaseAttack, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F0FB0, app::CharacterApplyFrictionToSpeed*, get_ApplyFrictionToSpeed, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F0FF0, app::CharacterAirNoDeceleration*, get_AirNoDeceleration, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F1020, void, UpdateFriction, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F1150, void, EnterHoldAttack, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F13E0, void, UpdateHoldAttack, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F1420, bool, get_IsGrabbing, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F1430, void, UpdateSlingshotTargetPosition, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F15D0, float, UpdatePlayerSlingshotMovement, app::SeinSpiritLeashAbility* this_ptr, app::Vector3 target_position)
    IL2CPP_REGISTER_METHOD(0x005F17E0, void, SpawnSpiritLeash, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F1B00, void, DestroySpiritLeashEffect, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F1CD0, void, OnExit, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F1D40, void, UpdateMark, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x005F1D70,
        void,
        UpdateTargetPositionTransform,
        app::SeinSpiritLeashAbility* this_ptr,
        app::SeinSpiritLeashAbility_LeashableInfo* target_leash
    )
    IL2CPP_REGISTER_METHOD(0x005F2220, void, ShowLeashMark, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F2890, void, HideLeashMark, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F2D40, bool, ShouldShowMark, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x005F2F40,
        float,
        CalculateAttackableCost,
        app::SeinSpiritLeashAbility* this_ptr,
        app::ISpiritLeashAttackable* attackable,
        float distance,
        float angle_dif,
        bool has_input_dir
    )
    IL2CPP_REGISTER_METHOD(0x005F3040, bool, IsVectorWithinAngle, app::Vector3 target_dir, app::Vector3 ref_dir, float angle_threshold, float* angle_difference)
    IL2CPP_REGISTER_METHOD(
        0x005F3140,
        bool,
        IsInputTowardsTarget,
        app::SeinSpiritLeashAbility* this_ptr,
        app::Vector3 target_dir,
        app::Vector3 input_dir,
        bool is_current_target,
        float* angle_difference
    )
    IL2CPP_REGISTER_METHOD(0x005F34E0, bool, CanTargetEntity, app::SeinSpiritLeashAbility* this_ptr, bool has_ultraleash)
    IL2CPP_REGISTER_METHOD(0x005F3520, bool, IsAttackableEnemy, app::IAttackable* attackable)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawLine, app::SeinSpiritLeashAbility* this_ptr, app::Vector3 from, app::Vector3 to, app::Color c)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawCircle, app::SeinSpiritLeashAbility* this_ptr, app::Vector3 center, float radius, app::Color c)
    IL2CPP_REGISTER_METHOD(0x005F3690, bool, IsAttackableInteresting, app::SeinSpiritLeashAbility* this_ptr, app::IAttackable* attackable)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RemovingAttackable, app::SeinSpiritLeashAbility* this_ptr, app::IAttackable* attackable)
    IL2CPP_REGISTER_METHOD(0x005F3780, app::Guid, get_AttackableConsumerID, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F3790, void, set_AttackableConsumerID, app::SeinSpiritLeashAbility* this_ptr, app::Guid value)
    IL2CPP_REGISTER_METHOD(0x005F37A0, void, FindClosestAttackHandler, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F7110, bool, get_CanLeash, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F7390, bool, get_CanPerformHookJump, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F7410, bool, get_IsHooking, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F7490, bool, get_CanPerformFlingJump, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F74C0, void, OnPreRestoreCheckpoint, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005E9E50, void, LetGoOffHook, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F7530, bool, ShouldHookJumpAnimationKeepPlaying, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F75C0, void, FinishedHookJump, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F75E0, void, PerformHookJump, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F7C20, app::Vector3, GetSlinshotTargetPosition, app::Vector3 from, app::Vector3 to, bool is_player, float target_distance)
    IL2CPP_REGISTER_METHOD(
        0x005F7EC0,
        app::ActiveAnimationHandle,
        PlayAnimation,
        app::SeinSpiritLeashAbility* this_ptr,
        app::MoonAnimation* animation,
        int32_t layer,
        app::Action* on_stop_playing,
        app::Func_1_Boolean_* condition,
        float speed,
        bool increase_priority
    )
    IL2CPP_REGISTER_METHOD(0x005F7FB0, void, PlayLoopAnimation, app::SeinSpiritLeashAbility* this_ptr, app::String* name, app::Func_1_Boolean_* condition)
    IL2CPP_REGISTER_METHOD(0x005F7FD0, app::Vector3, CalculatePullVelocity, app::Vector3 direction, float speed, float max_speed)
    IL2CPP_REGISTER_METHOD(0x005F8160, void, OnDestroy, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F8690, app::IComboMove*, GetComboMove, app::SeinSpiritLeashAbility* this_ptr, app::ComboInput* input)
    IL2CPP_REGISTER_METHOD(0x005F86D0, bool, CanBeInterruptedBy, app::SeinSpiritLeashAbility* this_ptr, app::IComboMove* move)
    IL2CPP_REGISTER_METHOD(0x005F8A10, app::List_1_Moon_ComboSystem_IComboMove_*, get_ComboMoves, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F8A20, void, set_ComboMoves, app::SeinSpiritLeashAbility* this_ptr, app::List_1_Moon_ComboSystem_IComboMove_* value)
    IL2CPP_REGISTER_METHOD(0x005F8A30, app::AbilityType__Enum, get_ComboAbilityType, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F8A40, float, get_CoolDown, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F8A50, void, set_CoolDown, app::SeinSpiritLeashAbility* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x005F8A40, float, get_ProviderCooldown, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F8A60, float, get_ProviderCooldownTimer, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F8A70, void, set_ProviderCooldownTimer, app::SeinSpiritLeashAbility* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x005F8A80, app::SeinLeashPuppet*, get_Puppet, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F8B40, app::String*, get_StressTestName, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F8BC0, void, StartStressTest, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F8CE0, void, StressTestUpdate, app::SeinSpiritLeashAbility* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndStressTest, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F8D20, app::StressTestStatus__Enum, get_StressTestStatus, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F8D30, void, set_StressTestStatus, app::SeinSpiritLeashAbility* this_ptr, app::StressTestStatus__Enum value)
    IL2CPP_REGISTER_METHOD(0x005F8D40, bool, get_CanExecuteStressTest, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_StopMovingPlayerWhilePerforming, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F8DF0, void, ctor, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F9B30, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x005F9BE0, bool, _ThrowLeashStartAnimation_b__209_0, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F9BE0, bool, _ThrowLeashStartAnimation_b__209_1, app::SeinSpiritLeashAbility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005F9C20, bool, _FlingJumpStartAnimation_b__216_0, app::SeinSpiritLeashAbility* this_ptr)
} // namespace app::classes::SeinSpiritLeashAbility
