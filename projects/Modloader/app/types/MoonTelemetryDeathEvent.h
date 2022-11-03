#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetryDeathEvent {
        inline app::MoonTelemetryDeathEvent__Class** type_info = (app::MoonTelemetryDeathEvent__Class**)(modloader::win::memory::resolve_rva(0x04704370));
        inline app::MoonTelemetryDeathEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryDeathEvent__Class>(type_info, "", "MoonTelemetryDeathEvent");
        }
        inline app::MoonTelemetryDeathEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryDeathEvent>(get_class());
        }
    } // namespace MoonTelemetryDeathEvent
} // namespace app::classes::types
