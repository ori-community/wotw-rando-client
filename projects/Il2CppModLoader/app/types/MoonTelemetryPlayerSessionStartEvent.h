#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryPlayerSessionStartEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetryPlayerSessionStartEvent__Class** type_info;
        inline app::MoonTelemetryPlayerSessionStartEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryPlayerSessionStartEvent__Class>(type_info, "", "MoonTelemetryPlayerSessionStartEvent");
        }
        inline app::MoonTelemetryPlayerSessionStartEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryPlayerSessionStartEvent>(get_class());
        }
    } // namespace MoonTelemetryPlayerSessionStartEvent
} // namespace app::classes::types
