#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryCharacterBaseEvent_SpiritShardData {
        namespace {
            app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Class* type_info_ref = nullptr;
        }
        app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Class** type_info = &type_info_ref;
        inline app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Class>(type_info, "", "MoonTelemetryCharacterBaseEvent", "SpiritShardData");
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
        inline app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Array* create_array(const std::vector<app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Boxed>& items) {
            return il2cpp::array_new<app::MoonTelemetryCharacterBaseEvent_SpiritShardData__Array>(get_class(), items);
        }
    } // namespace MoonTelemetryCharacterBaseEvent_SpiritShardData
} // namespace app::classes::types
