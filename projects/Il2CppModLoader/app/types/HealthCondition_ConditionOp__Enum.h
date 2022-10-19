#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HealthCondition_ConditionOp__Enum {
        namespace {
            inline app::HealthCondition_ConditionOp__Enum__Class* type_info_ref = nullptr;
        }
        inline app::HealthCondition_ConditionOp__Enum__Class** type_info = &type_info_ref;
        inline app::HealthCondition_ConditionOp__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HealthCondition_ConditionOp__Enum__Class>(type_info, "", "HealthCondition", "ConditionOp");
        }
        inline app::HealthCondition_ConditionOp__Enum* create() {
            return il2cpp::create_object<app::HealthCondition_ConditionOp__Enum>(get_class());
        }
    } // namespace HealthCondition_ConditionOp__Enum
} // namespace app::classes::types
