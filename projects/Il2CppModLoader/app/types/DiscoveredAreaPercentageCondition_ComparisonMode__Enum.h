#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DiscoveredAreaPercentageCondition_ComparisonMode__Enum {
        namespace {
            inline app::DiscoveredAreaPercentageCondition_ComparisonMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DiscoveredAreaPercentageCondition_ComparisonMode__Enum__Class** type_info = &type_info_ref;
        inline app::DiscoveredAreaPercentageCondition_ComparisonMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DiscoveredAreaPercentageCondition_ComparisonMode__Enum__Class>(type_info, "", "DiscoveredAreaPercentageCondition", "ComparisonMode");
        }
        inline app::DiscoveredAreaPercentageCondition_ComparisonMode__Enum* create() {
            return il2cpp::create_object<app::DiscoveredAreaPercentageCondition_ComparisonMode__Enum>(get_class());
        }
    } // namespace DiscoveredAreaPercentageCondition_ComparisonMode__Enum
} // namespace app::classes::types
