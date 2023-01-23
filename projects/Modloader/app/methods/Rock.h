#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Rock.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>

namespace app::classes::Rock {
    IL2CPP_REGISTER_METHOD(0x00E05C90, app::Vector3, get_Position, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E05D20, bool, IsDead, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013587B0, bool, CanBeBashed, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHomingMissiled, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByHammerHandle, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByMelee, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009886D0, void, OnEnterBash, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013587C0, void, OnBashHighlight, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashDehighlight, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_BashPriority, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EEC270, bool, get_IsSuspended, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01358890, void, set_IsSuspended, (app::Rock * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FDCE0, app::SuspendableMask__Enum, get_Mask, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013588A0, void, set_Mask, (app::Rock * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x01358950, void, FixedUpdate, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01358A90, void, Awake, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01358CD0, void, OnDestroy, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01358D90, void, Start, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01358E80, void, OnCollisionEnter, (app::Rock * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x01358E80, void, OnCollisionStay, (app::Rock * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x01358E90, void, OnCollision, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IDamageReciever__Array*, get_AffectedReceivers, (app::Rock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01359070, void, ctor, (app::Rock * this_ptr))
} // namespace app::classes::Rock
