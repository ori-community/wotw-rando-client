#pragma once
#include <Modloader/app/structs/StateCondition_StateConditionSetupHolder.h>
#include <Modloader/app/structs/StateCondition_StateConditionSetupHolder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateCondition_StateConditionSetupHolder {
        inline app::StateCondition_StateConditionSetupHolder__Class** type_info() {
            static app::StateCondition_StateConditionSetupHolder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StateCondition_StateConditionSetupHolder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StateCondition_StateConditionSetupHolder__Class* get_class() {
            return il2cpp::get_nested_class<app::StateCondition_StateConditionSetupHolder__Class>(type_info(), "", "StateCondition", "StateConditionSetupHolder");
        }
        inline app::StateCondition_StateConditionSetupHolder* create() {
            return il2cpp::create_object<app::StateCondition_StateConditionSetupHolder>(get_class());
        }
    } // namespace StateCondition_StateConditionSetupHolder
} // namespace app::classes::types
