#pragma once
#include <Modloader/app/structs/TurtleClawAttackBehaviourNew.h>
#include <Modloader/app/structs/TurtleClawAttackBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurtleClawAttackBehaviourNew {
        inline app::TurtleClawAttackBehaviourNew__Class** type_info() {
            static app::TurtleClawAttackBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurtleClawAttackBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurtleClawAttackBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::TurtleClawAttackBehaviourNew__Class>(type_info(), "Moon", "TurtleClawAttackBehaviourNew");
        }
        inline app::TurtleClawAttackBehaviourNew* create() {
            return il2cpp::create_object<app::TurtleClawAttackBehaviourNew>(get_class());
        }
    } // namespace TurtleClawAttackBehaviourNew
} // namespace app::classes::types
