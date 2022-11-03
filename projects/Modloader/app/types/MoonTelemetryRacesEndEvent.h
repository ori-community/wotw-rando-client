#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetryRacesEndEvent {
        inline app::MoonTelemetryRacesEndEvent__Class** type_info = (app::MoonTelemetryRacesEndEvent__Class**)(modloader::win::memory::resolve_rva(0x0476CFA0));
        inline app::MoonTelemetryRacesEndEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryRacesEndEvent__Class>(type_info, "", "MoonTelemetryRacesEndEvent");
        }
        inline app::MoonTelemetryRacesEndEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryRacesEndEvent>(get_class());
        }
    } // namespace MoonTelemetryRacesEndEvent
} // namespace app::classes::types
