#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryCharacterBaseEvent_AbilityData__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetryCharacterBaseEvent_AbilityData__Array__Class** type_info;
        inline app::MoonTelemetryCharacterBaseEvent_AbilityData__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryCharacterBaseEvent_AbilityData__Array__Class>(type_info, "", "MoonTelemetryCharacterBaseEvent+AbilityData[]");
        }
        inline app::MoonTelemetryCharacterBaseEvent_AbilityData__Array* create() {
            return il2cpp::create_object<app::MoonTelemetryCharacterBaseEvent_AbilityData__Array>(get_class());
        }
    } // namespace MoonTelemetryCharacterBaseEvent_AbilityData__Array
} // namespace app::classes::types
