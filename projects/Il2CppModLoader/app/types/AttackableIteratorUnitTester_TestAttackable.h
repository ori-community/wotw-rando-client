#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttackableIteratorUnitTester_TestAttackable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AttackableIteratorUnitTester_TestAttackable__Class** type_info;
        inline app::AttackableIteratorUnitTester_TestAttackable__Class* get_class() {
            return il2cpp::get_nested_class<app::AttackableIteratorUnitTester_TestAttackable__Class>(type_info, "Game", "AttackableIteratorUnitTester", "TestAttackable");
        }
        inline app::AttackableIteratorUnitTester_TestAttackable* create() {
            return il2cpp::create_object<app::AttackableIteratorUnitTester_TestAttackable>(get_class());
        }
        inline app::AttackableIteratorUnitTester_TestAttackable__Array* create_array(int size) {
            return il2cpp::array_new<app::AttackableIteratorUnitTester_TestAttackable__Array>(get_class(), size);
        }
    } // namespace AttackableIteratorUnitTester_TestAttackable
} // namespace app::classes::types
