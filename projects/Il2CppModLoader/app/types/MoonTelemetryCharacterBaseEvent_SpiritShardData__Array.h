#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryCharacterBaseEvent_SpiritShardData__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Array__Class** type_info;
        inline app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Array__Class>(type_info, "", "MoonTelemetryCharacterBaseEvent+SpiritShardData[]");
        }
        inline app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Array* create() {
            return il2cpp::create_object<app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Array>(get_class());
        }
    } // namespace MoonTelemetryCharacterBaseEvent_SpiritShardData__Array
} // namespace app::classes::types
