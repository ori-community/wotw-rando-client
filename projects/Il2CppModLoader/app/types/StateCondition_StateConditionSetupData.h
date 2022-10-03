#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StateCondition_StateConditionSetupData {
        namespace {
            app::StateCondition_StateConditionSetupData__Class* type_info_ref = nullptr;
        }
        app::StateCondition_StateConditionSetupData__Class** type_info = &type_info_ref;
        inline app::StateCondition_StateConditionSetupData__Class* get_class() {
            return il2cpp::get_nested_class<app::StateCondition_StateConditionSetupData__Class>(type_info, "", "StateCondition", "StateConditionSetupData");
        }
        inline app::StateCondition_StateConditionSetupData* create() {
            return il2cpp::create_object<app::StateCondition_StateConditionSetupData>(get_class());
        }
        inline app::StateCondition_StateConditionSetupData__Array* create_array(int size) {
            return il2cpp::array_new<app::StateCondition_StateConditionSetupData__Array>(get_class(), size);
        }
    } // namespace StateCondition_StateConditionSetupData
} // namespace app::classes::types
