#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GPUAutoProfiler_SamplingHandler_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GPUAutoProfiler_SamplingHandler_c__Class** type_info;
        inline app::GPUAutoProfiler_SamplingHandler_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GPUAutoProfiler_SamplingHandler_c__Class>(type_info, "Moon.Telemetry.Performance.profilers", "GPUAutoProfiler+SamplingHandler", "<>c");
        }
        inline app::GPUAutoProfiler_SamplingHandler_c* create() {
            return il2cpp::create_object<app::GPUAutoProfiler_SamplingHandler_c>(get_class());
        }
    } // namespace GPUAutoProfiler_SamplingHandler_c
} // namespace app::classes::types
