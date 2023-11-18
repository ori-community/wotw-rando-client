#pragma once
#include <Modloader/app/structs/GPUAutoProfilerReport.h>
#include <Modloader/app/structs/GPUAutoProfilerReport__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GPUAutoProfilerReport {
        inline app::GPUAutoProfilerReport__Class** type_info() {
            static app::GPUAutoProfilerReport__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GPUAutoProfilerReport__Class**)(modloader::win::memory::resolve_rva(0x04765E30));
            }
            return cache;
        }
        inline app::GPUAutoProfilerReport__Class* get_class() {
            return il2cpp::get_class<app::GPUAutoProfilerReport__Class>(type_info(), "Moon.Telemetry.Performance.profilers", "GPUAutoProfilerReport");
        }
        inline app::GPUAutoProfilerReport* create() {
            return il2cpp::create_object<app::GPUAutoProfilerReport>(get_class());
        }
    } // namespace GPUAutoProfilerReport
} // namespace app::classes::types
