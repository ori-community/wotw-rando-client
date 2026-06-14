#pragma once
#include <Modloader/app/structs/MoonTelemetryPlayerSessionEndEvent.h>
#include <Modloader/app/structs/MoonTelemetryPlayerSessionEndEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryPlayerSessionEndEvent {
        inline app::MoonTelemetryPlayerSessionEndEvent__Class** type_info() {
            static app::MoonTelemetryPlayerSessionEndEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetryPlayerSessionEndEvent__Class**)(modloader::win::memory::resolve_rva(0x04748AB8));
            }
            return cache;
        }
        inline app::MoonTelemetryPlayerSessionEndEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryPlayerSessionEndEvent__Class>(type_info(), "", "MoonTelemetryPlayerSessionEndEvent");
        }
        inline app::MoonTelemetryPlayerSessionEndEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryPlayerSessionEndEvent>(get_class());
        }
    } // namespace MoonTelemetryPlayerSessionEndEvent
} // namespace app::classes::types
