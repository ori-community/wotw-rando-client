#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetryCharacterBaseEvent_SpiritShardData__Array {
        inline app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Array__Class** type_info = (app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Array__Class**)(modloader::win::memory::resolve_rva(0x0474EE68));
        inline app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Array__Class>(type_info, "", "MoonTelemetryCharacterBaseEvent+SpiritShardData[]");
        }
        inline app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Array* create() {
            return il2cpp::create_object<app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Array>(get_class());
        }
    } // namespace MoonTelemetryCharacterBaseEvent_SpiritShardData__Array
} // namespace app::classes::types
