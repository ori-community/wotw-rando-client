#pragma once
#include <Modloader/app/structs/GPUAutoProfiler_Sample_SamplingState__Enum.h>
#include <Modloader/app/structs/GPUAutoProfiler_Sample_SamplingState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GPUAutoProfiler_Sample_SamplingState__Enum {
        inline app::GPUAutoProfiler_Sample_SamplingState__Enum__Class** type_info() {
            static app::GPUAutoProfiler_Sample_SamplingState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GPUAutoProfiler_Sample_SamplingState__Enum__Class**)(modloader::win::memory::resolve_rva(0x047199B0));
            }
            return cache;
        }
        inline app::GPUAutoProfiler_Sample_SamplingState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GPUAutoProfiler_Sample_SamplingState__Enum__Class>(type_info(), "Moon.Telemetry.Performance.profilers", "GPUAutoProfiler+Sample", "SamplingState");
        }
        inline app::GPUAutoProfiler_Sample_SamplingState__Enum* create() {
            return il2cpp::create_object<app::GPUAutoProfiler_Sample_SamplingState__Enum>(get_class());
        }
    } // namespace GPUAutoProfiler_Sample_SamplingState__Enum
} // namespace app::classes::types
