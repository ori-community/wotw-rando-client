#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GPUAutoProfilerReportRenderer__Class.h>
#include <Modloader/app/structs/GPUAutoProfilerReportRenderer.h>

namespace app::classes::types {
    namespace GPUAutoProfilerReportRenderer {
        inline app::GPUAutoProfilerReportRenderer__Class** type_info = (app::GPUAutoProfilerReportRenderer__Class**)(modloader::win::memory::resolve_rva(0x0478A5E0));
        inline app::GPUAutoProfilerReportRenderer__Class* get_class() {
            return il2cpp::get_class<app::GPUAutoProfilerReportRenderer__Class>(type_info, "Moon.Telemetry.Performance.profilers", "GPUAutoProfilerReportRenderer");
        }
        inline app::GPUAutoProfilerReportRenderer* create() {
            return il2cpp::create_object<app::GPUAutoProfilerReportRenderer>(get_class());
        }
    } // namespace GPUAutoProfilerReportRenderer
} // namespace app::classes::types
