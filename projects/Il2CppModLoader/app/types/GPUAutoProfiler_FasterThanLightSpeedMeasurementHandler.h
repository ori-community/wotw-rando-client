#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler {
        inline app::GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler__Class** type_info = (app::GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler__Class**)(modloader::win::memory::resolve_rva(0x0478F288));
        inline app::GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler__Class>(type_info, "Moon.Telemetry.Performance.profilers", "GPUAutoProfiler", "FasterThanLightSpeedMeasurementHandler");
        }
        inline app::GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler* create() {
            return il2cpp::create_object<app::GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler>(get_class());
        }
    } // namespace GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler
} // namespace app::classes::types
