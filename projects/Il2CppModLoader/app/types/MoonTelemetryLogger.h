#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryLogger {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetryLogger__Class** type_info;
        inline app::MoonTelemetryLogger__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryLogger__Class>(type_info, "Moon.Telemetry", "MoonTelemetryLogger");
        }
        inline app::MoonTelemetryLogger* create() {
            return il2cpp::create_object<app::MoonTelemetryLogger>(get_class());
        }
    } // namespace MoonTelemetryLogger
} // namespace app::classes::types
