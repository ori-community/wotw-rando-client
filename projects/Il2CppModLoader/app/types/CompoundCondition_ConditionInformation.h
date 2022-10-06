#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CompoundCondition_ConditionInformation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CompoundCondition_ConditionInformation__Class** type_info;
        inline app::CompoundCondition_ConditionInformation__Class* get_class() {
            return il2cpp::get_nested_class<app::CompoundCondition_ConditionInformation__Class>(type_info, "", "CompoundCondition", "ConditionInformation");
        }
        inline app::CompoundCondition_ConditionInformation* create() {
            return il2cpp::create_object<app::CompoundCondition_ConditionInformation>(get_class());
        }
        inline app::CompoundCondition_ConditionInformation__Array* create_array(int size) {
            return il2cpp::array_new<app::CompoundCondition_ConditionInformation__Array>(get_class(), size);
        }
        inline app::CompoundCondition_ConditionInformation__Array* create_array(const std::vector<app::CompoundCondition_ConditionInformation*>& items) {
            return il2cpp::array_new<app::CompoundCondition_ConditionInformation__Array>(get_class(), items);
        }
    } // namespace CompoundCondition_ConditionInformation
} // namespace app::classes::types
