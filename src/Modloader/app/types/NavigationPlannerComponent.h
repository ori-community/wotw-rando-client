#pragma once
#include <Modloader/app/structs/NavigationPlannerComponent.h>
#include <Modloader/app/structs/NavigationPlannerComponent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NavigationPlannerComponent {
        inline app::NavigationPlannerComponent__Class** type_info() {
            static app::NavigationPlannerComponent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NavigationPlannerComponent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NavigationPlannerComponent__Class* get_class() {
            return il2cpp::get_class<app::NavigationPlannerComponent__Class>(type_info(), "", "NavigationPlannerComponent");
        }
        inline app::NavigationPlannerComponent* create() {
            return il2cpp::create_object<app::NavigationPlannerComponent>(get_class());
        }
    } // namespace NavigationPlannerComponent
} // namespace app::classes::types
