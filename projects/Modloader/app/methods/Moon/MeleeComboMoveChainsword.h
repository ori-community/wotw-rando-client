#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/MeleeComboMoveChainsword.h>
#include <Modloader/app/structs/MeleeWeapon.h>
#include <Modloader/app/structs/MoveEventType__Enum.h>
#include <Modloader/app/structs/SeinComboHandler.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::MeleeComboMoveChainsword {
    IL2CPP_REGISTER_METHOD(0x01116570, float, get_EffectiveDamage, app::MeleeComboMoveChainsword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01116580, app::String*, get_AnimationSpeedMultiplierParameterName, app::MeleeComboMoveChainsword* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01116600,
        void,
        OnCollision,
        app::MeleeComboMoveChainsword* this_ptr,
        app::Collider* collider,
        app::Vector3 hit_direction,
        app::Vector3 damage_position
    )
    IL2CPP_REGISTER_METHOD(0x01116600, void, TryToDealDamage, app::MeleeComboMoveChainsword* this_ptr, app::Collider* collider, app::Vector3 hit_direction)
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        OnGroundCollision,
        app::MeleeComboMoveChainsword* this_ptr,
        app::Vector2 hit_point,
        app::Vector2 hit_normal,
        app::Vector3 surface_normal,
        app::SurfaceMaterialType__Enum surface_type,
        bool force_effect,
        bool charged
    )
    IL2CPP_REGISTER_METHOD(0x01116700, app::AbilityType__Enum, get_ComboAbilityType, app::MeleeComboMoveChainsword* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        ModifyGravityPlatformMovementSettings,
        app::MeleeComboMoveChainsword* this_ptr,
        app::GravityPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::MeleeComboMoveChainsword* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x01116710, void, Initialize, app::MeleeComboMoveChainsword* this_ptr, app::SeinComboHandler* handler, app::MeleeWeapon* weapon)
    IL2CPP_REGISTER_METHOD(0x01116810, void, EnterMove, app::MeleeComboMoveChainsword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01116A30, void, ExitMove, app::MeleeComboMoveChainsword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01116B20, bool, get_MoveHasFinished, app::MeleeComboMoveChainsword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01116B30, void, OnAnimationFinished, app::MeleeComboMoveChainsword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01116B40, void, BeginAttackSegment, app::MeleeComboMoveChainsword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01116C10, void, EndAttackSegment, app::MeleeComboMoveChainsword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01116CF0, void, OnMoveWindowOpen, app::MeleeComboMoveChainsword* this_ptr, app::MoveEventType__Enum event_type)
    IL2CPP_REGISTER_METHOD(0x01116DD0, void, OnMoveWindowClosed, app::MeleeComboMoveChainsword* this_ptr, app::MoveEventType__Enum event_type)
    IL2CPP_REGISTER_METHOD(0x01116E00, void, ctor, app::MeleeComboMoveChainsword* this_ptr)
} // namespace app::classes::Moon::MeleeComboMoveChainsword
