#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetrySettingsEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetrySettingsEvent__Class** type_info;
        inline app::MoonTelemetrySettingsEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetrySettingsEvent__Class>(type_info, "", "MoonTelemetrySettingsEvent");
        }
        inline app::MoonTelemetrySettingsEvent* create() {
            return il2cpp::create_object<app::MoonTelemetrySettingsEvent>(get_class());
        }
    } // namespace MoonTelemetrySettingsEvent
} // namespace app::classes::types
