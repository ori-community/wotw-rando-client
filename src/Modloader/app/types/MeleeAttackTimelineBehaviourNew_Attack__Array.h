#pragma once
#include <Modloader/app/structs/MeleeAttackTimelineBehaviourNew_Attack__Array.h>
#include <Modloader/app/structs/MeleeAttackTimelineBehaviourNew_Attack__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeAttackTimelineBehaviourNew_Attack__Array {
        inline app::MeleeAttackTimelineBehaviourNew_Attack__Array__Class** type_info() {
            static app::MeleeAttackTimelineBehaviourNew_Attack__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeleeAttackTimelineBehaviourNew_Attack__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeleeAttackTimelineBehaviourNew_Attack__Array__Class* get_class() {
            return il2cpp::get_class<app::MeleeAttackTimelineBehaviourNew_Attack__Array__Class>(type_info(), "Moon", "MeleeAttackTimelineBehaviourNew+Attack[]");
        }
        inline app::MeleeAttackTimelineBehaviourNew_Attack__Array* create() {
            return il2cpp::create_object<app::MeleeAttackTimelineBehaviourNew_Attack__Array>(get_class());
        }
    } // namespace MeleeAttackTimelineBehaviourNew_Attack__Array
} // namespace app::classes::types
