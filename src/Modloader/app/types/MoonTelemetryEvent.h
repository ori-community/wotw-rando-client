#pragma once
#include <Modloader/app/structs/MoonTelemetryEvent.h>
#include <Modloader/app/structs/MoonTelemetryEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryEvent {
        inline app::MoonTelemetryEvent__Class** type_info() {
            static app::MoonTelemetryEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTelemetryEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTelemetryEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryEvent__Class>(type_info(), "", "MoonTelemetryEvent");
        }
        inline app::MoonTelemetryEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryEvent>(get_class());
        }
    } // namespace MoonTelemetryEvent
} // namespace app::classes::types
