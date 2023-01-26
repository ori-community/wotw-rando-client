#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Game_AttackableIteratorUnitTester_TestAttackable_.h>
#include <Modloader/app/structs/AttackableIteratorUnitTester_TestAttackable.h>
#include <Modloader/app/structs/IAttackable.h>

namespace app::classes::Game::AttackableIteratorUnitTester {
    IL2CPP_REGISTER_METHOD(0x0151EC00, app::List_1_Game_AttackableIteratorUnitTester_TestAttackable_*, CreateTestAttackables, (int32_t count))
    IL2CPP_REGISTER_METHOD(0x0151EEB0, void, AssertSame, (app::IAttackable * actual, app::AttackableIteratorUnitTester_TestAttackable* expected))
    IL2CPP_REGISTER_METHOD(0x0151F090, void, Test_All, ())
    IL2CPP_REGISTER_METHOD(0x0151F150, void, Test_Single_Unmodified, ())
    IL2CPP_REGISTER_METHOD(0x0151F520, void, Test_Single_RemoveAfter, ())
    IL2CPP_REGISTER_METHOD(0x0151F8A0, void, Test_Single_RemoveBefore, ())
    IL2CPP_REGISTER_METHOD(0x0151FC50, void, Test_Single_Add, ())
    IL2CPP_REGISTER_METHOD(0x0151FFE0, void, Test_Double_Unmodified, ())
    IL2CPP_REGISTER_METHOD(0x01520600, void, Test_Double_Remove, ())
    IL2CPP_REGISTER_METHOD(0x01520C30, void, Test_Double_Add, ())
} // namespace app::classes::Game::AttackableIteratorUnitTester
