#pragma once
#include <Modloader/app/structs/ConditionAndValue_1_System_Single___Array.h>
#include <Modloader/app/structs/ConditionAndValue_1_System_Single___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConditionAndValue_1_System_Single___Array {
        inline app::ConditionAndValue_1_System_Single___Array__Class** type_info() {
            static app::ConditionAndValue_1_System_Single___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConditionAndValue_1_System_Single___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConditionAndValue_1_System_Single___Array__Class* get_class() {
            return il2cpp::get_class<app::ConditionAndValue_1_System_Single___Array__Class>(type_info(), "", "ConditionAndValue`1[System.Single][]");
        }
        inline app::ConditionAndValue_1_System_Single___Array* create() {
            return il2cpp::create_object<app::ConditionAndValue_1_System_Single___Array>(get_class());
        }
    } // namespace ConditionAndValue_1_System_Single___Array
} // namespace app::classes::types
