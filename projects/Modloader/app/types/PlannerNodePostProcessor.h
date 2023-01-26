#pragma once
#include <Modloader/app/structs/PlannerNodePostProcessor.h>
#include <Modloader/app/structs/PlannerNodePostProcessor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlannerNodePostProcessor {
        inline app::PlannerNodePostProcessor__Class** type_info() {
            static app::PlannerNodePostProcessor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlannerNodePostProcessor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlannerNodePostProcessor__Class* get_class() {
            return il2cpp::get_class<app::PlannerNodePostProcessor__Class>(type_info(), "MoonNavigation.Planner", "PlannerNodePostProcessor");
        }
        inline app::PlannerNodePostProcessor* create() {
            return il2cpp::create_object<app::PlannerNodePostProcessor>(get_class());
        }
    } // namespace PlannerNodePostProcessor
} // namespace app::classes::types
