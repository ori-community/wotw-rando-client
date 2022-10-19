#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScenarioRootTimeline {
        namespace {
            inline app::ScenarioRootTimeline__Class* type_info_ref = nullptr;
        }
        inline app::ScenarioRootTimeline__Class** type_info = &type_info_ref;
        inline app::ScenarioRootTimeline__Class* get_class() {
            return il2cpp::get_class<app::ScenarioRootTimeline__Class>(type_info, "Moon.Timeline", "ScenarioRootTimeline");
        }
        inline app::ScenarioRootTimeline* create() {
            return il2cpp::create_object<app::ScenarioRootTimeline>(get_class());
        }
    } // namespace ScenarioRootTimeline
} // namespace app::classes::types
