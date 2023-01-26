#pragma once
#include <Modloader/app/structs/MeleeAttackBehaviourNew.h>
#include <Modloader/app/structs/MeleeAttackBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeAttackBehaviourNew {
        inline app::MeleeAttackBehaviourNew__Class** type_info() {
            static app::MeleeAttackBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeleeAttackBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeleeAttackBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::MeleeAttackBehaviourNew__Class>(type_info(), "Moon", "MeleeAttackBehaviourNew");
        }
        inline app::MeleeAttackBehaviourNew* create() {
            return il2cpp::create_object<app::MeleeAttackBehaviourNew>(get_class());
        }
    } // namespace MeleeAttackBehaviourNew
} // namespace app::classes::types
