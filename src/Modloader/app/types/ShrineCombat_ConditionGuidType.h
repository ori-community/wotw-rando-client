#pragma once
#include <Modloader/app/structs/ShrineCombat_ConditionGuidType.h>
#include <Modloader/app/structs/ShrineCombat_ConditionGuidType__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShrineCombat_ConditionGuidType {
        inline app::ShrineCombat_ConditionGuidType__Class** type_info() {
            static app::ShrineCombat_ConditionGuidType__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShrineCombat_ConditionGuidType__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShrineCombat_ConditionGuidType__Class* get_class() {
            return il2cpp::get_nested_class<app::ShrineCombat_ConditionGuidType__Class>(type_info(), "", "ShrineCombat", "ConditionGuidType");
        }
        inline app::ShrineCombat_ConditionGuidType* create() {
            return il2cpp::create_object<app::ShrineCombat_ConditionGuidType>(get_class());
        }
    } // namespace ShrineCombat_ConditionGuidType
} // namespace app::classes::types
