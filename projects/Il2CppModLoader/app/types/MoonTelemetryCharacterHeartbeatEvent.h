#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetryCharacterHeartbeatEvent {
        inline app::MoonTelemetryCharacterHeartbeatEvent__Class** type_info = (app::MoonTelemetryCharacterHeartbeatEvent__Class**)(modloader::win::memory::resolve_rva(0x0472C4B8));
        inline app::MoonTelemetryCharacterHeartbeatEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryCharacterHeartbeatEvent__Class>(type_info, "", "MoonTelemetryCharacterHeartbeatEvent");
        }
        inline app::MoonTelemetryCharacterHeartbeatEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryCharacterHeartbeatEvent>(get_class());
        }
    } // namespace MoonTelemetryCharacterHeartbeatEvent
} // namespace app::classes::types
