#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HasKeystonesCondition_ComparisonMode__Enum {
        namespace {
            app::HasKeystonesCondition_ComparisonMode__Enum__Class* type_info_ref = nullptr;
        }
        app::HasKeystonesCondition_ComparisonMode__Enum__Class** type_info = &type_info_ref;
        inline app::HasKeystonesCondition_ComparisonMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HasKeystonesCondition_ComparisonMode__Enum__Class>(type_info, "", "HasKeystonesCondition", "ComparisonMode");
        }
        inline app::HasKeystonesCondition_ComparisonMode__Enum* create() {
            return il2cpp::create_object<app::HasKeystonesCondition_ComparisonMode__Enum>(get_class());
        }
    } // namespace HasKeystonesCondition_ComparisonMode__Enum
} // namespace app::classes::types
