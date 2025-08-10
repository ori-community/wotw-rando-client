#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/ArrowHitData.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/LegacyAttackableSwitch.h>
#include <Modloader/app/structs/LegacyAttackableSwitch_AttackTypes__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::LegacyAttackableSwitch {
    IL2CPP_REGISTER_METHOD(0x015CD510, void, ToggleSwitch, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CD650, void, TurnOn, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CD730, void, TurnOff, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CD810, void, FixedUpdate, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CD8F0, bool, CanBeChargeFlamed, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CD8F0, bool, CanBeChargeDashed, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CD8F0, bool, CanBeGrenaded, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CD8F0, bool, CanBeStomped, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CD8F0, bool, CanBeSpiritFlamed, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CD8F0, bool, IsStompBouncable, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CD8F0, bool, CanBeLevelUpBlasted, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CD8F0, bool, CanBeSpiritSlashed, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CD8F0, bool, CanBeHeavySpiritSlashed, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CD8F0, bool, CanBeSpiritLeashed, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CD8F0, bool, CanBeHomingMissiled, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CD8F0, bool, CanBeTrapped, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CD8F0, bool, CanBeSpiritSpeared, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CD8F0, bool, CanBeHitByBow, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CD8F0, bool, CanBeHitByHammerHandle, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CD8F0, bool, CanBeHitByMelee, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CD8F0, bool, get_CanBeHit, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CD930, void, OnRecieveDamage, app::LegacyAttackableSwitch* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x015CDB80, bool, DoesReactTo, app::LegacyAttackableSwitch* this_ptr, app::DamageType__Enum damage_type)
    IL2CPP_REGISTER_METHOD(
        0x015CDE10,
        bool,
        Match,
        app::LegacyAttackableSwitch* this_ptr,
        app::LegacyAttackableSwitch_AttackTypes__Enum attack,
        app::DamageType__Enum damage_type
    )
    IL2CPP_REGISTER_METHOD(0x015CDF70, void, Awake, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CE240, bool, get_IsOnActivatePerforming, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CE320, void, OnDestroy, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_IsSuspended, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00800850, void, set_IsSuspended, app::LegacyAttackableSwitch* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0057A5A0, app::SuspendableMask__Enum, get_Mask, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CE3E0, void, set_Mask, app::LegacyAttackableSwitch* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_SpiritSlashPriority, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSpiritSlashHighlight, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSpiritSlashDehighlight, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, GetSpiritSlashDamageAmount, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_BashPriority, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterBash, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashHighlight, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashDehighlight, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FF8B0, int32_t, get_BowPriority, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_BowEnableAutoTarget, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_BowAutoTargetPosition, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldArrowBeReflected, app::LegacyAttackableSwitch* this_ptr, app::ArrowHitData hit_data)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_HammerPriority, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HammerEnableAutoTarget, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0108CEB0, bool, ShouldArrowExplode, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CE4A0, void, Serialize, app::LegacyAttackableSwitch* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x0108CEB0, bool, CanDetonateProjectiles, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0069FA30, bool, get_IsOn, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCA0, app::IDamageReciever__Array*, get_AffectedReceivers, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CE600, void, ctor, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, app::LegacyAttackableSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, app::LegacyAttackableSwitch* this_ptr)
} // namespace app::classes::LegacyAttackableSwitch
