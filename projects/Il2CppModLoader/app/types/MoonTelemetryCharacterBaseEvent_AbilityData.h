#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetryCharacterBaseEvent_AbilityData {
        namespace {
            inline app::MoonTelemetryCharacterBaseEvent_AbilityData__Class* type_info_ref = nullptr;
        }
        inline app::MoonTelemetryCharacterBaseEvent_AbilityData__Class** type_info = &type_info_ref;
        inline app::MoonTelemetryCharacterBaseEvent_AbilityData__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetryCharacterBaseEvent_AbilityData__Class>(type_info, "", "MoonTelemetryCharacterBaseEvent", "AbilityData");
        }
        inline app::MoonTelemetryCharacterBaseEvent_AbilityData* create() {
            return il2cpp::create_object<app::MoonTelemetryCharacterBaseEvent_AbilityData>(get_class());
        }
        inline app::MoonTelemetryCharacterBaseEvent_AbilityData__Boxed* box(app::MoonTelemetryCharacterBaseEvent_AbilityData value) {
            return il2cpp::box_value<app::MoonTelemetryCharacterBaseEvent_AbilityData__Boxed>(get_class(), value);
        }
        inline app::MoonTelemetryCharacterBaseEvent_AbilityData__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonTelemetryCharacterBaseEvent_AbilityData__Array>(get_class(), size);
        }
        inline app::MoonTelemetryCharacterBaseEvent_AbilityData__Array* create_array(const std::vector<app::MoonTelemetryCharacterBaseEvent_AbilityData>& items) {
            return il2cpp::array_new<app::MoonTelemetryCharacterBaseEvent_AbilityData__Array>(get_class(), items);
        }
    } // namespace MoonTelemetryCharacterBaseEvent_AbilityData
} // namespace app::classes::types
