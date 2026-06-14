#pragma once
#include <Modloader/app/structs/MoonTelemetryClientBaseEvent.h>
#include <Modloader/app/structs/MoonTelemetryClientBaseEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryClientBaseEvent {
        inline app::MoonTelemetryClientBaseEvent__Class** type_info() {
            static app::MoonTelemetryClientBaseEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetryClientBaseEvent__Class**)(modloader::win::memory::resolve_rva(0x04721100));
            }
            return cache;
        }
        inline app::MoonTelemetryClientBaseEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryClientBaseEvent__Class>(type_info(), "", "MoonTelemetryClientBaseEvent");
        }
        inline app::MoonTelemetryClientBaseEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryClientBaseEvent>(get_class());
        }
    } // namespace MoonTelemetryClientBaseEvent
} // namespace app::classes::types
