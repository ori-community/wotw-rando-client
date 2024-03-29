#pragma once
#include <Modloader/app/structs/MoonTelemetrySceneEvent_SceneData.h>
#include <Modloader/app/structs/MoonTelemetrySceneEvent_SceneData__Boxed.h>
#include <Modloader/app/structs/MoonTelemetrySceneEvent_SceneData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetrySceneEvent_SceneData {
        inline app::MoonTelemetrySceneEvent_SceneData__Class** type_info() {
            static app::MoonTelemetrySceneEvent_SceneData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTelemetrySceneEvent_SceneData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTelemetrySceneEvent_SceneData__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetrySceneEvent_SceneData__Class>(type_info(), "", "MoonTelemetrySceneEvent", "SceneData");
        }
        inline app::MoonTelemetrySceneEvent_SceneData* create() {
            return il2cpp::create_object<app::MoonTelemetrySceneEvent_SceneData>(get_class());
        }
        inline app::MoonTelemetrySceneEvent_SceneData__Boxed* box(app::MoonTelemetrySceneEvent_SceneData value) {
            return il2cpp::box_value<app::MoonTelemetrySceneEvent_SceneData__Boxed>(get_class(), value);
        }
    } // namespace MoonTelemetrySceneEvent_SceneData
} // namespace app::classes::types
