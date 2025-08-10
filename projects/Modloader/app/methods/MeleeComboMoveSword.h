#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/EffectSpawn.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/MeleeComboMoveSword.h>
#include <Modloader/app/structs/MeleeWeapon.h>
#include <Modloader/app/structs/MeleeWeaponSword.h>
#include <Modloader/app/structs/MoveEventType__Enum.h>
#include <Modloader/app/structs/SeinComboHandler.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::MeleeComboMoveSword {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, app::MeleeComboMoveSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013A1220, float, get_EffectiveDamage, app::MeleeComboMoveSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013A1280, app::String*, get_AnimationSpeedMultiplierParameterName, app::MeleeComboMoveSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013A1300, app::Vector2, get_EffectiveRootMotionMultiplier, app::MeleeComboMoveSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013A1410, float, get_EffectiveKnockbackAddY, app::MeleeComboMoveSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C1070, app::CharacterPlatformMovement*, get_PlatformMovement, app::MeleeComboMoveSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A67A0, app::MeleeWeaponSword*, get_Sword, app::MeleeComboMoveSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013A1420, void, Initialize, app::MeleeComboMoveSword* this_ptr, app::SeinComboHandler* handler, app::MeleeWeapon* weapon)
    IL2CPP_REGISTER_METHOD(0x013A1950, bool, CanExecute, app::MeleeComboMoveSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013A1A90, bool, get_MoveHasFinished, app::MeleeComboMoveSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC8D40, app::AbilityType__Enum, get_ComboAbilityType, app::MeleeComboMoveSword* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x013A1AA0,
        void,
        ModifyGravityPlatformMovementSettings,
        app::MeleeComboMoveSword* this_ptr,
        app::GravityPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(
        0x013A1AD0,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::MeleeComboMoveSword* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x013A1B20, void, OnMoveWindowOpen, app::MeleeComboMoveSword* this_ptr, app::MoveEventType__Enum event_type)
    IL2CPP_REGISTER_METHOD(0x013A1C30, void, OnMoveWindowClosed, app::MeleeComboMoveSword* this_ptr, app::MoveEventType__Enum event_type)
    IL2CPP_REGISTER_METHOD(0x013A1C60, bool, HitGroundSinceLastUse, app::MeleeComboMoveSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013A1D60, void, Boost, app::MeleeComboMoveSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013A22E0, void, SpawnEffects, app::MeleeComboMoveSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013A2830, void, ApplySettings, app::MeleeComboMoveSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013A2B10, void, EnterMove, app::MeleeComboMoveSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013A32E0, void, UpdateMove, app::MeleeComboMoveSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013A3870, void, ExitMove, app::MeleeComboMoveSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013A3AC0, void, InterruptMove, app::MeleeComboMoveSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013A3CE0, void, OnAnimationFinished, app::MeleeComboMoveSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013A3CF0, bool, KeepAnimationPlaying, app::MeleeComboMoveSword* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x013A3D00,
        void,
        OnCollision,
        app::MeleeComboMoveSword* this_ptr,
        app::Collider* collider,
        app::Vector3 hit_direction,
        app::Vector3 damage_position
    )
    IL2CPP_REGISTER_METHOD(0x013A3D50, app::Vector2, ComputeEffectiveKickback, app::MeleeComboMoveSword* this_ptr, app::Vector3 enemy_position)
    IL2CPP_REGISTER_METHOD(0x013A3F10, bool, CanDealDamage, app::MeleeComboMoveSword* this_ptr, app::IAttackable* attackable)
    IL2CPP_REGISTER_METHOD(
        0x013A4370,
        void,
        TryToDealDamage,
        app::MeleeComboMoveSword* this_ptr,
        app::Collider* collider,
        app::Vector3 hit_direction,
        app::Vector3 damage_position
    )
    IL2CPP_REGISTER_METHOD(0x013A4E60, app::EffectSpawn, DamageEffectProvider, app::MeleeComboMoveSword* this_ptr, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(0x013A50F0, app::IEnumerator*, DummyHitStop, app::MeleeComboMoveSword* this_ptr, app::GameObject* to_suspend, float suspend_time)
    IL2CPP_REGISTER_METHOD(0x013A5260, void, BeginAttackSegment, app::MeleeComboMoveSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013A5340, void, EndAttackSegment, app::MeleeComboMoveSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013A5430, void, ctor, app::MeleeComboMoveSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013A55B0, void, _TryToDealDamage_b__100_0, app::MeleeComboMoveSword* this_ptr, app::DamageResult damage_result)
} // namespace app::classes::MeleeComboMoveSword
