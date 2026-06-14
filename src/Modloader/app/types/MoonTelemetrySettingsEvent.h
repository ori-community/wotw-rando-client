#pragma once
#include <Modloader/app/structs/MoonTelemetrySettingsEvent.h>
#include <Modloader/app/structs/MoonTelemetrySettingsEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetrySettingsEvent {
        inline app::MoonTelemetrySettingsEvent__Class** type_info() {
            static app::MoonTelemetrySettingsEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetrySettingsEvent__Class**)(modloader::win::memory::resolve_rva(0x04716B00));
            }
            return cache;
        }
        inline app::MoonTelemetrySettingsEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetrySettingsEvent__Class>(type_info(), "", "MoonTelemetrySettingsEvent");
        }
        inline app::MoonTelemetrySettingsEvent* create() {
            return il2cpp::create_object<app::MoonTelemetrySettingsEvent>(get_class());
        }
    } // namespace MoonTelemetrySettingsEvent
} // namespace app::classes::types
