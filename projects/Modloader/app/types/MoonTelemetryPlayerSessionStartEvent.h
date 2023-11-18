#pragma once
#include <Modloader/app/structs/MoonTelemetryPlayerSessionStartEvent.h>
#include <Modloader/app/structs/MoonTelemetryPlayerSessionStartEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryPlayerSessionStartEvent {
        inline app::MoonTelemetryPlayerSessionStartEvent__Class** type_info() {
            static app::MoonTelemetryPlayerSessionStartEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetryPlayerSessionStartEvent__Class**)(modloader::win::memory::resolve_rva(0x04794B48));
            }
            return cache;
        }
        inline app::MoonTelemetryPlayerSessionStartEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryPlayerSessionStartEvent__Class>(type_info(), "", "MoonTelemetryPlayerSessionStartEvent");
        }
        inline app::MoonTelemetryPlayerSessionStartEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryPlayerSessionStartEvent>(get_class());
        }
    } // namespace MoonTelemetryPlayerSessionStartEvent
} // namespace app::classes::types
