#pragma once
#include <Modloader/app/structs/HasKeystonesCondition_ComparisonMode__Enum.h>
#include <Modloader/app/structs/HasKeystonesCondition_ComparisonMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HasKeystonesCondition_ComparisonMode__Enum {
        inline app::HasKeystonesCondition_ComparisonMode__Enum__Class** type_info() {
            static app::HasKeystonesCondition_ComparisonMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HasKeystonesCondition_ComparisonMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HasKeystonesCondition_ComparisonMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HasKeystonesCondition_ComparisonMode__Enum__Class>(type_info(), "", "HasKeystonesCondition", "ComparisonMode");
        }
        inline app::HasKeystonesCondition_ComparisonMode__Enum* create() {
            return il2cpp::create_object<app::HasKeystonesCondition_ComparisonMode__Enum>(get_class());
        }
    } // namespace HasKeystonesCondition_ComparisonMode__Enum
} // namespace app::classes::types
