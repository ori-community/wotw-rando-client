#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StateCondition_StateConditionSetupData {
        namespace {
            inline app::StateCondition_StateConditionSetupData__Class* type_info_ref = nullptr;
        }
        inline app::StateCondition_StateConditionSetupData__Class** type_info = &type_info_ref;
        inline app::StateCondition_StateConditionSetupData__Class* get_class() {
            return il2cpp::get_nested_class<app::StateCondition_StateConditionSetupData__Class>(type_info, "", "StateCondition", "StateConditionSetupData");
        }
        inline app::StateCondition_StateConditionSetupData* create() {
            return il2cpp::create_object<app::StateCondition_StateConditionSetupData>(get_class());
        }
        inline app::StateCondition_StateConditionSetupData__Array* create_array(int size) {
            return il2cpp::array_new<app::StateCondition_StateConditionSetupData__Array>(get_class(), size);
        }
        inline app::StateCondition_StateConditionSetupData__Array* create_array(const std::vector<app::StateCondition_StateConditionSetupData*>& items) {
            return il2cpp::array_new<app::StateCondition_StateConditionSetupData__Array>(get_class(), items);
        }
    } // namespace StateCondition_StateConditionSetupData
} // namespace app::classes::types
