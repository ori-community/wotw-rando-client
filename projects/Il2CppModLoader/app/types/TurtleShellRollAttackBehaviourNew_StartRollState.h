#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurtleShellRollAttackBehaviourNew_StartRollState {
        inline app::TurtleShellRollAttackBehaviourNew_StartRollState__Class** type_info = (app::TurtleShellRollAttackBehaviourNew_StartRollState__Class**)(modloader::win::memory::resolve_rva(0x04760A88));
        inline app::TurtleShellRollAttackBehaviourNew_StartRollState__Class* get_class() {
            return il2cpp::get_nested_class<app::TurtleShellRollAttackBehaviourNew_StartRollState__Class>(type_info, "Moon", "TurtleShellRollAttackBehaviourNew", "StartRollState");
        }
        inline app::TurtleShellRollAttackBehaviourNew_StartRollState* create() {
            return il2cpp::create_object<app::TurtleShellRollAttackBehaviourNew_StartRollState>(get_class());
        }
    } // namespace TurtleShellRollAttackBehaviourNew_StartRollState
} // namespace app::classes::types
