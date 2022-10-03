#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetrySpawnEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetrySpawnEvent__Class** type_info;
        inline app::MoonTelemetrySpawnEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetrySpawnEvent__Class>(type_info, "", "MoonTelemetrySpawnEvent");
        }
        inline app::MoonTelemetrySpawnEvent* create() {
            return il2cpp::create_object<app::MoonTelemetrySpawnEvent>(get_class());
        }
    } // namespace MoonTelemetrySpawnEvent
} // namespace app::classes::types
