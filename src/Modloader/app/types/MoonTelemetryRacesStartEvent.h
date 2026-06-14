#pragma once
#include <Modloader/app/structs/MoonTelemetryRacesStartEvent.h>
#include <Modloader/app/structs/MoonTelemetryRacesStartEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryRacesStartEvent {
        inline app::MoonTelemetryRacesStartEvent__Class** type_info() {
            static app::MoonTelemetryRacesStartEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetryRacesStartEvent__Class**)(modloader::win::memory::resolve_rva(0x04741610));
            }
            return cache;
        }
        inline app::MoonTelemetryRacesStartEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryRacesStartEvent__Class>(type_info(), "", "MoonTelemetryRacesStartEvent");
        }
        inline app::MoonTelemetryRacesStartEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryRacesStartEvent>(get_class());
        }
    } // namespace MoonTelemetryRacesStartEvent
} // namespace app::classes::types
