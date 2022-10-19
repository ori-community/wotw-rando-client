#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetryCharacterBaseEvent_AbilityData__Array {
        inline app::MoonTelemetryCharacterBaseEvent_AbilityData__Array__Class** type_info = (app::MoonTelemetryCharacterBaseEvent_AbilityData__Array__Class**)(modloader::win::memory::resolve_rva(0x047972D0));
        inline app::MoonTelemetryCharacterBaseEvent_AbilityData__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryCharacterBaseEvent_AbilityData__Array__Class>(type_info, "", "MoonTelemetryCharacterBaseEvent+AbilityData[]");
        }
        inline app::MoonTelemetryCharacterBaseEvent_AbilityData__Array* create() {
            return il2cpp::create_object<app::MoonTelemetryCharacterBaseEvent_AbilityData__Array>(get_class());
        }
    } // namespace MoonTelemetryCharacterBaseEvent_AbilityData__Array
} // namespace app::classes::types
