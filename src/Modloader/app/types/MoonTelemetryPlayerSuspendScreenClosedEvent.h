#pragma once
#include <Modloader/app/structs/MoonTelemetryPlayerSuspendScreenClosedEvent.h>
#include <Modloader/app/structs/MoonTelemetryPlayerSuspendScreenClosedEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryPlayerSuspendScreenClosedEvent {
        inline app::MoonTelemetryPlayerSuspendScreenClosedEvent__Class** type_info() {
            static app::MoonTelemetryPlayerSuspendScreenClosedEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTelemetryPlayerSuspendScreenClosedEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTelemetryPlayerSuspendScreenClosedEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryPlayerSuspendScreenClosedEvent__Class>(type_info(), "", "MoonTelemetryPlayerSuspendScreenClosedEvent");
        }
        inline app::MoonTelemetryPlayerSuspendScreenClosedEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryPlayerSuspendScreenClosedEvent>(get_class());
        }
    } // namespace MoonTelemetryPlayerSuspendScreenClosedEvent
} // namespace app::classes::types
