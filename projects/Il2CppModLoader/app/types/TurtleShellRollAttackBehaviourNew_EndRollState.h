#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TurtleShellRollAttackBehaviourNew_EndRollState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TurtleShellRollAttackBehaviourNew_EndRollState__Class** type_info;
        inline app::TurtleShellRollAttackBehaviourNew_EndRollState__Class* get_class() {
            return il2cpp::get_nested_class<app::TurtleShellRollAttackBehaviourNew_EndRollState__Class>(type_info, "Moon", "TurtleShellRollAttackBehaviourNew", "EndRollState");
        }
        inline app::TurtleShellRollAttackBehaviourNew_EndRollState* create() {
            return il2cpp::create_object<app::TurtleShellRollAttackBehaviourNew_EndRollState>(get_class());
        }
    } // namespace TurtleShellRollAttackBehaviourNew_EndRollState
} // namespace app::classes::types
