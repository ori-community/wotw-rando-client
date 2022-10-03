#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PathfindingNavigationAgent {
        namespace {
            app::PathfindingNavigationAgent__Class* type_info_ref = nullptr;
        }
        app::PathfindingNavigationAgent__Class** type_info = &type_info_ref;
        inline app::PathfindingNavigationAgent__Class* get_class() {
            return il2cpp::get_class<app::PathfindingNavigationAgent__Class>(type_info, "MoonNavigation", "PathfindingNavigationAgent");
        }
        inline app::PathfindingNavigationAgent* create() {
            return il2cpp::create_object<app::PathfindingNavigationAgent>(get_class());
        }
    } // namespace PathfindingNavigationAgent
} // namespace app::classes::types
