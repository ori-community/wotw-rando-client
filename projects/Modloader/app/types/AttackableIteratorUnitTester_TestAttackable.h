#pragma once
#include <Modloader/app/structs/AttackableIteratorUnitTester_TestAttackable.h>
#include <Modloader/app/structs/AttackableIteratorUnitTester_TestAttackable__Array.h>
#include <Modloader/app/structs/AttackableIteratorUnitTester_TestAttackable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttackableIteratorUnitTester_TestAttackable {
        inline app::AttackableIteratorUnitTester_TestAttackable__Class** type_info() {
            static app::AttackableIteratorUnitTester_TestAttackable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AttackableIteratorUnitTester_TestAttackable__Class**)(modloader::win::memory::resolve_rva(0x047429C8));
            }
            return cache;
        }
        inline app::AttackableIteratorUnitTester_TestAttackable__Class* get_class() {
            return il2cpp::get_nested_class<app::AttackableIteratorUnitTester_TestAttackable__Class>(type_info(), "Game", "AttackableIteratorUnitTester", "TestAttackable");
        }
        inline app::AttackableIteratorUnitTester_TestAttackable* create() {
            return il2cpp::create_object<app::AttackableIteratorUnitTester_TestAttackable>(get_class());
        }
        inline app::AttackableIteratorUnitTester_TestAttackable__Array* create_array(int size) {
            return il2cpp::array_new<app::AttackableIteratorUnitTester_TestAttackable__Array>(get_class(), size);
        }
        inline app::AttackableIteratorUnitTester_TestAttackable__Array* create_array(const std::vector<app::AttackableIteratorUnitTester_TestAttackable*>& items) {
            return il2cpp::array_new<app::AttackableIteratorUnitTester_TestAttackable__Array>(get_class(), items);
        }
    } // namespace AttackableIteratorUnitTester_TestAttackable
} // namespace app::classes::types
