#pragma once
#include <Modloader/app/structs/MoonTelemetryShardEquipEvent.h>
#include <Modloader/app/structs/MoonTelemetryShardEquipEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryShardEquipEvent {
        inline app::MoonTelemetryShardEquipEvent__Class** type_info() {
            static app::MoonTelemetryShardEquipEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetryShardEquipEvent__Class**)(modloader::win::memory::resolve_rva(0x0477C018));
            }
            return cache;
        }
        inline app::MoonTelemetryShardEquipEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryShardEquipEvent__Class>(type_info(), "", "MoonTelemetryShardEquipEvent");
        }
        inline app::MoonTelemetryShardEquipEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryShardEquipEvent>(get_class());
        }
    } // namespace MoonTelemetryShardEquipEvent
} // namespace app::classes::types
