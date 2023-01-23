#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HasEnoughExperienceCondition_ComparisonMode__Enum__Class.h>
#include <Modloader/app/structs/HasEnoughExperienceCondition_ComparisonMode__Enum.h>

namespace app::classes::types {
    namespace HasEnoughExperienceCondition_ComparisonMode__Enum {
        namespace {
            inline app::HasEnoughExperienceCondition_ComparisonMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::HasEnoughExperienceCondition_ComparisonMode__Enum__Class** type_info = &type_info_ref;
        inline app::HasEnoughExperienceCondition_ComparisonMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HasEnoughExperienceCondition_ComparisonMode__Enum__Class>(type_info, "", "HasEnoughExperienceCondition", "ComparisonMode");
        }
        inline app::HasEnoughExperienceCondition_ComparisonMode__Enum* create() {
            return il2cpp::create_object<app::HasEnoughExperienceCondition_ComparisonMode__Enum>(get_class());
        }
    } // namespace HasEnoughExperienceCondition_ComparisonMode__Enum
} // namespace app::classes::types
