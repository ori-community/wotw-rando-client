#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryRacesEndEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetryRacesEndEvent__Class** type_info;
        inline app::MoonTelemetryRacesEndEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryRacesEndEvent__Class>(type_info, "", "MoonTelemetryRacesEndEvent");
        }
        inline app::MoonTelemetryRacesEndEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryRacesEndEvent>(get_class());
        }
    } // namespace MoonTelemetryRacesEndEvent
} // namespace app::classes::types
