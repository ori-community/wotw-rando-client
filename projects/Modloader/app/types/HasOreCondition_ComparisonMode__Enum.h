#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HasOreCondition_ComparisonMode__Enum__Class.h>
#include <Modloader/app/structs/HasOreCondition_ComparisonMode__Enum.h>

namespace app::classes::types {
    namespace HasOreCondition_ComparisonMode__Enum {
        namespace {
            inline app::HasOreCondition_ComparisonMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::HasOreCondition_ComparisonMode__Enum__Class** type_info = &type_info_ref;
        inline app::HasOreCondition_ComparisonMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HasOreCondition_ComparisonMode__Enum__Class>(type_info, "", "HasOreCondition", "ComparisonMode");
        }
        inline app::HasOreCondition_ComparisonMode__Enum* create() {
            return il2cpp::create_object<app::HasOreCondition_ComparisonMode__Enum>(get_class());
        }
    } // namespace HasOreCondition_ComparisonMode__Enum
} // namespace app::classes::types
