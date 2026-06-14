#pragma once
#include <Modloader/app/structs/TelemetryHeatMap.h>
#include <Modloader/app/structs/TelemetryHeatMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TelemetryHeatMap {
        inline app::TelemetryHeatMap__Class** type_info() {
            static app::TelemetryHeatMap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TelemetryHeatMap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TelemetryHeatMap__Class* get_class() {
            return il2cpp::get_class<app::TelemetryHeatMap__Class>(type_info(), "", "TelemetryHeatMap");
        }
        inline app::TelemetryHeatMap* create() {
            return il2cpp::create_object<app::TelemetryHeatMap>(get_class());
        }
    } // namespace TelemetryHeatMap
} // namespace app::classes::types
