#pragma once
#include <Modloader/app/structs/MoonTelemetryWeaponUpgradeEvent.h>
#include <Modloader/app/structs/MoonTelemetryWeaponUpgradeEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryWeaponUpgradeEvent {
        inline app::MoonTelemetryWeaponUpgradeEvent__Class** type_info() {
            static app::MoonTelemetryWeaponUpgradeEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetryWeaponUpgradeEvent__Class**)(modloader::win::memory::resolve_rva(0x04701258));
            }
            return cache;
        }
        inline app::MoonTelemetryWeaponUpgradeEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryWeaponUpgradeEvent__Class>(type_info(), "", "MoonTelemetryWeaponUpgradeEvent");
        }
        inline app::MoonTelemetryWeaponUpgradeEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryWeaponUpgradeEvent>(get_class());
        }
    } // namespace MoonTelemetryWeaponUpgradeEvent
} // namespace app::classes::types
