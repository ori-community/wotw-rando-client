#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryRacesStartEvent_RaceID__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetryRacesStartEvent_RaceID__Enum__Class** type_info;
        inline app::MoonTelemetryRacesStartEvent_RaceID__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetryRacesStartEvent_RaceID__Enum__Class>(type_info, "", "MoonTelemetryRacesStartEvent", "RaceID");
        }
        inline app::MoonTelemetryRacesStartEvent_RaceID__Enum* create() {
            return il2cpp::create_object<app::MoonTelemetryRacesStartEvent_RaceID__Enum>(get_class());
        }
    } // namespace MoonTelemetryRacesStartEvent_RaceID__Enum
} // namespace app::classes::types
