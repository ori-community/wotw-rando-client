#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetryAbilityChangeEvent {
        inline app::MoonTelemetryAbilityChangeEvent__Class** type_info = (app::MoonTelemetryAbilityChangeEvent__Class**)(modloader::win::memory::resolve_rva(0x0476F2A0));
        inline app::MoonTelemetryAbilityChangeEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryAbilityChangeEvent__Class>(type_info, "", "MoonTelemetryAbilityChangeEvent");
        }
        inline app::MoonTelemetryAbilityChangeEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryAbilityChangeEvent>(get_class());
        }
    } // namespace MoonTelemetryAbilityChangeEvent
} // namespace app::classes::types
