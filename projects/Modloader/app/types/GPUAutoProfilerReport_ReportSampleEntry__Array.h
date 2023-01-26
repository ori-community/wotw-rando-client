#pragma once
#include <Modloader/app/structs/GPUAutoProfilerReport_ReportSampleEntry__Array.h>
#include <Modloader/app/structs/GPUAutoProfilerReport_ReportSampleEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GPUAutoProfilerReport_ReportSampleEntry__Array {
        inline app::GPUAutoProfilerReport_ReportSampleEntry__Array__Class** type_info() {
            static app::GPUAutoProfilerReport_ReportSampleEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GPUAutoProfilerReport_ReportSampleEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GPUAutoProfilerReport_ReportSampleEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::GPUAutoProfilerReport_ReportSampleEntry__Array__Class>(type_info(), "Moon.Telemetry.Performance.profilers", "GPUAutoProfilerReport+ReportSampleEntry[]");
        }
        inline app::GPUAutoProfilerReport_ReportSampleEntry__Array* create() {
            return il2cpp::create_object<app::GPUAutoProfilerReport_ReportSampleEntry__Array>(get_class());
        }
    } // namespace GPUAutoProfilerReport_ReportSampleEntry__Array
} // namespace app::classes::types
