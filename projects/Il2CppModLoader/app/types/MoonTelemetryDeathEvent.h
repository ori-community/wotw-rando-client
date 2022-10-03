#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryDeathEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetryDeathEvent__Class** type_info;
        inline app::MoonTelemetryDeathEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryDeathEvent__Class>(type_info, "", "MoonTelemetryDeathEvent");
        }
        inline app::MoonTelemetryDeathEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryDeathEvent>(get_class());
        }
    } // namespace MoonTelemetryDeathEvent
} // namespace app::classes::types
