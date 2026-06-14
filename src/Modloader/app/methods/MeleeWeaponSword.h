#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/MeleeWeaponSword.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#include <Modloader/app/structs/TrackingExclusions.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::MeleeWeaponSword {
    IL2CPP_REGISTER_METHOD(0x009D0E80, bool, get_IsAllowed, app::MeleeWeaponSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D0FA0, bool, get_IsAttackButtonUsed, app::MeleeWeaponSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D1070, bool, get_IsAttackButtonDown, app::MeleeWeaponSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsAutoEquippable, app::MeleeWeaponSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D11D0, bool, get_OnAttackButtonPressed, app::MeleeWeaponSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D1410, bool, get_OnAttackButtonReleased, app::MeleeWeaponSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D1570, bool, get_CollisionDetectionEnabled, app::MeleeWeaponSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D15A0, void, set_CollisionDetectionEnabled, app::MeleeWeaponSword* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x009D15D0, void, OnDisable, app::MeleeWeaponSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D1600, void, OnDestroy, app::MeleeWeaponSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D1650, void, Awake, app::MeleeWeaponSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D1760, void, Start, app::MeleeWeaponSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D1850, void, OnBeginCombo, app::MeleeWeaponSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D1C40, void, OnEndCombo, app::MeleeWeaponSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D1F30, bool, CanDeactivateRoot, app::MeleeWeaponSword* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x009D1F80,
        void,
        OnWeaponCollision,
        app::MeleeWeaponSword* this_ptr,
        app::Collider* collider,
        app::Vector3 handle_center,
        app::Vector3 hit_direction,
        app::Vector3 damage_position
    )
    IL2CPP_REGISTER_METHOD(
        0x009D20D0,
        void,
        OnGroundCollision,
        app::MeleeWeaponSword* this_ptr,
        app::Vector3 hit_position,
        app::Vector3 hit_normal,
        app::Vector3 surface_normal,
        app::SurfaceMaterialType__Enum surface_type
    )
    IL2CPP_REGISTER_METHOD(0x009D2310, void, ShowSword, app::MeleeWeaponSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D2870, void, HideSword, app::MeleeWeaponSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C64E0, void, OnUnequip, app::MeleeWeaponSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D2A50, void, DebugWeapon, app::MeleeWeaponSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D2A80, app::TrackingExclusions, get_TrackingExclusions, app::MeleeWeaponSword* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D2A90, void, ctor, app::MeleeWeaponSword* this_ptr)
} // namespace app::classes::MeleeWeaponSword
