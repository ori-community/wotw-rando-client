#pragma once
#include <Modloader/app/structs/GPUAutoProfiler_SamplingHandler_c.h>
#include <Modloader/app/structs/GPUAutoProfiler_SamplingHandler_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GPUAutoProfiler_SamplingHandler_c {
        inline app::GPUAutoProfiler_SamplingHandler_c__Class** type_info() {
            static app::GPUAutoProfiler_SamplingHandler_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GPUAutoProfiler_SamplingHandler_c__Class**)(modloader::win::memory::resolve_rva(0x04722EA0));
            }
            return cache;
        }
        inline app::GPUAutoProfiler_SamplingHandler_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GPUAutoProfiler_SamplingHandler_c__Class>(type_info(), "Moon.Telemetry.Performance.profilers", "GPUAutoProfiler+SamplingHandler", "<>c");
        }
        inline app::GPUAutoProfiler_SamplingHandler_c* create() {
            return il2cpp::create_object<app::GPUAutoProfiler_SamplingHandler_c>(get_class());
        }
    } // namespace GPUAutoProfiler_SamplingHandler_c
} // namespace app::classes::types
