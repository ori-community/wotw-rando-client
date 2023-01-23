#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonTelemetryRacesStartEvent_RaceID__Enum__Class.h>
#include <Modloader/app/structs/MoonTelemetryRacesStartEvent_RaceID__Enum.h>

namespace app::classes::types {
    namespace MoonTelemetryRacesStartEvent_RaceID__Enum {
        inline app::MoonTelemetryRacesStartEvent_RaceID__Enum__Class** type_info = (app::MoonTelemetryRacesStartEvent_RaceID__Enum__Class**)(modloader::win::memory::resolve_rva(0x047103F8));
        inline app::MoonTelemetryRacesStartEvent_RaceID__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetryRacesStartEvent_RaceID__Enum__Class>(type_info, "", "MoonTelemetryRacesStartEvent", "RaceID");
        }
        inline app::MoonTelemetryRacesStartEvent_RaceID__Enum* create() {
            return il2cpp::create_object<app::MoonTelemetryRacesStartEvent_RaceID__Enum>(get_class());
        }
    } // namespace MoonTelemetryRacesStartEvent_RaceID__Enum
} // namespace app::classes::types
