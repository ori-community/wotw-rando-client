#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/MeleeWeaponHammer.h>
#include <Modloader/app/structs/SeinComboHandler.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/TrackingExclusions.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::MeleeWeaponHammer {
    IL2CPP_REGISTER_METHOD(0x009CD4A0, float, get_MoveDurationDept, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CD4B0, void, set_MoveDurationDept, app::MeleeWeaponHammer* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x009CD4C0, bool, get_IsDisolving, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006ECDC0, bool, get_DetectGroundCollision, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CD4D0, void, set_DetectGroundCollision, app::MeleeWeaponHammer* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsAutoEquippable, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CD4E0, bool, get_IsAllowed, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CD600, bool, get_IsAttackButtonUsed, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CD6D0, bool, get_IsAttackButtonDown, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CD830, bool, get_OnAttackButtonPressed, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CDA70, bool, get_OnAttackButtonReleased, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CDBD0, bool, get_CollisionDetectionEnabled, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CDC00, void, set_CollisionDetectionEnabled, app::MeleeWeaponHammer* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x009CDC30, void, OnEnable, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CDEA0, void, OnDisable, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CE130, void, OnDestroy, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CE230, void, Awake, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CE2F0, void, PlayVanishEffect, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CE4E0, void, PlayIdle, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CE760, void, Initialize, app::MeleeWeaponHammer* this_ptr, app::SeinComboHandler* handler)
    IL2CPP_REGISTER_METHOD(0x009CE950, void, OnBeginCombo, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CEB90, void, OnEndCombo, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CECC0, void, OnEquip, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CECD0, void, OnUnequip, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CECE0, void, PlayAttackRegistrationSound, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CEE80, void, Update, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CF130, void, ShowHammer, app::MeleeWeaponHammer* this_ptr, bool force_fade_in)
    IL2CPP_REGISTER_METHOD(0x009CF5B0, void, HideHammer, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x009CF7D0,
        void,
        OnWeaponCollision,
        app::MeleeWeaponHammer* this_ptr,
        app::Collider* collider,
        app::Vector3 check_center,
        app::Vector3 hit_direction,
        app::Vector3 damage_position
    )
    IL2CPP_REGISTER_METHOD(
        0x009CF980,
        void,
        OnGroundCollision,
        app::MeleeWeaponHammer* this_ptr,
        app::Vector3 hit_position,
        app::Vector3 hit_normal,
        app::Vector3 surface_normal,
        app::SurfaceMaterialType__Enum surface_type
    )
    IL2CPP_REGISTER_METHOD(0x009CFB70, void, UpdateHammer, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CFCD0, void, OnFixedUpdate, app::MeleeWeaponHammer* this_ptr, float delta)
    IL2CPP_REGISTER_METHOD(0x009CFDD0, bool, DetectHammerTipGroundCollision, app::MeleeWeaponHammer* this_ptr, bool force)
    IL2CPP_REGISTER_METHOD(0x009D0630, void, SetHammerAnimationSpeedMultiplier, app::MeleeWeaponHammer* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x009D06D0, void, DebugWeapon, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D0700, void, OnDrawGizmos, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D0AE0, bool, get_IsSuspended, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D0AF0, void, set_IsSuspended, app::MeleeWeaponHammer* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x009D0B00, app::SuspendableMask__Enum, get_Mask, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D0B10, void, set_Mask, app::MeleeWeaponHammer* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x009D0BD0, app::TrackingExclusions, get_TrackingExclusions, app::MeleeWeaponHammer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D0BE0, void, ctor, app::MeleeWeaponHammer* this_ptr)
} // namespace app::classes::MeleeWeaponHammer
