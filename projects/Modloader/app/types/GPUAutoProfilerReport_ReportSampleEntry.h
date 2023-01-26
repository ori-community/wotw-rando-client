#pragma once
#include <Modloader/app/structs/GPUAutoProfilerReport_ReportSampleEntry.h>
#include <Modloader/app/structs/GPUAutoProfilerReport_ReportSampleEntry__Array.h>
#include <Modloader/app/structs/GPUAutoProfilerReport_ReportSampleEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GPUAutoProfilerReport_ReportSampleEntry {
        inline app::GPUAutoProfilerReport_ReportSampleEntry__Class** type_info() {
            static app::GPUAutoProfilerReport_ReportSampleEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GPUAutoProfilerReport_ReportSampleEntry__Class**)(modloader::win::memory::resolve_rva(0x047230F8));
            }
            return cache;
        }
        inline app::GPUAutoProfilerReport_ReportSampleEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::GPUAutoProfilerReport_ReportSampleEntry__Class>(type_info(), "Moon.Telemetry.Performance.profilers", "GPUAutoProfilerReport", "ReportSampleEntry");
        }
        inline app::GPUAutoProfilerReport_ReportSampleEntry* create() {
            return il2cpp::create_object<app::GPUAutoProfilerReport_ReportSampleEntry>(get_class());
        }
        inline app::GPUAutoProfilerReport_ReportSampleEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::GPUAutoProfilerReport_ReportSampleEntry__Array>(get_class(), size);
        }
        inline app::GPUAutoProfilerReport_ReportSampleEntry__Array* create_array(const std::vector<app::GPUAutoProfilerReport_ReportSampleEntry*>& items) {
            return il2cpp::array_new<app::GPUAutoProfilerReport_ReportSampleEntry__Array>(get_class(), items);
        }
    } // namespace GPUAutoProfilerReport_ReportSampleEntry
} // namespace app::classes::types
