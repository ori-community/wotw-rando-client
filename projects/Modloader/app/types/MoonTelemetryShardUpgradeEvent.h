#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetryShardUpgradeEvent {
        inline app::MoonTelemetryShardUpgradeEvent__Class** type_info = (app::MoonTelemetryShardUpgradeEvent__Class**)(modloader::win::memory::resolve_rva(0x0471CA68));
        inline app::MoonTelemetryShardUpgradeEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryShardUpgradeEvent__Class>(type_info, "", "MoonTelemetryShardUpgradeEvent");
        }
        inline app::MoonTelemetryShardUpgradeEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryShardUpgradeEvent>(get_class());
        }
    } // namespace MoonTelemetryShardUpgradeEvent
} // namespace app::classes::types
