#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DetachRopeOnStomp.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::DetachRopeOnStomp {
    IL2CPP_REGISTER_METHOD(0x00B8E4A0, app::Vector3, get_Position, (app::DetachRopeOnStomp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8E4C0, void, set_Position, (app::DetachRopeOnStomp * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, (app::DetachRopeOnStomp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, (app::DetachRopeOnStomp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, (app::DetachRopeOnStomp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeStomped, (app::DetachRopeOnStomp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, (app::DetachRopeOnStomp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, (app::DetachRopeOnStomp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, (app::DetachRopeOnStomp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, (app::DetachRopeOnStomp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, (app::DetachRopeOnStomp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, (app::DetachRopeOnStomp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, (app::DetachRopeOnStomp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHomingMissiled, (app::DetachRopeOnStomp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, (app::DetachRopeOnStomp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, (app::DetachRopeOnStomp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, (app::DetachRopeOnStomp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByHammerHandle, (app::DetachRopeOnStomp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByMelee, (app::DetachRopeOnStomp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, (app::DetachRopeOnStomp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, (app::DetachRopeOnStomp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, (app::DetachRopeOnStomp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CountsTowardsSuperJumpAchievement, (app::DetachRopeOnStomp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8E4D0, void, OnEnable, (app::DetachRopeOnStomp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8E570, void, OnDestroy, (app::DetachRopeOnStomp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8E610, void, OnRecieveDamage, (app::DetachRopeOnStomp * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00B8E750, void, Awake, (app::DetachRopeOnStomp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::IDamageReciever__Array*, get_AffectedReceivers, (app::DetachRopeOnStomp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444DD0, void, ctor, (app::DetachRopeOnStomp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, (app::DetachRopeOnStomp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, (app::DetachRopeOnStomp * this_ptr))
} // namespace app::classes::DetachRopeOnStomp
