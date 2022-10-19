#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GPUAutoProfilerReport_ReportBaselineData {
        inline app::GPUAutoProfilerReport_ReportBaselineData__Class** type_info = (app::GPUAutoProfilerReport_ReportBaselineData__Class**)(modloader::win::memory::resolve_rva(0x0473D9A0));
        inline app::GPUAutoProfilerReport_ReportBaselineData__Class* get_class() {
            return il2cpp::get_nested_class<app::GPUAutoProfilerReport_ReportBaselineData__Class>(type_info, "Moon.Telemetry.Performance.profilers", "GPUAutoProfilerReport", "ReportBaselineData");
        }
        inline app::GPUAutoProfilerReport_ReportBaselineData* create() {
            return il2cpp::create_object<app::GPUAutoProfilerReport_ReportBaselineData>(get_class());
        }
    } // namespace GPUAutoProfilerReport_ReportBaselineData
} // namespace app::classes::types
