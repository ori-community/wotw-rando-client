#pragma once
#include <Modloader/app/structs/PathfindingNavigationAgent.h>
#include <Modloader/app/structs/PathfindingNavigationAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PathfindingNavigationAgent {
        inline app::PathfindingNavigationAgent__Class** type_info() {
            static app::PathfindingNavigationAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PathfindingNavigationAgent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PathfindingNavigationAgent__Class* get_class() {
            return il2cpp::get_class<app::PathfindingNavigationAgent__Class>(type_info(), "MoonNavigation", "PathfindingNavigationAgent");
        }
        inline app::PathfindingNavigationAgent* create() {
            return il2cpp::create_object<app::PathfindingNavigationAgent>(get_class());
        }
    } // namespace PathfindingNavigationAgent
} // namespace app::classes::types
