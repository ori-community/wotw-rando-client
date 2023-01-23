#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TelemetryDeserializationDebugProfilingSetting__Class.h>
#include <Modloader/app/structs/TelemetryDeserializationDebugProfilingSetting.h>

namespace app::classes::types {
    namespace TelemetryDeserializationDebugProfilingSetting {
        namespace {
            inline app::TelemetryDeserializationDebugProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::TelemetryDeserializationDebugProfilingSetting__Class** type_info = &type_info_ref;
        inline app::TelemetryDeserializationDebugProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::TelemetryDeserializationDebugProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "TelemetryDeserializationDebugProfilingSetting");
        }
        inline app::TelemetryDeserializationDebugProfilingSetting* create() {
            return il2cpp::create_object<app::TelemetryDeserializationDebugProfilingSetting>(get_class());
        }
    } // namespace TelemetryDeserializationDebugProfilingSetting
} // namespace app::classes::types
