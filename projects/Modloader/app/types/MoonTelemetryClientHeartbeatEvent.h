#pragma once
#include <Modloader/app/structs/MoonTelemetryClientHeartbeatEvent.h>
#include <Modloader/app/structs/MoonTelemetryClientHeartbeatEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryClientHeartbeatEvent {
        inline app::MoonTelemetryClientHeartbeatEvent__Class** type_info() {
            static app::MoonTelemetryClientHeartbeatEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTelemetryClientHeartbeatEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTelemetryClientHeartbeatEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryClientHeartbeatEvent__Class>(type_info(), "", "MoonTelemetryClientHeartbeatEvent");
        }
        inline app::MoonTelemetryClientHeartbeatEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryClientHeartbeatEvent>(get_class());
        }
    } // namespace MoonTelemetryClientHeartbeatEvent
} // namespace app::classes::types
