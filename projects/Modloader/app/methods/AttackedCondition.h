#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrowHitData.h>
#include <Modloader/app/structs/AttackableSwitch_AttackTypes__Enum.h>
#include <Modloader/app/structs/AttackedCondition.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::AttackedCondition {
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsSuspended, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsSuspended, app::AttackedCondition* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FC830, app::SuspendableMask__Enum, get_Mask, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00856340, void, set_Mask, app::AttackedCondition* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_SpiritSlashPriority, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_BashPriority, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_BowPriority, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_BowEnableAutoTarget, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_BowAutoTargetPosition, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_HammerPriority, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_HammerEnableAutoTarget, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008563F0, bool, DoesReactTo, app::AttackedCondition* this_ptr, app::DamageType__Enum damage_type)
    IL2CPP_REGISTER_METHOD(
        0x00856690,
        bool,
        Match,
        app::AttackedCondition* this_ptr,
        app::AttackableSwitch_AttackTypes__Enum attack,
        app::DamageType__Enum damage_type
    )
    IL2CPP_REGISTER_METHOD(0x00856800, void, Awake, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00856A40, void, OnDestroy, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C15C0, void, LateUpdate, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00446590, bool, Validate, app::AttackedCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeChargeFlamed, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeChargeDashed, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeGrenaded, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeStomped, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeBashed, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeSpiritFlamed, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsStompBouncable, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeLevelUpBlasted, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeSpiritSlashed, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByBow, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByMelee, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByHammerHandle, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHeavySpiritSlashed, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeSpiritLeashed, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHomingMissiled, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeTrapped, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeSpiritSpeared, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeTeleportedByBeacon, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeGlowed, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00856B00, void, OnRecieveDamage, app::AttackedCondition* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSpiritSlashHighlight, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSpiritSlashDehighlight, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetSpiritSlashDamageAmount, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterBash, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashHighlight, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashDehighlight, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldArrowExplode, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldArrowBeReflected, app::AttackedCondition* this_ptr, app::ArrowHitData hit_data)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanDetonateProjectiles, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::IDamageReciever__Array*, get_AffectedReceivers, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00856B30, void, ctor, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, app::AttackedCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, app::AttackedCondition* this_ptr)
} // namespace app::classes::AttackedCondition
