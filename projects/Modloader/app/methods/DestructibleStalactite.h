#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DestructibleStalactite.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::DestructibleStalactite {
    IL2CPP_REGISTER_METHOD(0x00B8DCD0, app::Vector3, get_Position, app::DestructibleStalactite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B8DCF0, void, set_Position, app::DestructibleStalactite* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, app::DestructibleStalactite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, app::DestructibleStalactite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, app::DestructibleStalactite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeGrenaded, app::DestructibleStalactite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, app::DestructibleStalactite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, app::DestructibleStalactite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, app::DestructibleStalactite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, app::DestructibleStalactite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, app::DestructibleStalactite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, app::DestructibleStalactite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, app::DestructibleStalactite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByMelee, app::DestructibleStalactite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByHammerHandle, app::DestructibleStalactite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, app::DestructibleStalactite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, app::DestructibleStalactite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHomingMissiled, app::DestructibleStalactite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, app::DestructibleStalactite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, app::DestructibleStalactite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, app::DestructibleStalactite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, app::DestructibleStalactite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRecieveDamage, app::DestructibleStalactite* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00B8DD00, void, Awake, app::DestructibleStalactite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IDamageReciever__Array*, get_AffectedReceivers, app::DestructibleStalactite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::DestructibleStalactite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, app::DestructibleStalactite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, app::DestructibleStalactite* this_ptr)
} // namespace app::classes::DestructibleStalactite
