#pragma once
#include <Modloader/app/structs/MeleeAttackBehaviourNew_Attack__Array.h>
#include <Modloader/app/structs/MeleeAttackBehaviourNew_Attack__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeAttackBehaviourNew_Attack__Array {
        inline app::MeleeAttackBehaviourNew_Attack__Array__Class** type_info() {
            static app::MeleeAttackBehaviourNew_Attack__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeleeAttackBehaviourNew_Attack__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeleeAttackBehaviourNew_Attack__Array__Class* get_class() {
            return il2cpp::get_class<app::MeleeAttackBehaviourNew_Attack__Array__Class>(type_info(), "Moon", "MeleeAttackBehaviourNew+Attack[]");
        }
        inline app::MeleeAttackBehaviourNew_Attack__Array* create() {
            return il2cpp::create_object<app::MeleeAttackBehaviourNew_Attack__Array>(get_class());
        }
    } // namespace MeleeAttackBehaviourNew_Attack__Array
} // namespace app::classes::types
