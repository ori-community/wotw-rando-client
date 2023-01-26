#pragma once
#include <Modloader/app/structs/TurtleShellRollAttackBehaviourNew_RollState.h>
#include <Modloader/app/structs/TurtleShellRollAttackBehaviourNew_RollState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurtleShellRollAttackBehaviourNew_RollState {
        inline app::TurtleShellRollAttackBehaviourNew_RollState__Class** type_info() {
            static app::TurtleShellRollAttackBehaviourNew_RollState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurtleShellRollAttackBehaviourNew_RollState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurtleShellRollAttackBehaviourNew_RollState__Class* get_class() {
            return il2cpp::get_nested_class<app::TurtleShellRollAttackBehaviourNew_RollState__Class>(type_info(), "Moon", "TurtleShellRollAttackBehaviourNew", "RollState");
        }
        inline app::TurtleShellRollAttackBehaviourNew_RollState* create() {
            return il2cpp::create_object<app::TurtleShellRollAttackBehaviourNew_RollState>(get_class());
        }
    } // namespace TurtleShellRollAttackBehaviourNew_RollState
} // namespace app::classes::types
