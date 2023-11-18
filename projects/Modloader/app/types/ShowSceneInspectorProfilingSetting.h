#pragma once
#include <Modloader/app/structs/ShowSceneInspectorProfilingSetting.h>
#include <Modloader/app/structs/ShowSceneInspectorProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowSceneInspectorProfilingSetting {
        inline app::ShowSceneInspectorProfilingSetting__Class** type_info() {
            static app::ShowSceneInspectorProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowSceneInspectorProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowSceneInspectorProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ShowSceneInspectorProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "ShowSceneInspectorProfilingSetting");
        }
        inline app::ShowSceneInspectorProfilingSetting* create() {
            return il2cpp::create_object<app::ShowSceneInspectorProfilingSetting>(get_class());
        }
    } // namespace ShowSceneInspectorProfilingSetting
} // namespace app::classes::types
