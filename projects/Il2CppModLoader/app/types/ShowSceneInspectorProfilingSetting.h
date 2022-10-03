#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShowSceneInspectorProfilingSetting {
        namespace {
            app::ShowSceneInspectorProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::ShowSceneInspectorProfilingSetting__Class** type_info = &type_info_ref;
        inline app::ShowSceneInspectorProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ShowSceneInspectorProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "ShowSceneInspectorProfilingSetting");
        }
        inline app::ShowSceneInspectorProfilingSetting* create() {
            return il2cpp::create_object<app::ShowSceneInspectorProfilingSetting>(get_class());
        }
    } // namespace ShowSceneInspectorProfilingSetting
} // namespace app::classes::types
