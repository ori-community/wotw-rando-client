#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TurtleShellRollAttackBehaviourNew_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TurtleShellRollAttackBehaviourNew_States__Class** type_info;
        inline app::TurtleShellRollAttackBehaviourNew_States__Class* get_class() {
            return il2cpp::get_nested_class<app::TurtleShellRollAttackBehaviourNew_States__Class>(type_info, "Moon", "TurtleShellRollAttackBehaviourNew", "States");
        }
        inline app::TurtleShellRollAttackBehaviourNew_States* create() {
            return il2cpp::create_object<app::TurtleShellRollAttackBehaviourNew_States>(get_class());
        }
    } // namespace TurtleShellRollAttackBehaviourNew_States
} // namespace app::classes::types
