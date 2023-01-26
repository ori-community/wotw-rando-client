#pragma once
#include <Modloader/app/structs/TurtleBiteAttackBehaviourNew.h>
#include <Modloader/app/structs/TurtleBiteAttackBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurtleBiteAttackBehaviourNew {
        inline app::TurtleBiteAttackBehaviourNew__Class** type_info() {
            static app::TurtleBiteAttackBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurtleBiteAttackBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurtleBiteAttackBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::TurtleBiteAttackBehaviourNew__Class>(type_info(), "Moon", "TurtleBiteAttackBehaviourNew");
        }
        inline app::TurtleBiteAttackBehaviourNew* create() {
            return il2cpp::create_object<app::TurtleBiteAttackBehaviourNew>(get_class());
        }
    } // namespace TurtleBiteAttackBehaviourNew
} // namespace app::classes::types
