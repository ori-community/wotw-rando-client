#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryAssignQuestEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetryAssignQuestEvent__Class** type_info;
        inline app::MoonTelemetryAssignQuestEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryAssignQuestEvent__Class>(type_info, "", "MoonTelemetryAssignQuestEvent");
        }
        inline app::MoonTelemetryAssignQuestEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryAssignQuestEvent>(get_class());
        }
    } // namespace MoonTelemetryAssignQuestEvent
} // namespace app::classes::types
