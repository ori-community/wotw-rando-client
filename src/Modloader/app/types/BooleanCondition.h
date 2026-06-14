#pragma once
#include <Modloader/app/structs/BooleanCondition.h>
#include <Modloader/app/structs/BooleanCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BooleanCondition {
        inline app::BooleanCondition__Class** type_info() {
            static app::BooleanCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BooleanCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BooleanCondition__Class* get_class() {
            return il2cpp::get_class<app::BooleanCondition__Class>(type_info(), "Moon.BehaviourSystem", "BooleanCondition");
        }
        inline app::BooleanCondition* create() {
            return il2cpp::create_object<app::BooleanCondition>(get_class());
        }
    } // namespace BooleanCondition
} // namespace app::classes::types
