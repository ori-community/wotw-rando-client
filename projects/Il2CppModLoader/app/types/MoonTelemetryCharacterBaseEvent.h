#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryCharacterBaseEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetryCharacterBaseEvent__Class** type_info;
        inline app::MoonTelemetryCharacterBaseEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryCharacterBaseEvent__Class>(type_info, "", "MoonTelemetryCharacterBaseEvent");
        }
        inline app::MoonTelemetryCharacterBaseEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryCharacterBaseEvent>(get_class());
        }
    } // namespace MoonTelemetryCharacterBaseEvent
} // namespace app::classes::types
