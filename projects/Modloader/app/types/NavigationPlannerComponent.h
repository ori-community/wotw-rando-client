#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NavigationPlannerComponent {
        namespace {
            inline app::NavigationPlannerComponent__Class* type_info_ref = nullptr;
        }
        inline app::NavigationPlannerComponent__Class** type_info = &type_info_ref;
        inline app::NavigationPlannerComponent__Class* get_class() {
            return il2cpp::get_class<app::NavigationPlannerComponent__Class>(type_info, "", "NavigationPlannerComponent");
        }
        inline app::NavigationPlannerComponent* create() {
            return il2cpp::create_object<app::NavigationPlannerComponent>(get_class());
        }
    } // namespace NavigationPlannerComponent
} // namespace app::classes::types
