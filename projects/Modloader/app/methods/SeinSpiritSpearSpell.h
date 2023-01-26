#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinSpiritSpearSpell.h>
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/ButtonInputType__Enum.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/ComboInput.h>
#include <Modloader/app/structs/ComboMoveType__Enum.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/IComboMove.h>
#include <Modloader/app/structs/List_1_Moon_ComboSystem_IComboMove_.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/SeinController3D_EventId__Enum.h>
#include <Modloader/app/structs/SeinSpiritSpearSpellPuppet.h>
#include <Modloader/app/structs/SeinSpiritSpearSpell_FlyingSpear.h>
#include <Modloader/app/structs/SeinSpiritSpearSpell_State__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SeinSpiritSpearSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ButtonInputType__Enum, get_ButtonInputType, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A71890, app::SeinSpiritSpearSpellPuppet*, get_Puppet, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A71950, float, get_EffectiveDamage, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A719A0, void, OnSetReferenceToSein, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A71BD0, void, OnExit, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A71BE0, void, OnDestroy, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A71D90, void, UpdateCharacterState, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A71DA0, float, get_InputMemoryAge, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A71E60, bool, get_InputMemoryValid, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A71F30, void, UpdateInputMemory, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A720B0, void, FixedUpdate, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::CharacterPlatformMovement*, get_PlatformMovement, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A72B10, app::Vector3, get_AttackTargetPosition, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A72C70, void, set_AttackTargetPosition, (app::SeinSpiritSpearSpell * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00A72C90, app::Vector3, get_AttackPointNormal, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A72CB0, void, set_AttackPointNormal, (app::SeinSpiritSpearSpell * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00A72CD0, app::Quaternion, get_AttackRotation, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A730F0, app::Quaternion, get_AttackRotationForVFX, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A73300, bool, get_CanAfford, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A73350, void, CancelSpell, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A71BD0, void, OnKill, (app::SeinSpiritSpearSpell * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00A73460, bool, ShouldCharacterJumpAnimationKeepPlaying, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A73470, bool, ShouldCharacterEndAnimationKeepPlaying, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A73490, bool, ShouldCharacterChargeAnimationKeepPlaying, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A734B0, app::Vector3, GetSmoothedVelocity, (app::SeinSpiritSpearSpell * this_ptr, app::Vector3 direction, float speed, float max_speed))
    IL2CPP_REGISTER_METHOD(0x00A73630, app::Vector3, GetJumpTargetPosition, (app::SeinSpiritSpearSpell * this_ptr, app::Vector3 from, float angle, float length))
    IL2CPP_REGISTER_METHOD(0x00A73A20, void, FindClosestAttackTarget, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A749A0, void, DealDamage, (app::SeinSpiritSpearSpell * this_ptr, app::Vector3 direction, app::IAttackable* target, app::SeinSpiritSpearSpell_FlyingSpear flying_spear))
    IL2CPP_REGISTER_METHOD(0x00A74DC0, void, DamageTicked, (app::SeinSpiritSpearSpell * this_ptr, app::DamageResult damage_result))
    IL2CPP_REGISTER_METHOD(0x00A74F80, void, DealAreaDamage, (app::SeinSpiritSpearSpell * this_ptr, app::SeinSpiritSpearSpell_FlyingSpear flying_spear))
    IL2CPP_REGISTER_METHOD(0x00A752D0, bool, get_IsStatePerforming, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A752E0, void, UpdateState, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A75560, void, ChangeState, (app::SeinSpiritSpearSpell * this_ptr, app::SeinSpiritSpearSpell_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00A75710, bool, IsShootingSpear, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A75730, void, TryToBeginSpell, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A75910, void, BeginSpell, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A75A70, void, EnterReady, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateReady, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A75B80, void, EnterJumpBackwards, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A760A0, void, UpdateJumpBackwards, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A76400, void, EnterCharge, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A76EA0, void, UpdateCharge, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmos, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A77AC0, void, EnterShootSpear, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A785E0, void, UpdateShootSpear, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EnterImpact, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A78780, void, UpdateImpact, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A78930, void, EnterEnd, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A78C70, void, UpdateEnd, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A79160, float, GetChargeDuration, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A79180, float, GetJumpBackDuration, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A791A0, float, GetEndStateDuration, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A791C0, bool, get_MoveHasFinished, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ComboMoveType__Enum, get_ComboMoveType, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A791E0, bool, get_IsAttackButtonDown, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A79230, bool, get_OnAttackButtonPressed, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A79290, bool, get_OnAttackButtonReleased, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D8A80, bool, CanExecute, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A792E0, void, EnterMove, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateMove, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A71BD0, void, ExitMove, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A71BD0, void, InterruptMove, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IComboMove_ModifyGravityPlatformMovementSettings, (app::SeinSpiritSpearSpell * this_ptr, app::GravityPlatformMovementSettings* settings))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IComboMove_ModifyHorizontalPlatformMovementSettings, (app::SeinSpiritSpearSpell * this_ptr, app::HorizontalPlatformMovementSettings* settings))
    IL2CPP_REGISTER_METHOD(0x00A792F0, app::IComboMove*, GetComboMove, (app::SeinSpiritSpearSpell * this_ptr, app::ComboInput* input))
    IL2CPP_REGISTER_METHOD(0x00A79320, bool, CanBeInterruptedBy, (app::SeinSpiritSpearSpell * this_ptr, app::IComboMove* move))
    IL2CPP_REGISTER_METHOD(0x00A79410, float, get_MoveCooldown, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A79420, void, set_MoveCooldown, (app::SeinSpiritSpearSpell * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00A79430, float, get_MoveCooldownTimer, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A79440, void, set_MoveCooldownTimer, (app::SeinSpiritSpearSpell * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00A79450, bool, get_WasGroundedSinceLastExecution, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A79460, void, set_WasGroundedSinceLastExecution, (app::SeinSpiritSpearSpell * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationEvent, (app::SeinSpiritSpearSpell * this_ptr, app::SeinController3D_EventId__Enum event_id))
    IL2CPP_REGISTER_METHOD(0x00A79470, app::List_1_Moon_ComboSystem_IComboMove_*, get_ComboMoves, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A79480, void, set_ComboMoves, (app::SeinSpiritSpearSpell * this_ptr, app::List_1_Moon_ComboSystem_IComboMove_* value))
    IL2CPP_REGISTER_METHOD(0x00A79490, float, get_ProviderCooldown, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A794A0, float, get_ProviderCooldownTimer, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A794B0, void, set_ProviderCooldownTimer, (app::SeinSpiritSpearSpell * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00A794C0, app::AbilityType__Enum, get_ComboAbilityType, (app::SeinSpiritSpearSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A794D0, void, ctor, (app::SeinSpiritSpearSpell * this_ptr))
} // namespace app::classes::SeinSpiritSpearSpell
