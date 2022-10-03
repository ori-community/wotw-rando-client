#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler__Class** type_info;
        inline app::GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler__Class>(type_info, "Moon.Telemetry.Performance.profilers", "GPUAutoProfiler", "FasterThanLightSpeedMeasurementHandler");
        }
        inline app::GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler* create() {
            return il2cpp::create_object<app::GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler>(get_class());
        }
    } // namespace GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler
} // namespace app::classes::types
