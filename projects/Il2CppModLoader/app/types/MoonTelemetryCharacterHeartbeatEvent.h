#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryCharacterHeartbeatEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetryCharacterHeartbeatEvent__Class** type_info;
        inline app::MoonTelemetryCharacterHeartbeatEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryCharacterHeartbeatEvent__Class>(type_info, "", "MoonTelemetryCharacterHeartbeatEvent");
        }
        inline app::MoonTelemetryCharacterHeartbeatEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryCharacterHeartbeatEvent>(get_class());
        }
    } // namespace MoonTelemetryCharacterHeartbeatEvent
} // namespace app::classes::types
