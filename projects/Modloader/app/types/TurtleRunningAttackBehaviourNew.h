#pragma once
#include <Modloader/app/structs/TurtleRunningAttackBehaviourNew.h>
#include <Modloader/app/structs/TurtleRunningAttackBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurtleRunningAttackBehaviourNew {
        inline app::TurtleRunningAttackBehaviourNew__Class** type_info() {
            static app::TurtleRunningAttackBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurtleRunningAttackBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurtleRunningAttackBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::TurtleRunningAttackBehaviourNew__Class>(type_info(), "Moon", "TurtleRunningAttackBehaviourNew");
        }
        inline app::TurtleRunningAttackBehaviourNew* create() {
            return il2cpp::create_object<app::TurtleRunningAttackBehaviourNew>(get_class());
        }
    } // namespace TurtleRunningAttackBehaviourNew
} // namespace app::classes::types
