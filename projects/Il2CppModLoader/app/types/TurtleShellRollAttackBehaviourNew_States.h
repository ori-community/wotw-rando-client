#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurtleShellRollAttackBehaviourNew_States {
        inline app::TurtleShellRollAttackBehaviourNew_States__Class** type_info = (app::TurtleShellRollAttackBehaviourNew_States__Class**)(modloader::win::memory::resolve_rva(0x04715C20));
        inline app::TurtleShellRollAttackBehaviourNew_States__Class* get_class() {
            return il2cpp::get_nested_class<app::TurtleShellRollAttackBehaviourNew_States__Class>(type_info, "Moon", "TurtleShellRollAttackBehaviourNew", "States");
        }
        inline app::TurtleShellRollAttackBehaviourNew_States* create() {
            return il2cpp::create_object<app::TurtleShellRollAttackBehaviourNew_States>(get_class());
        }
    } // namespace TurtleShellRollAttackBehaviourNew_States
} // namespace app::classes::types
