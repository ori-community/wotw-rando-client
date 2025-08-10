#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/StompPost.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::StompPost {
    IL2CPP_REGISTER_METHOD(0x00653A60, app::Vector3, get_Position, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeStomped, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHomingMissiled, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeSpiritSpeared, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByMelee, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByHammerHandle, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00653AF0, void, OnRecieveDamage, app::StompPost* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CountsTowardsSuperJumpAchievement, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00653F90, bool, get_IsSuspended, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00653FA0, void, set_IsSuspended, app::StompPost* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00653FB0, app::SuspendableMask__Enum, get_Mask, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00653FC0, void, set_Mask, app::StompPost* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00654080, void, Awake, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006542F0, void, OnDestroy, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00654390, void, Start, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00654480, void, FixedUpdate, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006547F0, void, Serialize, app::StompPost* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::IDamageReciever__Array*, get_AffectedReceivers, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00654860, void, ctor, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, app::StompPost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, app::StompPost* this_ptr)
} // namespace app::classes::StompPost
