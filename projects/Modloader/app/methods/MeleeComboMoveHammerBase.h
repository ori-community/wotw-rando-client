#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/MeleeComboMoveHammerBase.h>
#include <Modloader/app/structs/MeleeWeapon.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SeinComboHandler.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::MeleeComboMoveHammerBase {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, app::MeleeComboMoveHammerBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138F9E0, float, get_BlastDamage, app::MeleeComboMoveHammerBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138FA50, app::Vector2, get_EffectiveRootMotionMultiplier, app::MeleeComboMoveHammerBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138FB60, void, EnterMove, app::MeleeComboMoveHammerBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C11E0, bool, CanExecute, app::MeleeComboMoveHammerBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_NormalizedAttackTime, app::MeleeComboMoveHammerBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138FB80, app::String*, get_AnimationSpeedMultiplierParameterName, app::MeleeComboMoveHammerBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC7710, app::AbilityType__Enum, get_ComboAbilityType, app::MeleeComboMoveHammerBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D2CDF0, bool, get_DetectGroundCollision, app::MeleeComboMoveHammerBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138FC00, bool, get_MoveHasFinished, app::MeleeComboMoveHammerBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0138FC10, void, Initialize, app::MeleeComboMoveHammerBase* this_ptr, app::SeinComboHandler* handler, app::MeleeWeapon* weapon)
    IL2CPP_REGISTER_METHOD(0x0138FE70, void, OnDestroyMove, app::MeleeComboMoveHammerBase* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01390050,
        void,
        OnCollision,
        app::MeleeComboMoveHammerBase* this_ptr,
        app::Collider* collider,
        app::Vector3 hit_direction,
        app::Vector3 damage_position
    )
    IL2CPP_REGISTER_METHOD(0x01390120, void, UpdateCollisionDetection, app::MeleeComboMoveHammerBase* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01390160, void, ApplyOnHitReactions, app::MeleeComboMoveHammerBase* this_ptr, app::IAttackable* attackable)
    IL2CPP_REGISTER_METHOD(0x01390540, bool, CanDealDamage, app::MeleeComboMoveHammerBase* this_ptr, app::IAttackable* attackable)
    IL2CPP_REGISTER_METHOD(0x01390830, void, StopTimeline, app::MeleeComboMoveHammerBase* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x013908F0, void, InterruptMove, app::MeleeComboMoveHammerBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01390940, void, OnBlastStartEvent, app::MeleeComboMoveHammerBase* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01390A50,
        void,
        DoBlastRadius,
        app::MeleeComboMoveHammerBase* this_ptr,
        app::Vector3 origin,
        float blast_radius,
        float blast_damage,
        float kickback_strength,
        app::DamageWeight__Enum weight
    )
    IL2CPP_REGISTER_METHOD(0x01391240, bool, CanApplyBlastToAttackable, app::MeleeComboMoveHammerBase* this_ptr, app::IAttackable* attackable)
    IL2CPP_REGISTER_METHOD(0x01391360, void, ctor, app::MeleeComboMoveHammerBase* this_ptr)
} // namespace app::classes::MeleeComboMoveHammerBase
