#pragma once
#include <Modloader/app/structs/TelemetryDeserializationDebugProfilingSetting.h>
#include <Modloader/app/structs/TelemetryDeserializationDebugProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TelemetryDeserializationDebugProfilingSetting {
        inline app::TelemetryDeserializationDebugProfilingSetting__Class** type_info() {
            static app::TelemetryDeserializationDebugProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TelemetryDeserializationDebugProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TelemetryDeserializationDebugProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::TelemetryDeserializationDebugProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "TelemetryDeserializationDebugProfilingSetting");
        }
        inline app::TelemetryDeserializationDebugProfilingSetting* create() {
            return il2cpp::create_object<app::TelemetryDeserializationDebugProfilingSetting>(get_class());
        }
    } // namespace TelemetryDeserializationDebugProfilingSetting
} // namespace app::classes::types
