#pragma once
#include <Modloader/app/structs/IntCondition.h>
#include <Modloader/app/structs/IntCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IntCondition {
        inline app::IntCondition__Class** type_info() {
            static app::IntCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IntCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IntCondition__Class* get_class() {
            return il2cpp::get_class<app::IntCondition__Class>(type_info(), "Moon.BehaviourSystem", "IntCondition");
        }
        inline app::IntCondition* create() {
            return il2cpp::create_object<app::IntCondition>(get_class());
        }
    } // namespace IntCondition
} // namespace app::classes::types
