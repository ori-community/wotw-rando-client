#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/RisingStompPost.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::RisingStompPost {
    IL2CPP_REGISTER_METHOD(0x00FC1E90, app::Vector3, get_Position, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeStomped, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHomingMissiled, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByHammerHandle, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByMelee, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013566B0, void, OnRecieveDamage, (app::RisingStompPost * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CountsTowardsSuperJumpAchievement, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01356A80, bool, get_IsSuspended, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01356A90, void, set_IsSuspended, (app::RisingStompPost * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00989BF0, app::SuspendableMask__Enum, get_Mask, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01356AA0, void, set_Mask, (app::RisingStompPost * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x01356B60, void, Awake, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01356DD0, void, OnDestroy, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01356E70, void, Start, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01356F80, void, OnTwinRecievedDamage, (app::RisingStompPost * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x01357280, void, FixedUpdate, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01357890, void, Serialize, (app::RisingStompPost * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::IDamageReciever__Array*, get_AffectedReceivers, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013578F0, void, ctor, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, (app::RisingStompPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, (app::RisingStompPost * this_ptr))
} // namespace app::classes::RisingStompPost
