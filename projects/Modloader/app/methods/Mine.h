#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/Mine.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Mine {
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01443EA0, bool, IsDead, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeBashed, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHomingMissiled, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByMelee, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByHammerHandle, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01443F90, void, OnEnable, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014441B0, void, OnDisable, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014442C0, void, Awake, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014444C0, void, SetAngle, app::Mine* this_ptr, float angle)
    IL2CPP_REGISTER_METHOD(0x01444690, void, OnDestroy, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01444750, void, FixedUpdate, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01444AE0, void, OnTriggerEnter, app::Mine* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x00778590, void, OnCollisionEnter, app::Mine* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x01444B90, void, Explode, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01444E30, void, DetonateNearbyMines, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014450A0, void, Detonate, app::Mine* this_ptr, float delay)
    IL2CPP_REGISTER_METHOD(0x014450C0, void, HandleBlinking, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_IsSuspended, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061E2E0, void, set_IsSuspended, app::Mine* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x007007F0, app::SuspendableMask__Enum, get_Mask, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01445300, void, set_Mask, app::Mine* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_BashPriority, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterBash, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashHighlight, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashDehighlight, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRecieveDamage, app::Mine* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x002FBC80, app::IDamageReciever__Array*, get_AffectedReceivers, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014453C0, void, ctor, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01445410, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, app::Mine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, app::Mine* this_ptr)
} // namespace app::classes::Mine
