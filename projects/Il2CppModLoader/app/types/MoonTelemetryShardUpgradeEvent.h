#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryShardUpgradeEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetryShardUpgradeEvent__Class** type_info;
        inline app::MoonTelemetryShardUpgradeEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryShardUpgradeEvent__Class>(type_info, "", "MoonTelemetryShardUpgradeEvent");
        }
        inline app::MoonTelemetryShardUpgradeEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryShardUpgradeEvent>(get_class());
        }
    } // namespace MoonTelemetryShardUpgradeEvent
} // namespace app::classes::types
