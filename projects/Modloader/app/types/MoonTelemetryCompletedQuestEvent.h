#pragma once
#include <Modloader/app/structs/MoonTelemetryCompletedQuestEvent.h>
#include <Modloader/app/structs/MoonTelemetryCompletedQuestEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryCompletedQuestEvent {
        inline app::MoonTelemetryCompletedQuestEvent__Class** type_info() {
            static app::MoonTelemetryCompletedQuestEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetryCompletedQuestEvent__Class**)(modloader::win::memory::resolve_rva(0x047392D8));
            }
            return cache;
        }
        inline app::MoonTelemetryCompletedQuestEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryCompletedQuestEvent__Class>(type_info(), "", "MoonTelemetryCompletedQuestEvent");
        }
        inline app::MoonTelemetryCompletedQuestEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryCompletedQuestEvent>(get_class());
        }
    } // namespace MoonTelemetryCompletedQuestEvent
} // namespace app::classes::types
