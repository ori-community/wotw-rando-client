#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AttackableIteratorUnitTester_TestAttackable__Array__Class.h>
#include <Modloader/app/structs/AttackableIteratorUnitTester_TestAttackable__Array.h>

namespace app::classes::types {
    namespace AttackableIteratorUnitTester_TestAttackable__Array {
        namespace {
            inline app::AttackableIteratorUnitTester_TestAttackable__Array__Class* type_info_ref = nullptr;
        }
        inline app::AttackableIteratorUnitTester_TestAttackable__Array__Class** type_info = &type_info_ref;
        inline app::AttackableIteratorUnitTester_TestAttackable__Array__Class* get_class() {
            return il2cpp::get_class<app::AttackableIteratorUnitTester_TestAttackable__Array__Class>(type_info, "Game", "AttackableIteratorUnitTester+TestAttackable[]");
        }
        inline app::AttackableIteratorUnitTester_TestAttackable__Array* create() {
            return il2cpp::create_object<app::AttackableIteratorUnitTester_TestAttackable__Array>(get_class());
        }
    } // namespace AttackableIteratorUnitTester_TestAttackable__Array
} // namespace app::classes::types
