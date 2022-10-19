#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurtleShellRollAttackBehaviourNew {
        namespace {
            inline app::TurtleShellRollAttackBehaviourNew__Class* type_info_ref = nullptr;
        }
        inline app::TurtleShellRollAttackBehaviourNew__Class** type_info = &type_info_ref;
        inline app::TurtleShellRollAttackBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::TurtleShellRollAttackBehaviourNew__Class>(type_info, "Moon", "TurtleShellRollAttackBehaviourNew");
        }
        inline app::TurtleShellRollAttackBehaviourNew* create() {
            return il2cpp::create_object<app::TurtleShellRollAttackBehaviourNew>(get_class());
        }
    } // namespace TurtleShellRollAttackBehaviourNew
} // namespace app::classes::types
