#pragma once
#include <Modloader/app/structs/HealthCondition_ConditionOp__Enum.h>
#include <Modloader/app/structs/HealthCondition_ConditionOp__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HealthCondition_ConditionOp__Enum {
        inline app::HealthCondition_ConditionOp__Enum__Class** type_info() {
            static app::HealthCondition_ConditionOp__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HealthCondition_ConditionOp__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HealthCondition_ConditionOp__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HealthCondition_ConditionOp__Enum__Class>(type_info(), "", "HealthCondition", "ConditionOp");
        }
        inline app::HealthCondition_ConditionOp__Enum* create() {
            return il2cpp::create_object<app::HealthCondition_ConditionOp__Enum>(get_class());
        }
    } // namespace HealthCondition_ConditionOp__Enum
} // namespace app::classes::types
