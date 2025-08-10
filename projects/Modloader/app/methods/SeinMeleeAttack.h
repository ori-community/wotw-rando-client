#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/ComboMoveType__Enum.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/MeleeComboMove.h>
#include <Modloader/app/structs/MeleeWeapon.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/SeinController3D_EventId__Enum.h>
#include <Modloader/app/structs/SeinMeleeAttack.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SeinMeleeAttack {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, app::SeinMeleeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A6DE0, bool, get_IsAttacking, app::SeinMeleeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::CharacterPlatformMovement*, get_SeinPlatformMovement, app::SeinMeleeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A6E90, bool, get_SpriteMirrorLock, app::SeinMeleeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A6EA0, void, set_SpriteMirrorLock, app::SeinMeleeAttack* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x008A6F60, app::Transform*, get_WeaponJoint, app::SeinMeleeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00660430, app::Transform*, get_RootJoint, app::SeinMeleeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD40, app::Animator*, get_Animator, app::SeinMeleeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A63A0, app::MeleeWeapon*, get_CurrentWeapon, app::SeinMeleeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065FBA0, app::MeleeComboMove*, get_CurrentComboMove, app::SeinMeleeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugPrint, app::String* format, app::Object__Array* args)
    IL2CPP_REGISTER_METHOD(0x008A7010, void, OnSetReferenceToSein, app::SeinMeleeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A7350, void, OnDestroy, app::SeinMeleeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A7EF0, void, Start, app::SeinMeleeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A8870, void, Update, app::SeinMeleeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A8980, void, FixedUpdate, app::SeinMeleeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A8AD0, void, ShakeCamera, app::SeinMeleeAttack* this_ptr, float strength)
    IL2CPP_REGISTER_METHOD(0x008A8B40, void, Equip, app::SeinMeleeAttack* this_ptr, app::MeleeWeapon* weapon)
    IL2CPP_REGISTER_METHOD(0x008A8C40, void, Unequip, app::SeinMeleeAttack* this_ptr, bool instant)
    IL2CPP_REGISTER_METHOD(0x008A8CC0, void, OnExit, app::SeinMeleeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A8DA0, bool, get_IsStatePerforming, app::SeinMeleeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A8E50, bool, CanBeInterrupted, app::SeinMeleeAttack* this_ptr, app::ComboMoveType__Enum move_type)
    IL2CPP_REGISTER_METHOD(0x008A8F00, void, Interrupt, app::SeinMeleeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateCharacterState, app::SeinMeleeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A8FE0, void, UpdateMeleeAttack, app::SeinMeleeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A9810, void, PerformComboMove, app::SeinMeleeAttack* this_ptr, app::MeleeComboMove* move)
    IL2CPP_REGISTER_METHOD(
        0x008A9C70,
        void,
        ModifyGravityPlatformMovementSettings,
        app::SeinMeleeAttack* this_ptr,
        app::GravityPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(
        0x008A9D50,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::SeinMeleeAttack* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x008A9E30, void, OnAnimationEvent, app::SeinMeleeAttack* this_ptr, app::SeinController3D_EventId__Enum event_id)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LateUpdate, app::SeinMeleeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A9F10, void, BeginCombo, app::SeinMeleeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008AA2C0, void, EndCombo, app::SeinMeleeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008AA700, void, OnOriTakeDamage, app::SeinMeleeAttack* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x008AA850, void, OnDamageResultReceived, app::SeinMeleeAttack* this_ptr, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(0x008AB010, float, GetCooldown, app::SeinMeleeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008AB110, void, UpdateTargetting, app::SeinMeleeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008AB250, void, UpdateTargetHighlight, app::SeinMeleeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008AB4E0, void, UpdateClosestAttackables, app::SeinMeleeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008AB8D0, bool, IsMoveOnCooldown, app::SeinMeleeAttack* this_ptr, app::MeleeComboMove* combo_move)
    IL2CPP_REGISTER_METHOD(0x008ABA20, void, UpdateCooldownRules, app::SeinMeleeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008ABDC0, void, OnLand, app::SeinMeleeAttack* this_ptr, app::Vector3 normal, app::Collider* col)
    IL2CPP_REGISTER_METHOD(0x008ABEC0, void, OnProcessRootMotion, app::SeinMeleeAttack* this_ptr, app::Vector3 motion)
    IL2CPP_REGISTER_METHOD(0x008AC760, void, ctor, app::SeinMeleeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008ACA90, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x008ACB20, bool, _OnDamageResultReceived_b__68_0, app::SeinMeleeAttack* this_ptr)
} // namespace app::classes::SeinMeleeAttack
