#pragma once
#include <Modloader/app/structs/MoonTelemetryRacesEndEvent.h>
#include <Modloader/app/structs/MoonTelemetryRacesEndEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryRacesEndEvent {
        inline app::MoonTelemetryRacesEndEvent__Class** type_info() {
            static app::MoonTelemetryRacesEndEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetryRacesEndEvent__Class**)(modloader::win::memory::resolve_rva(0x0476CFA0));
            }
            return cache;
        }
        inline app::MoonTelemetryRacesEndEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryRacesEndEvent__Class>(type_info(), "", "MoonTelemetryRacesEndEvent");
        }
        inline app::MoonTelemetryRacesEndEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryRacesEndEvent>(get_class());
        }
    } // namespace MoonTelemetryRacesEndEvent
} // namespace app::classes::types
