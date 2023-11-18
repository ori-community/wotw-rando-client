#pragma once
#include <Modloader/app/structs/MoonTelemetryCharacterBaseEvent_SpiritShardData.h>
#include <Modloader/app/structs/MoonTelemetryCharacterBaseEvent_SpiritShardData__Array.h>
#include <Modloader/app/structs/MoonTelemetryCharacterBaseEvent_SpiritShardData__Boxed.h>
#include <Modloader/app/structs/MoonTelemetryCharacterBaseEvent_SpiritShardData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryCharacterBaseEvent_SpiritShardData {
        inline app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Class** type_info() {
            static app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Class>(type_info(), "", "MoonTelemetryCharacterBaseEvent", "SpiritShardData");
        }
        inline app::MoonTelemetryCharacterBaseEvent_SpiritShardData* create() {
            return il2cpp::create_object<app::MoonTelemetryCharacterBaseEvent_SpiritShardData>(get_class());
        }
        inline app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Boxed* box(app::MoonTelemetryCharacterBaseEvent_SpiritShardData value) {
            return il2cpp::box_value<app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Boxed>(get_class(), value);
        }
        inline app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Array>(get_class(), size);
        }
        inline app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Array* create_array(const std::vector<app::MoonTelemetryCharacterBaseEvent_SpiritShardData>& items) {
            return il2cpp::array_new<app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Array>(get_class(), items);
        }
    } // namespace MoonTelemetryCharacterBaseEvent_SpiritShardData
} // namespace app::classes::types
