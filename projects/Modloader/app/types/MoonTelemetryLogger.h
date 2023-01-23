#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonTelemetryLogger__Class.h>
#include <Modloader/app/structs/MoonTelemetryLogger.h>

namespace app::classes::types {
    namespace MoonTelemetryLogger {
        inline app::MoonTelemetryLogger__Class** type_info = (app::MoonTelemetryLogger__Class**)(modloader::win::memory::resolve_rva(0x047374E8));
        inline app::MoonTelemetryLogger__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryLogger__Class>(type_info, "Moon.Telemetry", "MoonTelemetryLogger");
        }
        inline app::MoonTelemetryLogger* create() {
            return il2cpp::create_object<app::MoonTelemetryLogger>(get_class());
        }
    } // namespace MoonTelemetryLogger
} // namespace app::classes::types
