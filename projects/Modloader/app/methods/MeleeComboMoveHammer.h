#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/EffectSpawn.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HammerComboMoveBase_BalancingData.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/MeleeComboMoveHammer.h>
#include <Modloader/app/structs/MeleeComboMoveHammer_State__Enum.h>
#include <Modloader/app/structs/MeleeWeapon.h>
#include <Modloader/app/structs/MoveEventType__Enum.h>
#include <Modloader/app/structs/Ray.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/SeinComboHandler.h>
#include <Modloader/app/structs/SeinController3D_EventId__Enum.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::MeleeComboMoveHammer {
    IL2CPP_REGISTER_METHOD(0x00BC6E90, app::HammerComboMoveBase_BalancingData*, get_BalancingBase, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138B280, float, get_QuickAttackDamage, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138B2E0, float, get_ChargedAttackDamage, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006965C0, app::MeleeComboMoveHammer_State__Enum, get_CurrentState, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138B340, app::SoundProvider*, get_EffectiveHitSound, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138B360, app::SoundProvider*, get_EffectiveAttackSound, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138B380, float, get_EffectiveDamage, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138B420, app::DamageWeight__Enum, get_EffectDamageWeight, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138B440, float, get_EffectiveScaleMultiplier, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138B460, float, get_EffectiveKickbackStrength, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138B480, app::GameObject*, get_EffectiveGroundHitEffect, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138B4A0, app::SoundProvider*, get_EffectiveGroundHitSound, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138B4C0, void, Initialize, app::MeleeComboMoveHammer* this_ptr, app::SeinComboHandler* handler, app::MeleeWeapon* weapon)
    IL2CPP_REGISTER_METHOD(0x0138B710, void, EnterMove, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138BC20, void, UpdateMove, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138BDE0, void, InterruptMove, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138C020, void, ExitMove, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0138C050,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::MeleeComboMoveHammer* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(
        0x0138C0E0,
        void,
        ModifyGravityPlatformMovementSettings,
        app::MeleeComboMoveHammer* this_ptr,
        app::GravityPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(
        0x0138C110,
        void,
        OnGroundCollision,
        app::MeleeComboMoveHammer* this_ptr,
        app::Vector2 hit_point,
        app::Vector2 hit_normal,
        app::Vector3 surface_normal,
        app::SurfaceMaterialType__Enum surface_type,
        bool force_effect,
        bool charged
    )
    IL2CPP_REGISTER_METHOD(
        0x0138C680,
        void,
        OnHammerHitGround,
        app::MeleeComboMoveHammer* this_ptr,
        app::RaycastHit hit_info,
        float hit_speed,
        app::Ray ray,
        bool force
    )
    IL2CPP_REGISTER_METHOD(0x0138C820, void, ChangeState, app::MeleeComboMoveHammer* this_ptr, app::MeleeComboMoveHammer_State__Enum new_state)
    IL2CPP_REGISTER_METHOD(0x0138CA00, void, EnterGroundHit, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138CD40, void, OnGroundHitEnd, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138CD50, void, EnterGroundMiss, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, GroundMissUpdate, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138CD40, void, OnGroundMissEnd, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138D050, void, EnterPrepareState, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138D090, bool, KeepPlayingPrepareAnimation, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138D0A0, bool, get_CanCharge, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138D190, void, UpdatePrepareState, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138D050, void, OnPrepareAnimEnd, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138D240, void, EnterChargeState, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138D360, bool, KeepPlayingChargeAnimation, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138D370, void, UpdateChargeState, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138D420, void, OnChargeAnimEnd, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138D440, void, EnterAttackState, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateAttackState, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138D780, void, OnAttackAnimEnd, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138D8C0, void, ExitAttackState, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138CD40, void, EndAttack, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138D8D0, app::Vector2, ComputeEffectiveKickback, app::MeleeComboMoveHammer* this_ptr, app::Vector3 enemy_position)
    IL2CPP_REGISTER_METHOD(
        0x0138DAB0,
        void,
        OnHammerHeadDamageTriggerEnter,
        app::MeleeComboMoveHammer* this_ptr,
        app::Collider* collider,
        bool top_hit,
        app::Vector3 hit_direction,
        app::Vector3 damage_position
    )
    IL2CPP_REGISTER_METHOD(0x0138E5C0, app::EffectSpawn, DamageEffectProvider, app::MeleeComboMoveHammer* this_ptr, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(0x0138E8C0, bool, KeepAttackAnimationPlaying, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138E8D0, app::IEnumerator*, HitStop, app::MeleeComboMoveHammer* this_ptr, app::GameObject* to_suspend, float suspend_time)
    IL2CPP_REGISTER_METHOD(
        0x0138EA40,
        void,
        OnHammerTopCollision,
        app::MeleeComboMoveHammer* this_ptr,
        app::Collider* collider,
        app::Vector3 hit_direction,
        app::Vector3 damage_position
    )
    IL2CPP_REGISTER_METHOD(
        0x0138EA90,
        void,
        OnHammerHandleCollision,
        app::MeleeComboMoveHammer* this_ptr,
        app::Collider* collider,
        app::Vector3 hit_direction,
        app::Vector3 damage_position
    )
    IL2CPP_REGISTER_METHOD(0x0138EAE0, void, OnMoveWindowOpen, app::MeleeComboMoveHammer* this_ptr, app::MoveEventType__Enum event_type)
    IL2CPP_REGISTER_METHOD(0x0138EB10, void, OnMoveWindowClosed, app::MeleeComboMoveHammer* this_ptr, app::MoveEventType__Enum event_type)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationEvent, app::MeleeComboMoveHammer* this_ptr, app::SeinController3D_EventId__Enum event_id)
    IL2CPP_REGISTER_METHOD(0x0138EB40, void, SpawnEffects, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138EF90, void, BeginAttackSegment, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138F230, void, EndAttackSegment, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138F330, void, ctor, app::MeleeComboMoveHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138F450, void, _OnHammerHeadDamageTriggerEnter_b__91_0, app::MeleeComboMoveHammer* this_ptr, app::DamageResult damage_result)
} // namespace app::classes::MeleeComboMoveHammer
