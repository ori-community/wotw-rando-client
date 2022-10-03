#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryCompletedQuestEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetryCompletedQuestEvent__Class** type_info;
        inline app::MoonTelemetryCompletedQuestEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryCompletedQuestEvent__Class>(type_info, "", "MoonTelemetryCompletedQuestEvent");
        }
        inline app::MoonTelemetryCompletedQuestEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryCompletedQuestEvent>(get_class());
        }
    } // namespace MoonTelemetryCompletedQuestEvent
} // namespace app::classes::types
