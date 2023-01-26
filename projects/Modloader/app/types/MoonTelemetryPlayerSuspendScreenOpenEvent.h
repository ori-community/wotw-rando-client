#pragma once
#include <Modloader/app/structs/MoonTelemetryPlayerSuspendScreenOpenEvent.h>
#include <Modloader/app/structs/MoonTelemetryPlayerSuspendScreenOpenEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryPlayerSuspendScreenOpenEvent {
        inline app::MoonTelemetryPlayerSuspendScreenOpenEvent__Class** type_info() {
            static app::MoonTelemetryPlayerSuspendScreenOpenEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTelemetryPlayerSuspendScreenOpenEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTelemetryPlayerSuspendScreenOpenEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryPlayerSuspendScreenOpenEvent__Class>(type_info(), "", "MoonTelemetryPlayerSuspendScreenOpenEvent");
        }
        inline app::MoonTelemetryPlayerSuspendScreenOpenEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryPlayerSuspendScreenOpenEvent>(get_class());
        }
    } // namespace MoonTelemetryPlayerSuspendScreenOpenEvent
} // namespace app::classes::types
