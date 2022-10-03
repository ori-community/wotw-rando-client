#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GPUAutoProfiler_Sample_SamplingState__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GPUAutoProfiler_Sample_SamplingState__Enum__Class** type_info;
        inline app::GPUAutoProfiler_Sample_SamplingState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GPUAutoProfiler_Sample_SamplingState__Enum__Class>(type_info, "Moon.Telemetry.Performance.profilers", "GPUAutoProfiler+Sample", "SamplingState");
        }
        inline app::GPUAutoProfiler_Sample_SamplingState__Enum* create() {
            return il2cpp::create_object<app::GPUAutoProfiler_Sample_SamplingState__Enum>(get_class());
        }
    } // namespace GPUAutoProfiler_Sample_SamplingState__Enum
} // namespace app::classes::types
