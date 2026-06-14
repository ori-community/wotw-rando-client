#pragma once
#include <Modloader/app/structs/ActionPerformingCondition.h>
#include <Modloader/app/structs/ActionPerformingCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActionPerformingCondition {
        inline app::ActionPerformingCondition__Class** type_info() {
            static app::ActionPerformingCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActionPerformingCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActionPerformingCondition__Class* get_class() {
            return il2cpp::get_class<app::ActionPerformingCondition__Class>(type_info(), "", "ActionPerformingCondition");
        }
        inline app::ActionPerformingCondition* create() {
            return il2cpp::create_object<app::ActionPerformingCondition>(get_class());
        }
    } // namespace ActionPerformingCondition
} // namespace app::classes::types
