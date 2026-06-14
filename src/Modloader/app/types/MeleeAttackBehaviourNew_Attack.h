#pragma once
#include <Modloader/app/structs/MeleeAttackBehaviourNew_Attack.h>
#include <Modloader/app/structs/MeleeAttackBehaviourNew_Attack__Array.h>
#include <Modloader/app/structs/MeleeAttackBehaviourNew_Attack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeAttackBehaviourNew_Attack {
        inline app::MeleeAttackBehaviourNew_Attack__Class** type_info() {
            static app::MeleeAttackBehaviourNew_Attack__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeleeAttackBehaviourNew_Attack__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeleeAttackBehaviourNew_Attack__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeAttackBehaviourNew_Attack__Class>(type_info(), "Moon", "MeleeAttackBehaviourNew", "Attack");
        }
        inline app::MeleeAttackBehaviourNew_Attack* create() {
            return il2cpp::create_object<app::MeleeAttackBehaviourNew_Attack>(get_class());
        }
        inline app::MeleeAttackBehaviourNew_Attack__Array* create_array(int size) {
            return il2cpp::array_new<app::MeleeAttackBehaviourNew_Attack__Array>(get_class(), size);
        }
        inline app::MeleeAttackBehaviourNew_Attack__Array* create_array(const std::vector<app::MeleeAttackBehaviourNew_Attack*>& items) {
            return il2cpp::array_new<app::MeleeAttackBehaviourNew_Attack__Array>(get_class(), items);
        }
    } // namespace MeleeAttackBehaviourNew_Attack
} // namespace app::classes::types
