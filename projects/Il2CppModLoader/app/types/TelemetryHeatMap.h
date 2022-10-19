#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TelemetryHeatMap {
        namespace {
            inline app::TelemetryHeatMap__Class* type_info_ref = nullptr;
        }
        inline app::TelemetryHeatMap__Class** type_info = &type_info_ref;
        inline app::TelemetryHeatMap__Class* get_class() {
            return il2cpp::get_class<app::TelemetryHeatMap__Class>(type_info, "", "TelemetryHeatMap");
        }
        inline app::TelemetryHeatMap* create() {
            return il2cpp::create_object<app::TelemetryHeatMap>(get_class());
        }
    } // namespace TelemetryHeatMap
} // namespace app::classes::types
