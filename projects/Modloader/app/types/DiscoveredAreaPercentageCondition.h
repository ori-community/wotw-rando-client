#pragma once
#include <Modloader/app/structs/DiscoveredAreaPercentageCondition.h>
#include <Modloader/app/structs/DiscoveredAreaPercentageCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DiscoveredAreaPercentageCondition {
        inline app::DiscoveredAreaPercentageCondition__Class** type_info() {
            static app::DiscoveredAreaPercentageCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DiscoveredAreaPercentageCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DiscoveredAreaPercentageCondition__Class* get_class() {
            return il2cpp::get_class<app::DiscoveredAreaPercentageCondition__Class>(type_info(), "", "DiscoveredAreaPercentageCondition");
        }
        inline app::DiscoveredAreaPercentageCondition* create() {
            return il2cpp::create_object<app::DiscoveredAreaPercentageCondition>(get_class());
        }
    } // namespace DiscoveredAreaPercentageCondition
} // namespace app::classes::types
