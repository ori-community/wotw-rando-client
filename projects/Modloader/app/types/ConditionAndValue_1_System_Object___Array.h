#pragma once
#include <Modloader/app/structs/ConditionAndValue_1_System_Object___Array.h>
#include <Modloader/app/structs/ConditionAndValue_1_System_Object___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConditionAndValue_1_System_Object___Array {
        inline app::ConditionAndValue_1_System_Object___Array__Class** type_info() {
            static app::ConditionAndValue_1_System_Object___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConditionAndValue_1_System_Object___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConditionAndValue_1_System_Object___Array__Class* get_class() {
            return il2cpp::get_class<app::ConditionAndValue_1_System_Object___Array__Class>(type_info(), "", "ConditionAndValue`1[System.Object][]");
        }
        inline app::ConditionAndValue_1_System_Object___Array* create() {
            return il2cpp::create_object<app::ConditionAndValue_1_System_Object___Array>(get_class());
        }
    } // namespace ConditionAndValue_1_System_Object___Array
} // namespace app::classes::types
