#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShrineCombat_ConditionGuidType__Class.h>
#include <Modloader/app/structs/ShrineCombat_ConditionGuidType.h>

namespace app::classes::types {
    namespace ShrineCombat_ConditionGuidType {
        namespace {
            inline app::ShrineCombat_ConditionGuidType__Class* type_info_ref = nullptr;
        }
        inline app::ShrineCombat_ConditionGuidType__Class** type_info = &type_info_ref;
        inline app::ShrineCombat_ConditionGuidType__Class* get_class() {
            return il2cpp::get_nested_class<app::ShrineCombat_ConditionGuidType__Class>(type_info, "", "ShrineCombat", "ConditionGuidType");
        }
        inline app::ShrineCombat_ConditionGuidType* create() {
            return il2cpp::create_object<app::ShrineCombat_ConditionGuidType>(get_class());
        }
    } // namespace ShrineCombat_ConditionGuidType
} // namespace app::classes::types
