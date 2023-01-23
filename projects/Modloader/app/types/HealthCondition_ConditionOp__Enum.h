#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HealthCondition_ConditionOp__Enum__Class.h>
#include <Modloader/app/structs/HealthCondition_ConditionOp__Enum.h>

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
