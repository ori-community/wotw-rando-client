#pragma once
#include <Modloader/app/structs/TurtlePounceAttackBehaviourNew.h>
#include <Modloader/app/structs/TurtlePounceAttackBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurtlePounceAttackBehaviourNew {
        inline app::TurtlePounceAttackBehaviourNew__Class** type_info() {
            static app::TurtlePounceAttackBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurtlePounceAttackBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurtlePounceAttackBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::TurtlePounceAttackBehaviourNew__Class>(type_info(), "Moon", "TurtlePounceAttackBehaviourNew");
        }
        inline app::TurtlePounceAttackBehaviourNew* create() {
            return il2cpp::create_object<app::TurtlePounceAttackBehaviourNew>(get_class());
        }
    } // namespace TurtlePounceAttackBehaviourNew
} // namespace app::classes::types
