#pragma once
#include <Modloader/app/structs/HasVisitedOrDiscoveredAreaCondition.h>
#include <Modloader/app/structs/HasVisitedOrDiscoveredAreaCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HasVisitedOrDiscoveredAreaCondition {
        inline app::HasVisitedOrDiscoveredAreaCondition__Class** type_info() {
            static app::HasVisitedOrDiscoveredAreaCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HasVisitedOrDiscoveredAreaCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HasVisitedOrDiscoveredAreaCondition__Class* get_class() {
            return il2cpp::get_class<app::HasVisitedOrDiscoveredAreaCondition__Class>(type_info(), "", "HasVisitedOrDiscoveredAreaCondition");
        }
        inline app::HasVisitedOrDiscoveredAreaCondition* create() {
            return il2cpp::create_object<app::HasVisitedOrDiscoveredAreaCondition>(get_class());
        }
    } // namespace HasVisitedOrDiscoveredAreaCondition
} // namespace app::classes::types
