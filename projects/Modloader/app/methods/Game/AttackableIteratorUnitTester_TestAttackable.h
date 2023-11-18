#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/AttackableIteratorUnitTester_TestAttackable.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>

namespace app::classes::Game::AttackableIteratorUnitTester_TestAttackable {
    IL2CPP_REGISTER_METHOD(0x01521270, app::Vector3, get_Position, (app::AttackableIteratorUnitTester_TestAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015212C0, bool, CanBeBashed, (app::AttackableIteratorUnitTester_TestAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01521310, bool, CanBeChargeDashed, (app::AttackableIteratorUnitTester_TestAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01521360, bool, CanBeChargeFlamed, (app::AttackableIteratorUnitTester_TestAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015213B0, bool, CanBeGlowed, (app::AttackableIteratorUnitTester_TestAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01521400, bool, CanBeGrenaded, (app::AttackableIteratorUnitTester_TestAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01521450, bool, CanBeHeavySpiritSlashed, (app::AttackableIteratorUnitTester_TestAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015214A0, bool, CanBeHitByBow, (app::AttackableIteratorUnitTester_TestAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015214F0, bool, CanBeHitByHammerHandle, (app::AttackableIteratorUnitTester_TestAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01521540, bool, CanBeHitByMelee, (app::AttackableIteratorUnitTester_TestAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01521590, bool, CanBeHomingMissiled, (app::AttackableIteratorUnitTester_TestAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015215E0, bool, CanBeLevelUpBlasted, (app::AttackableIteratorUnitTester_TestAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01521630, bool, CanBeSpiritFlamed, (app::AttackableIteratorUnitTester_TestAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01521680, bool, CanBeSpiritLeashed, (app::AttackableIteratorUnitTester_TestAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015216D0, bool, CanBeSpiritSlashed, (app::AttackableIteratorUnitTester_TestAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01521720, bool, CanBeSpiritSpeared, (app::AttackableIteratorUnitTester_TestAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01521770, bool, CanBeStomped, (app::AttackableIteratorUnitTester_TestAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015217C0, bool, CanBeTeleportedByBeacon, (app::AttackableIteratorUnitTester_TestAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01521810, bool, CanBeTrapped, (app::AttackableIteratorUnitTester_TestAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01521860, bool, IsDead, (app::AttackableIteratorUnitTester_TestAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015218B0, bool, IsStompBouncable, (app::AttackableIteratorUnitTester_TestAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IDamageReciever__Array*, get_AffectedReceivers, (app::AttackableIteratorUnitTester_TestAttackable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AttackableIteratorUnitTester_TestAttackable * this_ptr))
} // namespace app::classes::Game::AttackableIteratorUnitTester_TestAttackable
