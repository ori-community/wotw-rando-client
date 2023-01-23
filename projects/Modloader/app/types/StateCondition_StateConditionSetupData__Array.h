#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StateCondition_StateConditionSetupData__Array__Class.h>
#include <Modloader/app/structs/StateCondition_StateConditionSetupData__Array.h>

namespace app::classes::types {
    namespace StateCondition_StateConditionSetupData__Array {
        namespace {
            inline app::StateCondition_StateConditionSetupData__Array__Class* type_info_ref = nullptr;
        }
        inline app::StateCondition_StateConditionSetupData__Array__Class** type_info = &type_info_ref;
        inline app::StateCondition_StateConditionSetupData__Array__Class* get_class() {
            return il2cpp::get_class<app::StateCondition_StateConditionSetupData__Array__Class>(type_info, "", "StateCondition+StateConditionSetupData[]");
        }
        inline app::StateCondition_StateConditionSetupData__Array* create() {
            return il2cpp::create_object<app::StateCondition_StateConditionSetupData__Array>(get_class());
        }
    } // namespace StateCondition_StateConditionSetupData__Array
} // namespace app::classes::types
