#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryShardEquipEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetryShardEquipEvent__Class** type_info;
        inline app::MoonTelemetryShardEquipEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryShardEquipEvent__Class>(type_info, "", "MoonTelemetryShardEquipEvent");
        }
        inline app::MoonTelemetryShardEquipEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryShardEquipEvent>(get_class());
        }
    } // namespace MoonTelemetryShardEquipEvent
} // namespace app::classes::types
