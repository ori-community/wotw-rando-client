#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryAbilityChangeEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetryAbilityChangeEvent__Class** type_info;
        inline app::MoonTelemetryAbilityChangeEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryAbilityChangeEvent__Class>(type_info, "", "MoonTelemetryAbilityChangeEvent");
        }
        inline app::MoonTelemetryAbilityChangeEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryAbilityChangeEvent>(get_class());
        }
    } // namespace MoonTelemetryAbilityChangeEvent
} // namespace app::classes::types
