#pragma once
#include <Modloader/app/structs/MoonTelemetryShardUpgradeEvent.h>
#include <Modloader/app/structs/MoonTelemetryShardUpgradeEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryShardUpgradeEvent {
        inline app::MoonTelemetryShardUpgradeEvent__Class** type_info() {
            static app::MoonTelemetryShardUpgradeEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetryShardUpgradeEvent__Class**)(modloader::win::memory::resolve_rva(0x0471CA68));
            }
            return cache;
        }
        inline app::MoonTelemetryShardUpgradeEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryShardUpgradeEvent__Class>(type_info(), "", "MoonTelemetryShardUpgradeEvent");
        }
        inline app::MoonTelemetryShardUpgradeEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryShardUpgradeEvent>(get_class());
        }
    } // namespace MoonTelemetryShardUpgradeEvent
} // namespace app::classes::types
