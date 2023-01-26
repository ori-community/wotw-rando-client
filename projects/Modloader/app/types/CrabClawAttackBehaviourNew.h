#pragma once
#include <Modloader/app/structs/CrabClawAttackBehaviourNew.h>
#include <Modloader/app/structs/CrabClawAttackBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrabClawAttackBehaviourNew {
        inline app::CrabClawAttackBehaviourNew__Class** type_info() {
            static app::CrabClawAttackBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrabClawAttackBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrabClawAttackBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::CrabClawAttackBehaviourNew__Class>(type_info(), "Moon", "CrabClawAttackBehaviourNew");
        }
        inline app::CrabClawAttackBehaviourNew* create() {
            return il2cpp::create_object<app::CrabClawAttackBehaviourNew>(get_class());
        }
    } // namespace CrabClawAttackBehaviourNew
} // namespace app::classes::types
