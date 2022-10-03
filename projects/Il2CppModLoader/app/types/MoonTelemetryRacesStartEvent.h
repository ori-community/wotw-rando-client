#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryRacesStartEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetryRacesStartEvent__Class** type_info;
        inline app::MoonTelemetryRacesStartEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryRacesStartEvent__Class>(type_info, "", "MoonTelemetryRacesStartEvent");
        }
        inline app::MoonTelemetryRacesStartEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryRacesStartEvent>(get_class());
        }
    } // namespace MoonTelemetryRacesStartEvent
} // namespace app::classes::types
