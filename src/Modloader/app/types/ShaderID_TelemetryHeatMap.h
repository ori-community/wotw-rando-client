#pragma once
#include <Modloader/app/structs/ShaderID_TelemetryHeatMap.h>
#include <Modloader/app/structs/ShaderID_TelemetryHeatMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_TelemetryHeatMap {
        inline app::ShaderID_TelemetryHeatMap__Class** type_info() {
            static app::ShaderID_TelemetryHeatMap__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_TelemetryHeatMap__Class**)(modloader::win::memory::resolve_rva(0x047793A8));
            }
            return cache;
        }
        inline app::ShaderID_TelemetryHeatMap__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_TelemetryHeatMap__Class>(type_info(), "", "ShaderID_TelemetryHeatMap");
        }
        inline app::ShaderID_TelemetryHeatMap* create() {
            return il2cpp::create_object<app::ShaderID_TelemetryHeatMap>(get_class());
        }
    } // namespace ShaderID_TelemetryHeatMap
} // namespace app::classes::types
