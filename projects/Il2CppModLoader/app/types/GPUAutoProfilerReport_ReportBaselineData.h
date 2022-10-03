#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GPUAutoProfilerReport_ReportBaselineData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GPUAutoProfilerReport_ReportBaselineData__Class** type_info;
        inline app::GPUAutoProfilerReport_ReportBaselineData__Class* get_class() {
            return il2cpp::get_nested_class<app::GPUAutoProfilerReport_ReportBaselineData__Class>(type_info, "Moon.Telemetry.Performance.profilers", "GPUAutoProfilerReport", "ReportBaselineData");
        }
        inline app::GPUAutoProfilerReport_ReportBaselineData* create() {
            return il2cpp::create_object<app::GPUAutoProfilerReport_ReportBaselineData>(get_class());
        }
    } // namespace GPUAutoProfilerReport_ReportBaselineData
} // namespace app::classes::types
