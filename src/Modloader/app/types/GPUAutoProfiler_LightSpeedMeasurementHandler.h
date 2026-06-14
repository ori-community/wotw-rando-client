#pragma once
#include <Modloader/app/structs/GPUAutoProfiler_LightSpeedMeasurementHandler.h>
#include <Modloader/app/structs/GPUAutoProfiler_LightSpeedMeasurementHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GPUAutoProfiler_LightSpeedMeasurementHandler {
        inline app::GPUAutoProfiler_LightSpeedMeasurementHandler__Class** type_info() {
            static app::GPUAutoProfiler_LightSpeedMeasurementHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GPUAutoProfiler_LightSpeedMeasurementHandler__Class**)(modloader::win::memory::resolve_rva(0x0472E9D8));
            }
            return cache;
        }
        inline app::GPUAutoProfiler_LightSpeedMeasurementHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::GPUAutoProfiler_LightSpeedMeasurementHandler__Class>(type_info(), "Moon.Telemetry.Performance.profilers", "GPUAutoProfiler", "LightSpeedMeasurementHandler");
        }
        inline app::GPUAutoProfiler_LightSpeedMeasurementHandler* create() {
            return il2cpp::create_object<app::GPUAutoProfiler_LightSpeedMeasurementHandler>(get_class());
        }
    } // namespace GPUAutoProfiler_LightSpeedMeasurementHandler
} // namespace app::classes::types
