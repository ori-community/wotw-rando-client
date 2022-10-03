#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HasVisitedOrDiscoveredAreaCondition {
        namespace {
            app::HasVisitedOrDiscoveredAreaCondition__Class* type_info_ref = nullptr;
        }
        app::HasVisitedOrDiscoveredAreaCondition__Class** type_info = &type_info_ref;
        inline app::HasVisitedOrDiscoveredAreaCondition__Class* get_class() {
            return il2cpp::get_class<app::HasVisitedOrDiscoveredAreaCondition__Class>(type_info, "", "HasVisitedOrDiscoveredAreaCondition");
        }
        inline app::HasVisitedOrDiscoveredAreaCondition* create() {
            return il2cpp::create_object<app::HasVisitedOrDiscoveredAreaCondition>(get_class());
        }
    } // namespace HasVisitedOrDiscoveredAreaCondition
} // namespace app::classes::types
