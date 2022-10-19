#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetryRacesStartEvent {
        inline app::MoonTelemetryRacesStartEvent__Class** type_info = (app::MoonTelemetryRacesStartEvent__Class**)(modloader::win::memory::resolve_rva(0x04741610));
        inline app::MoonTelemetryRacesStartEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryRacesStartEvent__Class>(type_info, "", "MoonTelemetryRacesStartEvent");
        }
        inline app::MoonTelemetryRacesStartEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryRacesStartEvent>(get_class());
        }
    } // namespace MoonTelemetryRacesStartEvent
} // namespace app::classes::types
