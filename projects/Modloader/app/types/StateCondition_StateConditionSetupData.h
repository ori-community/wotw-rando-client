#pragma once
#include <Modloader/app/structs/StateCondition_StateConditionSetupData.h>
#include <Modloader/app/structs/StateCondition_StateConditionSetupData__Array.h>
#include <Modloader/app/structs/StateCondition_StateConditionSetupData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateCondition_StateConditionSetupData {
        inline app::StateCondition_StateConditionSetupData__Class** type_info() {
            static app::StateCondition_StateConditionSetupData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StateCondition_StateConditionSetupData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StateCondition_StateConditionSetupData__Class* get_class() {
            return il2cpp::get_nested_class<app::StateCondition_StateConditionSetupData__Class>(type_info(), "", "StateCondition", "StateConditionSetupData");
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
