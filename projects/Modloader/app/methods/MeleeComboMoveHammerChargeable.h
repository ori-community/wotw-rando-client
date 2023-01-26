#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HammerComboMoveBase_BalancingData.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/EffectSpawn.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/IComboMove.h>
#include <Modloader/app/structs/MeleeComboMoveHammerChargeable.h>
#include <Modloader/app/structs/MeleeComboMoveHammerChargeable_State__Enum.h>
#include <Modloader/app/structs/MeleeWeapon.h>
#include <Modloader/app/structs/MoveEventType__Enum.h>
#include <Modloader/app/structs/Ray.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/SeinComboHandler.h>
#include <Modloader/app/structs/SeinController3D_EventId__Enum.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::MeleeComboMoveHammerChargeable {
    IL2CPP_REGISTER_METHOD(0x006FB810, app::HammerComboMoveBase_BalancingData*, get_BalancingBase, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01391440, float, get_NormalAttackDamage, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013914A0, float, get_ChargedAttackDamage, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01391500, bool, get_Charged, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01391510, void, set_Charged, (app::MeleeComboMoveHammerChargeable * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01391520, bool, get_DetectGroundCollision, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01391550, app::SoundProvider*, get_EffectiveGroundHitSound, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01391570, void, Initialize, (app::MeleeComboMoveHammerChargeable * this_ptr, app::SeinComboHandler* handler, app::MeleeWeapon* weapon))
    IL2CPP_REGISTER_METHOD(0x01391860, float, get_EffectiveDamage, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01391900, void, EnterMove, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01391E40, void, UpdateMove, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01391E70, void, InterruptMove, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01392080, void, ExitMove, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01392160, void, ModifyHorizontalPlatformMovementSettings, (app::MeleeComboMoveHammerChargeable * this_ptr, app::HorizontalPlatformMovementSettings* settings))
    IL2CPP_REGISTER_METHOD(0x01392350, void, ModifyGravityPlatformMovementSettings, (app::MeleeComboMoveHammerChargeable * this_ptr, app::GravityPlatformMovementSettings* settings))
    IL2CPP_REGISTER_METHOD(0x01392370, void, OnHammerHitGround, (app::MeleeComboMoveHammerChargeable * this_ptr, app::RaycastHit hit_info, float hit_speed, app::Ray ray, bool force))
    IL2CPP_REGISTER_METHOD(0x013928A0, void, OnHammerTopCollision, (app::MeleeComboMoveHammerChargeable * this_ptr, app::Collider* collider, app::Vector3 hit_direction, app::Vector3 damage_position))
    IL2CPP_REGISTER_METHOD(0x013928F0, void, OnHammerHandleCollision, (app::MeleeComboMoveHammerChargeable * this_ptr, app::Collider* collider, app::Vector3 hit_direction, app::Vector3 damage_position))
    IL2CPP_REGISTER_METHOD(0x01392940, void, OnMoveWindowOpen, (app::MeleeComboMoveHammerChargeable * this_ptr, app::MoveEventType__Enum event_type))
    IL2CPP_REGISTER_METHOD(0x013929A0, void, OnMoveWindowClosed, (app::MeleeComboMoveHammerChargeable * this_ptr, app::MoveEventType__Enum event_type))
    IL2CPP_REGISTER_METHOD(0x01392A00, void, OnAnimationEvent, (app::MeleeComboMoveHammerChargeable * this_ptr, app::SeinController3D_EventId__Enum event_id))
    IL2CPP_REGISTER_METHOD(0x01392BC0, void, SpawnEffects, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01392C90, app::GameObject*, GetEffectInstance, (app::MeleeComboMoveHammerChargeable * this_ptr, app::GameObject* current_shock_wave, bool track_as_suspendable))
    IL2CPP_REGISTER_METHOD(0x01392EB0, app::GameObject*, SpawnEffect_1, (app::MeleeComboMoveHammerChargeable * this_ptr, app::GameObject* current_shock_wave, app::Vector3 position, float angle, bool flip, bool track_as_suspendable))
    IL2CPP_REGISTER_METHOD(0x013932A0, void, SpawnEffect_2, (app::MeleeComboMoveHammerChargeable * this_ptr, app::GameObject* current_shock_wave, app::Vector3 position, app::Vector3 up_direction, bool flip, bool track_as_suspendable))
    IL2CPP_REGISTER_METHOD(0x013934C0, app::GameObject*, SpawnEffect_3, (app::MeleeComboMoveHammerChargeable * this_ptr, app::GameObject* current_shock_wave))
    IL2CPP_REGISTER_METHOD(0x01393690, void, OnAttackCycleStart, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01393830, void, ChangeState, (app::MeleeComboMoveHammerChargeable * this_ptr, app::MeleeComboMoveHammerChargeable_State__Enum new_state))
    IL2CPP_REGISTER_METHOD(0x01393A00, void, EnterInactiveState, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01393C60, void, EnterPrepareState, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdatePrepareState, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01393F90, bool, KeepPrepareAnimationPlaying, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01393FB0, void, OnPrepareAnimationEnd, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013940B0, void, EnterNormalAttackState, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateNormalAttackState, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01394530, bool, KeepNormalAttackAnimationPlaying, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01394550, void, OnNormalAttackAnimationEnd, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01394630, void, EnterChargedAttackState, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateChargedAttackState, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01394AD0, bool, KeepChargedAttackAnimationPlaying, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01394AF0, void, OnChargedAttackAnimationEnd, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01394D60, void, OnEnterGroundMiss, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0138CD40, void, OnGroundMissEnd, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01395070, void, EnterGroundHit, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0138CD40, void, EndChargeHitResolve, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01395490, bool, CanBeInterruptedBy, (app::MeleeComboMoveHammerChargeable * this_ptr, app::IComboMove* move))
    IL2CPP_REGISTER_METHOD(0x013954B0, void, EnterChargeHold, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01395800, void, ExitChargeHold, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateChargeHold, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01395910, void, ChargeHoldAnimationComplete, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01395960, bool, KeppPlayingHold, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01395970, void, BeginAttackSegment, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013959B0, void, EndAttackSegment, (app::MeleeComboMoveHammerChargeable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013959F0, app::Vector2, ComputeEffectiveKickback, (app::MeleeComboMoveHammerChargeable * this_ptr, app::Vector3 enemy_position))
    IL2CPP_REGISTER_METHOD(0x01395BE0, void, TryToDealDamage, (app::MeleeComboMoveHammerChargeable * this_ptr, app::Collider* collider, bool top_hit, app::Vector3 hit_direction, app::Vector3 damage_position))
    IL2CPP_REGISTER_METHOD(0x013965E0, app::EffectSpawn, DamageEffectProvider, (app::MeleeComboMoveHammerChargeable * this_ptr, app::DamageResult damage_result))
    IL2CPP_REGISTER_METHOD(0x013968E0, void, ctor, (app::MeleeComboMoveHammerChargeable * this_ptr))
} // namespace app::classes::MeleeComboMoveHammerChargeable
