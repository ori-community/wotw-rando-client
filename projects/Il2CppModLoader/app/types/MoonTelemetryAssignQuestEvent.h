#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetryAssignQuestEvent {
        inline app::MoonTelemetryAssignQuestEvent__Class** type_info = (app::MoonTelemetryAssignQuestEvent__Class**)(modloader::win::memory::resolve_rva(0x04784000));
        inline app::MoonTelemetryAssignQuestEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryAssignQuestEvent__Class>(type_info, "", "MoonTelemetryAssignQuestEvent");
        }
        inline app::MoonTelemetryAssignQuestEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryAssignQuestEvent>(get_class());
        }
    } // namespace MoonTelemetryAssignQuestEvent
} // namespace app::classes::types
