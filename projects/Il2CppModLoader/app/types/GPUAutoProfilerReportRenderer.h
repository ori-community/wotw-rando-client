#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GPUAutoProfilerReportRenderer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GPUAutoProfilerReportRenderer__Class** type_info;
        inline app::GPUAutoProfilerReportRenderer__Class* get_class() {
            return il2cpp::get_class<app::GPUAutoProfilerReportRenderer__Class>(type_info, "Moon.Telemetry.Performance.profilers", "GPUAutoProfilerReportRenderer");
        }
        inline app::GPUAutoProfilerReportRenderer* create() {
            return il2cpp::create_object<app::GPUAutoProfilerReportRenderer>(get_class());
        }
    } // namespace GPUAutoProfilerReportRenderer
} // namespace app::classes::types
