#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonTelemetrySpawnEvent_SpawnReason__Enum__Class.h>
#include <Modloader/app/structs/MoonTelemetrySpawnEvent_SpawnReason__Enum.h>

namespace app::classes::types {
    namespace MoonTelemetrySpawnEvent_SpawnReason__Enum {
        inline app::MoonTelemetrySpawnEvent_SpawnReason__Enum__Class** type_info = (app::MoonTelemetrySpawnEvent_SpawnReason__Enum__Class**)(modloader::win::memory::resolve_rva(0x04731D50));
        inline app::MoonTelemetrySpawnEvent_SpawnReason__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetrySpawnEvent_SpawnReason__Enum__Class>(type_info, "", "MoonTelemetrySpawnEvent", "SpawnReason");
        }
        inline app::MoonTelemetrySpawnEvent_SpawnReason__Enum* create() {
            return il2cpp::create_object<app::MoonTelemetrySpawnEvent_SpawnReason__Enum>(get_class());
        }
    } // namespace MoonTelemetrySpawnEvent_SpawnReason__Enum
} // namespace app::classes::types
