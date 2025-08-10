#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/ComboInput.h>
#include <Modloader/app/structs/FireStick.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IComboMove.h>
#include <Modloader/app/structs/MeleeWeaponTorch.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::MeleeWeaponTorch {
    IL2CPP_REGISTER_METHOD(0x009D4720, app::FireStick*, get_Torch, app::MeleeWeaponTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsAutoEquippable, app::MeleeWeaponTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D47A0, bool, get_IsAttackButtonUsed, app::MeleeWeaponTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D4870, bool, get_IsAttackButtonDown, app::MeleeWeaponTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D49D0, bool, get_OnAttackButtonPressed, app::MeleeWeaponTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D4C10, bool, get_OnAttackButtonReleased, app::MeleeWeaponTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D4D70, bool, get_IsAllowed, app::MeleeWeaponTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009CDBD0, bool, get_CollisionDetectionEnabled, app::MeleeWeaponTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D4F00, void, set_CollisionDetectionEnabled, app::MeleeWeaponTorch* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x009D4F70, void, Awake, app::MeleeWeaponTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D51B0, void, OnDisable, app::MeleeWeaponTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D5210, void, Start, app::MeleeWeaponTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D5480, app::IComboMove*, GetComboMove, app::MeleeWeaponTorch* this_ptr, app::ComboInput* input)
    IL2CPP_REGISTER_METHOD(0x009D5590, void, OnEquip, app::MeleeWeaponTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D58B0, void, OnUnequip, app::MeleeWeaponTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D5A20, void, OnDestroy, app::MeleeWeaponTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D5D10, void, OnBeginCombo, app::MeleeWeaponTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D5E70, void, OnEndCombo, app::MeleeWeaponTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D5F60, void, Update, app::MeleeWeaponTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009D6310, void, LateUpdate, app::MeleeWeaponTorch* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x009D6420,
        void,
        OnWeaponCollision,
        app::MeleeWeaponTorch* this_ptr,
        app::Collider* collider,
        app::Vector3 check_center,
        app::Vector3 hit_direction,
        app::Vector3 damage_position
    )
    IL2CPP_REGISTER_METHOD(
        0x009D6660,
        void,
        OnGroundCollision,
        app::MeleeWeaponTorch* this_ptr,
        app::Vector3 hit_position,
        app::Vector3 hit_normal,
        app::Vector3 surface_normal,
        app::SurfaceMaterialType__Enum surface_type
    )
    IL2CPP_REGISTER_METHOD(0x009D6850, app::GameObject*, CreateTorch, app::Vector2 position)
    IL2CPP_REGISTER_METHOD(0x009D69C0, void, ctor, app::MeleeWeaponTorch* this_ptr)
} // namespace app::classes::MeleeWeaponTorch
