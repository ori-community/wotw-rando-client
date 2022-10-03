#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryClientBaseEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetryClientBaseEvent__Class** type_info;
        inline app::MoonTelemetryClientBaseEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryClientBaseEvent__Class>(type_info, "", "MoonTelemetryClientBaseEvent");
        }
        inline app::MoonTelemetryClientBaseEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryClientBaseEvent>(get_class());
        }
    } // namespace MoonTelemetryClientBaseEvent
} // namespace app::classes::types
