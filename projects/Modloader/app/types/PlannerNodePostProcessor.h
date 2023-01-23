#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlannerNodePostProcessor__Class.h>
#include <Modloader/app/structs/PlannerNodePostProcessor.h>

namespace app::classes::types {
    namespace PlannerNodePostProcessor {
        namespace {
            inline app::PlannerNodePostProcessor__Class* type_info_ref = nullptr;
        }
        inline app::PlannerNodePostProcessor__Class** type_info = &type_info_ref;
        inline app::PlannerNodePostProcessor__Class* get_class() {
            return il2cpp::get_class<app::PlannerNodePostProcessor__Class>(type_info, "MoonNavigation.Planner", "PlannerNodePostProcessor");
        }
        inline app::PlannerNodePostProcessor* create() {
            return il2cpp::create_object<app::PlannerNodePostProcessor>(get_class());
        }
    } // namespace PlannerNodePostProcessor
} // namespace app::classes::types
