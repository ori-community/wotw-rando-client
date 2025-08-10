#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/ButtonInputType__Enum.h>
#include <Modloader/app/structs/CharacterLeftRightMovement.h>
#include <Modloader/app/structs/CharacterSpriteMirror.h>
#include <Modloader/app/structs/ComboInput.h>
#include <Modloader/app/structs/ComboMoveType__Enum.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/EffectSpawn.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/IComboMove.h>
#include <Modloader/app/structs/List_1_Moon_ComboSystem_IComboMove_.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/SeinChargeJump.h>
#include <Modloader/app/structs/SeinChargeJumpPuppet.h>
#include <Modloader/app/structs/SeinChargeJump_State__Enum.h>
#include <Modloader/app/structs/SeinController3D_EventId__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SeinChargeJump {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A47990, bool, get_IsStatePerforming, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A479B0, bool, get_IsCharging, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A479D0, bool, get_IsJumping, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::List_1_Moon_ComboSystem_IComboMove_*, get_ComboMoves, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A479E0, float, get_MoveCooldown, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FD590, float, get_MoveCooldownTimer, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A479F0, void, set_MoveCooldownTimer, app::SeinChargeJump* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x006C14C0, bool, get_WasGroundedSinceLastExecution, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006C14D0, void, set_WasGroundedSinceLastExecution, app::SeinChargeJump* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FD740, float, get_ProviderCooldown, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FDAA0, float, get_ProviderCooldownTimer, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A47A00, void, set_ProviderCooldownTimer, app::SeinChargeJump* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00A47A10, float, get_EffectiveDamage, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A47A30, app::SeinChargeJumpPuppet*, get_Puppet, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D0720, app::CharacterSpriteMirror*, get_CharacterSpriteMirror, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ButtonInputType__Enum, get_ButtonInputType, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement*, get_PlatformMovement, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007E3F20, app::AbilityType__Enum, get_ComboAbilityType, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A47AF0, bool, get_MoveHasFinished, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A47B00, bool, get_CanTurnPlay, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, app::ComboMoveType__Enum, get_ComboMoveType, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A47B40, bool, get_CanStartCharging, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A47BA0, bool, get_CanCharge, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A47C90, bool, get_IsAttackButtonDown, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A47CE0, bool, get_OnAttackButtonPressed, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A47D50, bool, get_OnAttackButtonReleased, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A47DA0, bool, CanExecute, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A47E20, bool, CanGrabSurface, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A47E50, void, UpdateMode, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A47F50, app::IAttackable*, GetValidTarget, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A481A0, app::IComboMove*, GetComboMove, app::SeinChargeJump* this_ptr, app::ComboInput* input)
    IL2CPP_REGISTER_METHOD(0x00A48230, void, OnAwake, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A488E0, void, OnPostRestoreCheckpoint, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A48950, void, OnExit, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A48970, void, ResetChargeJump, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A48970, void, OnResetAirLimits, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A48980, void, JumpTimelineFinished, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A489A0, void, DashTimelineFinished, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A489C0, void, BounceTimelineFinished, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A489E0, void, EnterMove, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGoThroughPortal, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A48BC0, void, OnWentThroughPortal, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateMove, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A48FC0, void, ExitMove, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A49190, void, InterruptMove, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A491C0, void, ClampSpeedX, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A49380, void, ChangeState, app::SeinChargeJump* this_ptr, app::SeinChargeJump_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x00A49770, void, Update, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A49780, void, UpdateTurnAnimations, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A49B70, bool, JumpAnimationContinueCondition, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A49BE0, void, EnableGenericJumpFlipTransition, app::SeinChargeJump* this_ptr, float time)
    IL2CPP_REGISTER_METHOD(0x00A488E0, void, CancelGenericJumpFlipTransition, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A49C50, void, UpdateCharacterState, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A49F60, void, UpdateState, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A4A130, void, OnEnterIdle, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A4A4F0, void, UpdateIdle, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A4A560, void, OnExitIdle, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A4A820, void, OnEnterCharging, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A4A840, void, UpdateCharging, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitCharging, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A4A8F0, void, UpdateCharged, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A4A930, void, DealDamage, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A4AF60, void, DamageTicked, app::SeinChargeJump* this_ptr, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(0x00A4B0E0, app::EffectSpawn, DamageEffectProvider, app::SeinChargeJump* this_ptr, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(0x00A4B200, void, OnEnterDashAttack, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A4B2D0, void, OnEnterBounceAttack, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A4B6A0, void, OnExitDashAttack, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A4B760, void, OnExitBounceAttack, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A4B820, void, Land, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A4BAE0, void, UpdateDashAttack, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A4BCD0, bool, TryAttacking, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, DrawDebug, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A4BDC0, void, UpdateBounceAttack, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A4C040, void, OnEnterAiming, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00A4CDE0,
        void,
        UpdateDPadAngle,
        bool smooth,
        float* angle_in_out,
        float* kbd_speed_in_out,
        float* kbd_angle_in_out,
        bool* kbd_clockwise_in_out
    )
    IL2CPP_REGISTER_METHOD(0x00A4D100, void, UpdateAngle, app::SeinChargeJump* this_ptr, bool smooth)
    IL2CPP_REGISTER_METHOD(0x00A4D650, void, UpdateDirection, app::SeinChargeJump* this_ptr, app::Vector3 default_direction)
    IL2CPP_REGISTER_METHOD(0x00A4DC70, void, UpdateAiming, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00A4E0F0,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::SeinChargeJump* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(
        0x00A4E1A0,
        void,
        ModifyGravityPlatformMovementSettings,
        app::SeinChargeJump* this_ptr,
        app::GravityPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x00A4E1D0, void, OnExitAiming, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, MoveTowardsTargetPosition, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A4E3B0, void, Jump, app::SeinChargeJump* this_ptr, app::Vector2 direction)
    IL2CPP_REGISTER_METHOD(0x00A4E9C0, void, DisableAttack, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A4E9E0, void, OnEnterJumping, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A4EDB0, void, UpdateChargeJumpEffects, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A4EF20, void, UpdateJumping, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A4F0C0, void, UpdateJumpSpeed, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A4F830, void, UpdateDirectionParameter, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A4FA30, void, OnCollision, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A4FA50, void, OnExitJumping, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationEvent, app::SeinChargeJump* this_ptr, app::SeinController3D_EventId__Enum event_id)
    IL2CPP_REGISTER_METHOD(0x005D06F0, app::CharacterLeftRightMovement*, get_LeftRightMovement, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A4FB10, void, OnPreTurningHandlerTurn, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A4FEE0, void, OnSetReferenceToSein, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A504E0, void, OnDestroy, app::SeinChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A50960, void, ctor, app::SeinChargeJump* this_ptr)
} // namespace app::classes::SeinChargeJump
