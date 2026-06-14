#pragma once
#include <Modloader/app/structs/MeleeAttackTimelineBehaviourNew_Attack.h>
#include <Modloader/app/structs/MeleeAttackTimelineBehaviourNew_Attack__Array.h>
#include <Modloader/app/structs/MeleeAttackTimelineBehaviourNew_Attack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeAttackTimelineBehaviourNew_Attack {
        inline app::MeleeAttackTimelineBehaviourNew_Attack__Class** type_info() {
            static app::MeleeAttackTimelineBehaviourNew_Attack__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeleeAttackTimelineBehaviourNew_Attack__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeleeAttackTimelineBehaviourNew_Attack__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeAttackTimelineBehaviourNew_Attack__Class>(type_info(), "Moon", "MeleeAttackTimelineBehaviourNew", "Attack");
        }
        inline app::MeleeAttackTimelineBehaviourNew_Attack* create() {
            return il2cpp::create_object<app::MeleeAttackTimelineBehaviourNew_Attack>(get_class());
        }
        inline app::MeleeAttackTimelineBehaviourNew_Attack__Array* create_array(int size) {
            return il2cpp::array_new<app::MeleeAttackTimelineBehaviourNew_Attack__Array>(get_class(), size);
        }
        inline app::MeleeAttackTimelineBehaviourNew_Attack__Array* create_array(const std::vector<app::MeleeAttackTimelineBehaviourNew_Attack*>& items) {
            return il2cpp::array_new<app::MeleeAttackTimelineBehaviourNew_Attack__Array>(get_class(), items);
        }
    } // namespace MeleeAttackTimelineBehaviourNew_Attack
} // namespace app::classes::types
