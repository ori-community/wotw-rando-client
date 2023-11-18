#pragma once
#include <Modloader/app/structs/HasOreCondition_ComparisonMode__Enum.h>
#include <Modloader/app/structs/HasOreCondition_ComparisonMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HasOreCondition_ComparisonMode__Enum {
        inline app::HasOreCondition_ComparisonMode__Enum__Class** type_info() {
            static app::HasOreCondition_ComparisonMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HasOreCondition_ComparisonMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HasOreCondition_ComparisonMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HasOreCondition_ComparisonMode__Enum__Class>(type_info(), "", "HasOreCondition", "ComparisonMode");
        }
        inline app::HasOreCondition_ComparisonMode__Enum* create() {
            return il2cpp::create_object<app::HasOreCondition_ComparisonMode__Enum>(get_class());
        }
    } // namespace HasOreCondition_ComparisonMode__Enum
} // namespace app::classes::types
