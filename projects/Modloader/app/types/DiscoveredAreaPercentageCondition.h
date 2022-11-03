#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DiscoveredAreaPercentageCondition {
        namespace {
            inline app::DiscoveredAreaPercentageCondition__Class* type_info_ref = nullptr;
        }
        inline app::DiscoveredAreaPercentageCondition__Class** type_info = &type_info_ref;
        inline app::DiscoveredAreaPercentageCondition__Class* get_class() {
            return il2cpp::get_class<app::DiscoveredAreaPercentageCondition__Class>(type_info, "", "DiscoveredAreaPercentageCondition");
        }
        inline app::DiscoveredAreaPercentageCondition* create() {
            return il2cpp::create_object<app::DiscoveredAreaPercentageCondition>(get_class());
        }
    } // namespace DiscoveredAreaPercentageCondition
} // namespace app::classes::types
