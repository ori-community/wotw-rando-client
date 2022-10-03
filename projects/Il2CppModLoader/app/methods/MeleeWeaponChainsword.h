#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MeleeWeaponChainsword {
    IL2CPP_REGISTER_METHOD(0x00720150, app::MoonAnimator*, get_LeftWeaponAnimator, (app::MeleeWeaponChainsword * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009C7170, bool, get_IsAllowed, (app::MeleeWeaponChainsword * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009C73A0, bool, get_IsAttackButtonUsed, (app::MeleeWeaponChainsword * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009C7470, bool, get_IsAttackButtonDown, (app::MeleeWeaponChainsword * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsAutoEquippable, (app::MeleeWeaponChainsword * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009C75D0, bool, get_OnAttackButtonPressed, (app::MeleeWeaponChainsword * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009C7730, bool, get_OnAttackButtonReleased, (app::MeleeWeaponChainsword * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009C7890, bool, get_CollisionDetectionEnabled, (app::MeleeWeaponChainsword * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009C78C0, void, set_CollisionDetectionEnabled, (app::MeleeWeaponChainsword * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x009C7970, void, InitializeColliderStartPosition, (app::MeleeWeaponChainsword * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009C79B0, void, Awake, (app::MeleeWeaponChainsword * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009C79F0, void, OnDestroy, (app::MeleeWeaponChainsword * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009C7B90, void, OnBeginCombo, (app::MeleeWeaponChainsword * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009C8070, void, OnEndCombo, (app::MeleeWeaponChainsword * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009C8540, void, OnWeaponCollision, (app::MeleeWeaponChainsword * this_ptr, app::Collider* collider, app::Vector3 handle_center, app::Vector3 hit_direction, app::Vector3 damage_position))
    IL2CPP_REGISTER_METHODINFO(0x0471C568, MeleeWeaponChainsword_OnWeaponCollision__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009C8690, void, OnGroundCollision, (app::MeleeWeaponChainsword * this_ptr, app::Vector3 hit_position, app::Vector3 hit_normal, app::Vector3 surface_normal, app::SurfaceMaterialType__Enum surface_type))
    IL2CPP_REGISTER_METHODINFO(0x0475C648, MeleeWeaponChainsword_OnGroundCollision__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009C8880, void, DebugWeapon, (app::MeleeWeaponChainsword * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009C88C0, void, SetAnimatorPosition, (app::MeleeWeaponChainsword * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009C8C50, app::Transform__Array*, GetAnimatorTransforms, (app::MeleeWeaponChainsword * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009C8DB0, void, Update, (app::MeleeWeaponChainsword * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009C8E70, void, ctor, (app::MeleeWeaponChainsword * this_ptr))
} // namespace app::classes::MeleeWeaponChainsword
