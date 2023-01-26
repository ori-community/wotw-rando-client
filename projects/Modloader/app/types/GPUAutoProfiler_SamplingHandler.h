#pragma once
#include <Modloader/app/structs/GPUAutoProfiler_SamplingHandler.h>
#include <Modloader/app/structs/GPUAutoProfiler_SamplingHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GPUAutoProfiler_SamplingHandler {
        inline app::GPUAutoProfiler_SamplingHandler__Class** type_info() {
            static app::GPUAutoProfiler_SamplingHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GPUAutoProfiler_SamplingHandler__Class**)(modloader::win::memory::resolve_rva(0x0474C398));
            }
            return cache;
        }
        inline app::GPUAutoProfiler_SamplingHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::GPUAutoProfiler_SamplingHandler__Class>(type_info(), "Moon.Telemetry.Performance.profilers", "GPUAutoProfiler", "SamplingHandler");
        }
        inline app::GPUAutoProfiler_SamplingHandler* create() {
            return il2cpp::create_object<app::GPUAutoProfiler_SamplingHandler>(get_class());
        }
    } // namespace GPUAutoProfiler_SamplingHandler
} // namespace app::classes::types
