#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GenericDamageTrigger.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::GenericDamageTrigger {
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00654890, bool, IsDead, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeStomped, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007E7A20, bool, CanBeHitByMelee, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007E7A20, bool, CanBeHitByHammerHandle, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHomingMissiled, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00998570, int32_t, get_HammerPriority, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E06D70, void, set_HammerPriority, app::GenericDamageTrigger* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_HammerEnableAutoTarget, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_HammerEnableAutoTarget, app::GenericDamageTrigger* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00E06D80, void, OnEnable, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E06E40, void, OnDisable, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E06F00, bool, AllowedTypeCheck, app::GenericDamageTrigger* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00E06F30, void, OnRecieveDamage, app::GenericDamageTrigger* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::List_1_UnityEngine_GameObject_*, get_AllTargets, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_AllTargets, app::GenericDamageTrigger* this_ptr, app::List_1_UnityEngine_GameObject_* value)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Apply, app::GenericDamageTrigger* this_ptr, app::UberStateApplyContext__Enum context)
    IL2CPP_REGISTER_METHOD(0x00E070B0, app::IUberState__Array*, get_AffectingUberStates, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E071E0, void, StopTransitions, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E072F0, void, Awake, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::IDamageReciever__Array*, get_AffectedReceivers, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E074E0, void, ctor, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, app::GenericDamageTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, app::GenericDamageTrigger* this_ptr)
} // namespace app::classes::GenericDamageTrigger
