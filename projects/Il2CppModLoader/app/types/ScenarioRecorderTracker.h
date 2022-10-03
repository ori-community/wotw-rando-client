#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenarioRecorderTracker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScenarioRecorderTracker__Class** type_info;
        inline app::ScenarioRecorderTracker__Class* get_class() {
            return il2cpp::get_class<app::ScenarioRecorderTracker__Class>(type_info, "", "ScenarioRecorderTracker");
        }
        inline app::ScenarioRecorderTracker* create() {
            return il2cpp::create_object<app::ScenarioRecorderTracker>(get_class());
        }
    } // namespace ScenarioRecorderTracker
} // namespace app::classes::types
