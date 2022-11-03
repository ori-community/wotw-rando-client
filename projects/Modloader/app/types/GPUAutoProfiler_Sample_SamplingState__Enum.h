#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GPUAutoProfiler_Sample_SamplingState__Enum {
        inline app::GPUAutoProfiler_Sample_SamplingState__Enum__Class** type_info = (app::GPUAutoProfiler_Sample_SamplingState__Enum__Class**)(modloader::win::memory::resolve_rva(0x047199B0));
        inline app::GPUAutoProfiler_Sample_SamplingState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GPUAutoProfiler_Sample_SamplingState__Enum__Class>(type_info, "Moon.Telemetry.Performance.profilers", "GPUAutoProfiler+Sample", "SamplingState");
        }
        inline app::GPUAutoProfiler_Sample_SamplingState__Enum* create() {
            return il2cpp::create_object<app::GPUAutoProfiler_Sample_SamplingState__Enum>(get_class());
        }
    } // namespace GPUAutoProfiler_Sample_SamplingState__Enum
} // namespace app::classes::types
