#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Game_AttackableIteratorUnitTester_TestAttackable_.h>
#include <Modloader/app/structs/AttackableIteratorUnitTester_TestAttackable.h>

namespace app::classes::System::Collections::Generic::List_1_Game_AttackableIteratorUnitTester_TestAttackable_ {
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, (app::List_1_Game_AttackableIteratorUnitTester_TestAttackable_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Game_AttackableIteratorUnitTester_TestAttackable_ * this_ptr, app::AttackableIteratorUnitTester_TestAttackable* item))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::AttackableIteratorUnitTester_TestAttackable*, get_Item, (app::List_1_Game_AttackableIteratorUnitTester_TestAttackable_ * this_ptr, int32_t index))
} // namespace app::classes::System::Collections::Generic::List_1_Game_AttackableIteratorUnitTester_TestAttackable_
