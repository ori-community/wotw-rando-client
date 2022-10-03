#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateValueCondition_ComparisonMode__Enum {
        namespace {
            app::UberStateValueCondition_ComparisonMode__Enum__Class* type_info_ref = nullptr;
        }
        app::UberStateValueCondition_ComparisonMode__Enum__Class** type_info = &type_info_ref;
        inline app::UberStateValueCondition_ComparisonMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberStateValueCondition_ComparisonMode__Enum__Class>(type_info, "", "UberStateValueCondition", "ComparisonMode");
        }
        inline app::UberStateValueCondition_ComparisonMode__Enum* create() {
            return il2cpp::create_object<app::UberStateValueCondition_ComparisonMode__Enum>(get_class());
        }
    } // namespace UberStateValueCondition_ComparisonMode__Enum
} // namespace app::classes::types
