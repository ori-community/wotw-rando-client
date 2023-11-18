#pragma once
#include <Modloader/app/structs/FloatCondition.h>
#include <Modloader/app/structs/FloatCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatCondition {
        inline app::FloatCondition__Class** type_info() {
            static app::FloatCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatCondition__Class* get_class() {
            return il2cpp::get_class<app::FloatCondition__Class>(type_info(), "Moon.BehaviourSystem", "FloatCondition");
        }
        inline app::FloatCondition* create() {
            return il2cpp::create_object<app::FloatCondition>(get_class());
        }
    } // namespace FloatCondition
} // namespace app::classes::types
