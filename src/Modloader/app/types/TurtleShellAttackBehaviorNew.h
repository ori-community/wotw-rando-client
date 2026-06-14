#pragma once
#include <Modloader/app/structs/TurtleShellAttackBehaviorNew.h>
#include <Modloader/app/structs/TurtleShellAttackBehaviorNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurtleShellAttackBehaviorNew {
        inline app::TurtleShellAttackBehaviorNew__Class** type_info() {
            static app::TurtleShellAttackBehaviorNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurtleShellAttackBehaviorNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurtleShellAttackBehaviorNew__Class* get_class() {
            return il2cpp::get_class<app::TurtleShellAttackBehaviorNew__Class>(type_info(), "Moon", "TurtleShellAttackBehaviorNew");
        }
        inline app::TurtleShellAttackBehaviorNew* create() {
            return il2cpp::create_object<app::TurtleShellAttackBehaviorNew>(get_class());
        }
    } // namespace TurtleShellAttackBehaviorNew
} // namespace app::classes::types
