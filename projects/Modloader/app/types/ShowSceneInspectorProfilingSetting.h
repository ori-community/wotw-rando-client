#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowSceneInspectorProfilingSetting {
        namespace {
            inline app::ShowSceneInspectorProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::ShowSceneInspectorProfilingSetting__Class** type_info = &type_info_ref;
        inline app::ShowSceneInspectorProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ShowSceneInspectorProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "ShowSceneInspectorProfilingSetting");
        }
        inline app::ShowSceneInspectorProfilingSetting* create() {
            return il2cpp::create_object<app::ShowSceneInspectorProfilingSetting>(get_class());
        }
    } // namespace ShowSceneInspectorProfilingSetting
} // namespace app::classes::types
