#pragma once
#include <Modloader/app/structs/GPUAutoProfiler_ProfilerStateHandler.h>
#include <Modloader/app/structs/GPUAutoProfiler_ProfilerStateHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GPUAutoProfiler_ProfilerStateHandler {
        inline app::GPUAutoProfiler_ProfilerStateHandler__Class** type_info() {
            static app::GPUAutoProfiler_ProfilerStateHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GPUAutoProfiler_ProfilerStateHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GPUAutoProfiler_ProfilerStateHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::GPUAutoProfiler_ProfilerStateHandler__Class>(type_info(), "Moon.Telemetry.Performance.profilers", "GPUAutoProfiler", "ProfilerStateHandler");
        }
        inline app::GPUAutoProfiler_ProfilerStateHandler* create() {
            return il2cpp::create_object<app::GPUAutoProfiler_ProfilerStateHandler>(get_class());
        }
    } // namespace GPUAutoProfiler_ProfilerStateHandler
} // namespace app::classes::types
