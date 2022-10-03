#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TurtleShellRollAttackBehaviourNew_RollLoopState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TurtleShellRollAttackBehaviourNew_RollLoopState__Class** type_info;
        inline app::TurtleShellRollAttackBehaviourNew_RollLoopState__Class* get_class() {
            return il2cpp::get_nested_class<app::TurtleShellRollAttackBehaviourNew_RollLoopState__Class>(type_info, "Moon", "TurtleShellRollAttackBehaviourNew", "RollLoopState");
        }
        inline app::TurtleShellRollAttackBehaviourNew_RollLoopState* create() {
            return il2cpp::create_object<app::TurtleShellRollAttackBehaviourNew_RollLoopState>(get_class());
        }
    } // namespace TurtleShellRollAttackBehaviourNew_RollLoopState
} // namespace app::classes::types
