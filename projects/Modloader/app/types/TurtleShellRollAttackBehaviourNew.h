#pragma once
#include <Modloader/app/structs/TurtleShellRollAttackBehaviourNew.h>
#include <Modloader/app/structs/TurtleShellRollAttackBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurtleShellRollAttackBehaviourNew {
        inline app::TurtleShellRollAttackBehaviourNew__Class** type_info() {
            static app::TurtleShellRollAttackBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurtleShellRollAttackBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurtleShellRollAttackBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::TurtleShellRollAttackBehaviourNew__Class>(type_info(), "Moon", "TurtleShellRollAttackBehaviourNew");
        }
        inline app::TurtleShellRollAttackBehaviourNew* create() {
            return il2cpp::create_object<app::TurtleShellRollAttackBehaviourNew>(get_class());
        }
    } // namespace TurtleShellRollAttackBehaviourNew
} // namespace app::classes::types
