#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StateCondition_StateConditionSetupHolder {
        namespace {
            inline app::StateCondition_StateConditionSetupHolder__Class* type_info_ref = nullptr;
        }
        inline app::StateCondition_StateConditionSetupHolder__Class** type_info = &type_info_ref;
        inline app::StateCondition_StateConditionSetupHolder__Class* get_class() {
            return il2cpp::get_nested_class<app::StateCondition_StateConditionSetupHolder__Class>(type_info, "", "StateCondition", "StateConditionSetupHolder");
        }
        inline app::StateCondition_StateConditionSetupHolder* create() {
            return il2cpp::create_object<app::StateCondition_StateConditionSetupHolder>(get_class());
        }
    } // namespace StateCondition_StateConditionSetupHolder
} // namespace app::classes::types
