#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurtleShellRollAttackBehaviourNew_RollState {
        namespace {
            inline app::TurtleShellRollAttackBehaviourNew_RollState__Class* type_info_ref = nullptr;
        }
        inline app::TurtleShellRollAttackBehaviourNew_RollState__Class** type_info = &type_info_ref;
        inline app::TurtleShellRollAttackBehaviourNew_RollState__Class* get_class() {
            return il2cpp::get_nested_class<app::TurtleShellRollAttackBehaviourNew_RollState__Class>(type_info, "Moon", "TurtleShellRollAttackBehaviourNew", "RollState");
        }
        inline app::TurtleShellRollAttackBehaviourNew_RollState* create() {
            return il2cpp::create_object<app::TurtleShellRollAttackBehaviourNew_RollState>(get_class());
        }
    } // namespace TurtleShellRollAttackBehaviourNew_RollState
} // namespace app::classes::types
