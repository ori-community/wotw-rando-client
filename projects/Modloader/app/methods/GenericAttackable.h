#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::GenericAttackable {
    IL2CPP_REGISTER_METHOD(0x00E05AB0, void, Awake, (app::GenericAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E05C90, app::Vector3, get_Position, (app::GenericAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E05D20, bool, IsDead, (app::GenericAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, (app::GenericAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, (app::GenericAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, (app::GenericAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, (app::GenericAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, (app::GenericAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, (app::GenericAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, (app::GenericAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, (app::GenericAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, (app::GenericAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, (app::GenericAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, (app::GenericAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHomingMissiled, (app::GenericAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, (app::GenericAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, (app::GenericAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, (app::GenericAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByHammerHandle, (app::GenericAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByMelee, (app::GenericAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, (app::GenericAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, (app::GenericAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IDamageReciever__Array*, get_AffectedReceivers, (app::GenericAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::GenericAttackable * this_ptr))
} // namespace app::classes::GenericAttackable
