#pragma once
#include <Modloader/app/structs/ScenarioRootTimeline.h>
#include <Modloader/app/structs/ScenarioRootTimeline__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenarioRootTimeline {
        inline app::ScenarioRootTimeline__Class** type_info() {
            static app::ScenarioRootTimeline__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScenarioRootTimeline__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScenarioRootTimeline__Class* get_class() {
            return il2cpp::get_class<app::ScenarioRootTimeline__Class>(type_info(), "Moon.Timeline", "ScenarioRootTimeline");
        }
        inline app::ScenarioRootTimeline* create() {
            return il2cpp::create_object<app::ScenarioRootTimeline>(get_class());
        }
    } // namespace ScenarioRootTimeline
} // namespace app::classes::types
