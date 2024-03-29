#pragma once
#include <Modloader/app/structs/GPUAutoProfiler_BaselineMeasurementHandler.h>
#include <Modloader/app/structs/GPUAutoProfiler_BaselineMeasurementHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GPUAutoProfiler_BaselineMeasurementHandler {
        inline app::GPUAutoProfiler_BaselineMeasurementHandler__Class** type_info() {
            static app::GPUAutoProfiler_BaselineMeasurementHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GPUAutoProfiler_BaselineMeasurementHandler__Class**)(modloader::win::memory::resolve_rva(0x047656E0));
            }
            return cache;
        }
        inline app::GPUAutoProfiler_BaselineMeasurementHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::GPUAutoProfiler_BaselineMeasurementHandler__Class>(type_info(), "Moon.Telemetry.Performance.profilers", "GPUAutoProfiler", "BaselineMeasurementHandler");
        }
        inline app::GPUAutoProfiler_BaselineMeasurementHandler* create() {
            return il2cpp::create_object<app::GPUAutoProfiler_BaselineMeasurementHandler>(get_class());
        }
    } // namespace GPUAutoProfiler_BaselineMeasurementHandler
} // namespace app::classes::types
