#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StickyMine.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/StickyMine_State__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::StickyMine {
    IL2CPP_REGISTER_METHOD(0x006513C0, bool, get_IsLockOnTargetValid, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006514B0, bool, IsDead, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FD650, bool, CanBeBashed, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHomingMissiled, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeSpiritSpeared, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByBow, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByHammerHandle, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByMelee, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterBash, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashHighlight, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashDehighlight, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00651560, int32_t, get_BashPriority, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00651570, void, OnRecieveDamage, (app::StickyMine * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x003FFD00, bool, get_IsSuspended, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFD10, void, set_IsSuspended, (app::StickyMine * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x006515B0, app::SuspendableMask__Enum, get_Mask, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006515C0, void, set_Mask, (app::StickyMine * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FBD10, void, SetLockOnTarget, (app::StickyMine * this_ptr, app::IAttackable* target))
    IL2CPP_REGISTER_METHOD(0x00651680, void, EnterState, (app::StickyMine * this_ptr, app::StickyMine_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00651AA0, void, Awake, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00651F80, void, Start, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00651F90, void, OnDestroy, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006522C0, bool, ShouldDealDamage, (app::StickyMine * this_ptr, app::GameObject* target))
    IL2CPP_REGISTER_METHOD(0x006523E0, void, OnDamageDealt, (app::StickyMine * this_ptr, app::DamageDealer* dealer, app::DamageResult result))
    IL2CPP_REGISTER_METHOD(0x006524E0, void, Invalidate, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006524F0, void, Explode, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00652760, void, SetTrajectory, (app::StickyMine * this_ptr, app::Vector2 speed))
    IL2CPP_REGISTER_METHOD(0x00652890, void, UpdateHomingLogic, (app::StickyMine * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00652FE0, void, Signal, (app::StickyMine * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x00653180, void, FixedUpdate, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00653810, void, OnSpring, (app::StickyMine * this_ptr, float height, app::Vector2 direction))
    IL2CPP_REGISTER_METHOD(0x002FBD40, app::IDamageReciever__Array*, get_AffectedReceivers, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00653970, void, ctor, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, (app::StickyMine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, (app::StickyMine * this_ptr))
} // namespace app::classes::StickyMine
