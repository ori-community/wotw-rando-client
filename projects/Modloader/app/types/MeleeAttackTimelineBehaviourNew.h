#pragma once
#include <Modloader/app/structs/MeleeAttackTimelineBehaviourNew.h>
#include <Modloader/app/structs/MeleeAttackTimelineBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeAttackTimelineBehaviourNew {
        inline app::MeleeAttackTimelineBehaviourNew__Class** type_info() {
            static app::MeleeAttackTimelineBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeleeAttackTimelineBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeleeAttackTimelineBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::MeleeAttackTimelineBehaviourNew__Class>(type_info(), "Moon", "MeleeAttackTimelineBehaviourNew");
        }
        inline app::MeleeAttackTimelineBehaviourNew* create() {
            return il2cpp::create_object<app::MeleeAttackTimelineBehaviourNew>(get_class());
        }
    } // namespace MeleeAttackTimelineBehaviourNew
} // namespace app::classes::types
