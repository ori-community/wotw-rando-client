#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TurtleShellAttackBehaviorNew {
        namespace {
            app::TurtleShellAttackBehaviorNew__Class* type_info_ref = nullptr;
        }
        app::TurtleShellAttackBehaviorNew__Class** type_info = &type_info_ref;
        inline app::TurtleShellAttackBehaviorNew__Class* get_class() {
            return il2cpp::get_class<app::TurtleShellAttackBehaviorNew__Class>(type_info, "Moon", "TurtleShellAttackBehaviorNew");
        }
        inline app::TurtleShellAttackBehaviorNew* create() {
            return il2cpp::create_object<app::TurtleShellAttackBehaviorNew>(get_class());
        }
    } // namespace TurtleShellAttackBehaviorNew
} // namespace app::classes::types
