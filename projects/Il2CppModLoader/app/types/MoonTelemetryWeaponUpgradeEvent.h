#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryWeaponUpgradeEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetryWeaponUpgradeEvent__Class** type_info;
        inline app::MoonTelemetryWeaponUpgradeEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryWeaponUpgradeEvent__Class>(type_info, "", "MoonTelemetryWeaponUpgradeEvent");
        }
        inline app::MoonTelemetryWeaponUpgradeEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryWeaponUpgradeEvent>(get_class());
        }
    } // namespace MoonTelemetryWeaponUpgradeEvent
} // namespace app::classes::types
