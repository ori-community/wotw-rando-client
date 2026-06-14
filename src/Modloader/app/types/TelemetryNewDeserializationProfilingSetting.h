#pragma once
#include <Modloader/app/structs/TelemetryNewDeserializationProfilingSetting.h>
#include <Modloader/app/structs/TelemetryNewDeserializationProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TelemetryNewDeserializationProfilingSetting {
        inline app::TelemetryNewDeserializationProfilingSetting__Class** type_info() {
            static app::TelemetryNewDeserializationProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TelemetryNewDeserializationProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TelemetryNewDeserializationProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::TelemetryNewDeserializationProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "TelemetryNewDeserializationProfilingSetting");
        }
        inline app::TelemetryNewDeserializationProfilingSetting* create() {
            return il2cpp::create_object<app::TelemetryNewDeserializationProfilingSetting>(get_class());
        }
    } // namespace TelemetryNewDeserializationProfilingSetting
} // namespace app::classes::types
