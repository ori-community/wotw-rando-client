#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MeleeWeaponSwordstaff.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>

namespace app::classes::MeleeWeaponSwordstaff {
    IL2CPP_REGISTER_METHOD(0x009D2BA0, bool, get_IsAllowed, (app::MeleeWeaponSwordstaff * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009D2DD0, bool, get_IsAttackButtonUsed, (app::MeleeWeaponSwordstaff * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009D2EA0, bool, get_IsAttackButtonDown, (app::MeleeWeaponSwordstaff * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsAutoEquippable, (app::MeleeWeaponSwordstaff * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009D3000, bool, get_OnAttackButtonPressed, (app::MeleeWeaponSwordstaff * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009D3160, bool, get_OnAttackButtonReleased, (app::MeleeWeaponSwordstaff * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009D32C0, bool, get_CollisionDetectionEnabled, (app::MeleeWeaponSwordstaff * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009D32F0, void, set_CollisionDetectionEnabled, (app::MeleeWeaponSwordstaff * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x009D3360, void, OnDestroy, (app::MeleeWeaponSwordstaff * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009D3430, void, Awake, (app::MeleeWeaponSwordstaff * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009D3540, void, Start, (app::MeleeWeaponSwordstaff * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009D3630, void, OnBeginCombo, (app::MeleeWeaponSwordstaff * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009D3930, void, OnEndCombo, (app::MeleeWeaponSwordstaff * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009D3C50, bool, CanDeactivateRoot, (app::MeleeWeaponSwordstaff * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LateUpdate, (app::MeleeWeaponSwordstaff * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009D3CB0, void, OnWeaponCollision, (app::MeleeWeaponSwordstaff * this_ptr, app::Collider* collider, app::Vector3 handle_center, app::Vector3 hit_direction, app::Vector3 damage_position))
    IL2CPP_REGISTER_METHODINFO(0x04700A18, MeleeWeaponSwordstaff_OnWeaponCollision__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009D3E00, void, OnGroundCollision, (app::MeleeWeaponSwordstaff * this_ptr, app::Vector3 hit_position, app::Vector3 hit_normal, app::Vector3 surface_normal, app::SurfaceMaterialType__Enum surface_type))
    IL2CPP_REGISTER_METHODINFO(0x04714120, MeleeWeaponSwordstaff_OnGroundCollision__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009D3FF0, void, ShowSwordstaff, (app::MeleeWeaponSwordstaff * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009D44D0, void, HideSword, (app::MeleeWeaponSwordstaff * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009D4520, void, OnUnequip, (app::MeleeWeaponSwordstaff * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009D4600, void, DebugWeapon, (app::MeleeWeaponSwordstaff * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009D4630, void, ctor, (app::MeleeWeaponSwordstaff * this_ptr))
} // namespace app::classes::MeleeWeaponSwordstaff
