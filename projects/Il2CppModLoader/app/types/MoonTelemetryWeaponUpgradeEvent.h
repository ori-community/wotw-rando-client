#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetryWeaponUpgradeEvent {
        inline app::MoonTelemetryWeaponUpgradeEvent__Class** type_info = (app::MoonTelemetryWeaponUpgradeEvent__Class**)(modloader::win::memory::resolve_rva(0x04701258));
        inline app::MoonTelemetryWeaponUpgradeEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryWeaponUpgradeEvent__Class>(type_info, "", "MoonTelemetryWeaponUpgradeEvent");
        }
        inline app::MoonTelemetryWeaponUpgradeEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryWeaponUpgradeEvent>(get_class());
        }
    } // namespace MoonTelemetryWeaponUpgradeEvent
} // namespace app::classes::types
