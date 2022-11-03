#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GPUAutoProfiler_Sample {
        inline app::GPUAutoProfiler_Sample__Class** type_info = (app::GPUAutoProfiler_Sample__Class**)(modloader::win::memory::resolve_rva(0x0472BC28));
        inline app::GPUAutoProfiler_Sample__Class* get_class() {
            return il2cpp::get_nested_class<app::GPUAutoProfiler_Sample__Class>(type_info, "Moon.Telemetry.Performance.profilers", "GPUAutoProfiler", "Sample");
        }
        inline app::GPUAutoProfiler_Sample* create() {
            return il2cpp::create_object<app::GPUAutoProfiler_Sample>(get_class());
        }
        inline app::GPUAutoProfiler_Sample__Array* create_array(int size) {
            return il2cpp::array_new<app::GPUAutoProfiler_Sample__Array>(get_class(), size);
        }
        inline app::GPUAutoProfiler_Sample__Array* create_array(const std::vector<app::GPUAutoProfiler_Sample*>& items) {
            return il2cpp::array_new<app::GPUAutoProfiler_Sample__Array>(get_class(), items);
        }
    } // namespace GPUAutoProfiler_Sample
} // namespace app::classes::types
