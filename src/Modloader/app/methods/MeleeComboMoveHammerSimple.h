#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/EffectSpawn.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HammerComboMoveBase_BalancingData.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/LimitedLifetime.h>
#include <Modloader/app/structs/MeleeComboMoveHammerSimple.h>
#include <Modloader/app/structs/MeleeComboMoveHammerSimple_States__Enum.h>
#include <Modloader/app/structs/MeleeWeapon.h>
#include <Modloader/app/structs/MoveEventType__Enum.h>
#include <Modloader/app/structs/Ray.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/SeinComboHandler.h>
#include <Modloader/app/structs/SeinController3D_EventId__Enum.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::MeleeComboMoveHammerSimple {
    IL2CPP_REGISTER_METHOD(0x01396CD0, app::HammerComboMoveBase_BalancingData*, get_BalancingBase, app::MeleeComboMoveHammerSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01396CE0, float, get_Damage, app::MeleeComboMoveHammerSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01396D40, void, Initialize, app::MeleeComboMoveHammerSimple* this_ptr, app::SeinComboHandler* handler, app::MeleeWeapon* weapon)
    IL2CPP_REGISTER_METHOD(0x01396F50, void, ApplySettings, app::MeleeComboMoveHammerSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01396CE0, float, get_EffectiveDamage, app::MeleeComboMoveHammerSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01397230, void, EnterMove, app::MeleeComboMoveHammerSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01397820, void, AllowGroundMissSkip, app::MeleeComboMoveHammerSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01397830, void, UpdateMove, app::MeleeComboMoveHammerSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01397880, void, InterruptMove, app::MeleeComboMoveHammerSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01397C30, void, ExitMove, app::MeleeComboMoveHammerSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01397FB0,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::MeleeComboMoveHammerSimple* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(
        0x013981C0,
        void,
        ModifyGravityPlatformMovementSettings,
        app::MeleeComboMoveHammerSimple* this_ptr,
        app::GravityPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(
        0x013983D0,
        void,
        OnGroundCollision,
        app::MeleeComboMoveHammerSimple* this_ptr,
        app::Vector2 hit_point,
        app::Vector2 hit_normal,
        app::Vector3 surface_normal,
        app::SurfaceMaterialType__Enum surface_type,
        bool force_effect,
        bool charged
    )
    IL2CPP_REGISTER_METHOD(
        0x01398920,
        void,
        OnHammerHitGround,
        app::MeleeComboMoveHammerSimple* this_ptr,
        app::RaycastHit hit_info,
        float hit_speed,
        app::Ray ray,
        bool force
    )
    IL2CPP_REGISTER_METHOD(0x01398AC0, void, OnAttackEnd, app::MeleeComboMoveHammerSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01398C40,
        void,
        OnHammerTopCollision,
        app::MeleeComboMoveHammerSimple* this_ptr,
        app::Collider* collider,
        app::Vector3 hit_direction,
        app::Vector3 damage_position
    )
    IL2CPP_REGISTER_METHOD(
        0x01398C90,
        void,
        OnHammerHandleCollision,
        app::MeleeComboMoveHammerSimple* this_ptr,
        app::Collider* collider,
        app::Vector3 hit_direction,
        app::Vector3 damage_position
    )
    IL2CPP_REGISTER_METHOD(0x01398CE0, void, OnMoveWindowOpen, app::MeleeComboMoveHammerSimple* this_ptr, app::MoveEventType__Enum event_type)
    IL2CPP_REGISTER_METHOD(0x01398D10, void, OnMoveWindowClosed, app::MeleeComboMoveHammerSimple* this_ptr, app::MoveEventType__Enum event_type)
    IL2CPP_REGISTER_METHOD(0x01389660, void, OnAnimationEvent, app::MeleeComboMoveHammerSimple* this_ptr, app::SeinController3D_EventId__Enum event_id)
    IL2CPP_REGISTER_METHOD(0x01398D40, void, SpawnEffects, app::MeleeComboMoveHammerSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01399450, void, CleanupEffectsHook, app::MeleeComboMoveHammerSimple* this_ptr, app::LimitedLifetime* lifetime_component)
    IL2CPP_REGISTER_METHOD(0x01399670, app::Vector2, ComputeEffectiveKickback, app::MeleeComboMoveHammerSimple* this_ptr, app::Vector3 enemy_position)
    IL2CPP_REGISTER_METHOD(
        0x01399830,
        void,
        TryToDealDamage,
        app::MeleeComboMoveHammerSimple* this_ptr,
        app::Collider* collider,
        bool top_hit,
        app::Vector3 hit_direction,
        app::Vector3 damage_position
    )
    IL2CPP_REGISTER_METHOD(0x0139A160, app::EffectSpawn, DamageEffectProvider, app::MeleeComboMoveHammerSimple* this_ptr, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(0x0139A460, app::IEnumerator*, HitStop, app::MeleeComboMoveHammerSimple* this_ptr, app::GameObject* to_suspend, float suspend_time)
    IL2CPP_REGISTER_METHOD(0x0139A5D0, void, BeginAttackSegment, app::MeleeComboMoveHammerSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139A7D0, void, EndAttackSegment, app::MeleeComboMoveHammerSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139A8B0, bool, IsActive, app::MeleeComboMoveHammerSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139A8C0, void, UpdateBlend, app::MeleeComboMoveHammerSimple* this_ptr, float desired_value)
    IL2CPP_REGISTER_METHOD(0x0139AAF0, void, UpdateState, app::MeleeComboMoveHammerSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139AB40, void, ChangeState, app::MeleeComboMoveHammerSimple* this_ptr, app::MeleeComboMoveHammerSimple_States__Enum state)
    IL2CPP_REGISTER_METHOD(0x0139AB80, void, OnEnterAttackPreparation, app::MeleeComboMoveHammerSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, AttackPreparationUpdate, app::MeleeComboMoveHammerSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139AF30, void, AttackPreparationEnd, app::MeleeComboMoveHammerSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139AF50, void, OnEnterAttack, app::MeleeComboMoveHammerSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, AttackUpdate, app::MeleeComboMoveHammerSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139B290, void, OnEnterGroundHitResolve, app::MeleeComboMoveHammerSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, GroundHitResolveUpdate, app::MeleeComboMoveHammerSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139B610, void, OnGroundHitResolveEnd, app::MeleeComboMoveHammerSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139B650, void, OnEnterGroundMiss, app::MeleeComboMoveHammerSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139B950, void, GroundMissUpdate, app::MeleeComboMoveHammerSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138CD40, void, OnGroundMissEnd, app::MeleeComboMoveHammerSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139BC90, void, ctor, app::MeleeComboMoveHammerSimple* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0139BDD0, void, _TryToDealDamage_b__74_0, app::MeleeComboMoveHammerSimple* this_ptr, app::DamageResult damage_result)
} // namespace app::classes::MeleeComboMoveHammerSimple
