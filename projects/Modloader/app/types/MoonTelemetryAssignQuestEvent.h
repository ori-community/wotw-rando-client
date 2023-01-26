#pragma once
#include <Modloader/app/structs/MoonTelemetryAssignQuestEvent.h>
#include <Modloader/app/structs/MoonTelemetryAssignQuestEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryAssignQuestEvent {
        inline app::MoonTelemetryAssignQuestEvent__Class** type_info() {
            static app::MoonTelemetryAssignQuestEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetryAssignQuestEvent__Class**)(modloader::win::memory::resolve_rva(0x04784000));
            }
            return cache;
        }
        inline app::MoonTelemetryAssignQuestEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryAssignQuestEvent__Class>(type_info(), "", "MoonTelemetryAssignQuestEvent");
        }
        inline app::MoonTelemetryAssignQuestEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryAssignQuestEvent>(get_class());
        }
    } // namespace MoonTelemetryAssignQuestEvent
} // namespace app::classes::types
