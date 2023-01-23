#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonTelemetryWebConfig__Class.h>
#include <Modloader/app/structs/MoonTelemetryWebConfig.h>

namespace app::classes::types {
    namespace MoonTelemetryWebConfig {
        inline app::MoonTelemetryWebConfig__Class** type_info = (app::MoonTelemetryWebConfig__Class**)(modloader::win::memory::resolve_rva(0x047843D8));
        inline app::MoonTelemetryWebConfig__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryWebConfig__Class>(type_info, "Moon.Telemetry.Web", "MoonTelemetryWebConfig");
        }
        inline app::MoonTelemetryWebConfig* create() {
            return il2cpp::create_object<app::MoonTelemetryWebConfig>(get_class());
        }
    } // namespace MoonTelemetryWebConfig
} // namespace app::classes::types
