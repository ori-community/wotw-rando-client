#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryWebConfig {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetryWebConfig__Class** type_info;
        inline app::MoonTelemetryWebConfig__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryWebConfig__Class>(type_info, "Moon.Telemetry.Web", "MoonTelemetryWebConfig");
        }
        inline app::MoonTelemetryWebConfig* create() {
            return il2cpp::create_object<app::MoonTelemetryWebConfig>(get_class());
        }
    } // namespace MoonTelemetryWebConfig
} // namespace app::classes::types
