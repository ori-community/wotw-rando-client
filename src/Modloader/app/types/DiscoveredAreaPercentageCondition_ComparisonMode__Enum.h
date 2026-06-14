#pragma once
#include <Modloader/app/structs/DiscoveredAreaPercentageCondition_ComparisonMode__Enum.h>
#include <Modloader/app/structs/DiscoveredAreaPercentageCondition_ComparisonMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DiscoveredAreaPercentageCondition_ComparisonMode__Enum {
        inline app::DiscoveredAreaPercentageCondition_ComparisonMode__Enum__Class** type_info() {
            static app::DiscoveredAreaPercentageCondition_ComparisonMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DiscoveredAreaPercentageCondition_ComparisonMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DiscoveredAreaPercentageCondition_ComparisonMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DiscoveredAreaPercentageCondition_ComparisonMode__Enum__Class>(type_info(), "", "DiscoveredAreaPercentageCondition", "ComparisonMode");
        }
        inline app::DiscoveredAreaPercentageCondition_ComparisonMode__Enum* create() {
            return il2cpp::create_object<app::DiscoveredAreaPercentageCondition_ComparisonMode__Enum>(get_class());
        }
    } // namespace DiscoveredAreaPercentageCondition_ComparisonMode__Enum
} // namespace app::classes::types
