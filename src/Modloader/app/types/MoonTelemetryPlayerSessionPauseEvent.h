#pragma once
#include <Modloader/app/structs/MoonTelemetryPlayerSessionPauseEvent.h>
#include <Modloader/app/structs/MoonTelemetryPlayerSessionPauseEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryPlayerSessionPauseEvent {
        inline app::MoonTelemetryPlayerSessionPauseEvent__Class** type_info() {
            static app::MoonTelemetryPlayerSessionPauseEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTelemetryPlayerSessionPauseEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTelemetryPlayerSessionPauseEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryPlayerSessionPauseEvent__Class>(type_info(), "", "MoonTelemetryPlayerSessionPauseEvent");
        }
        inline app::MoonTelemetryPlayerSessionPauseEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryPlayerSessionPauseEvent>(get_class());
        }
    } // namespace MoonTelemetryPlayerSessionPauseEvent
} // namespace app::classes::types
