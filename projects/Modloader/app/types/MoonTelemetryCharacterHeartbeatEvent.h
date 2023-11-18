#pragma once
#include <Modloader/app/structs/MoonTelemetryCharacterHeartbeatEvent.h>
#include <Modloader/app/structs/MoonTelemetryCharacterHeartbeatEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryCharacterHeartbeatEvent {
        inline app::MoonTelemetryCharacterHeartbeatEvent__Class** type_info() {
            static app::MoonTelemetryCharacterHeartbeatEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetryCharacterHeartbeatEvent__Class**)(modloader::win::memory::resolve_rva(0x0472C4B8));
            }
            return cache;
        }
        inline app::MoonTelemetryCharacterHeartbeatEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryCharacterHeartbeatEvent__Class>(type_info(), "", "MoonTelemetryCharacterHeartbeatEvent");
        }
        inline app::MoonTelemetryCharacterHeartbeatEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryCharacterHeartbeatEvent>(get_class());
        }
    } // namespace MoonTelemetryCharacterHeartbeatEvent
} // namespace app::classes::types
