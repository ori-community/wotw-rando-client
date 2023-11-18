#pragma once
#include <Modloader/app/structs/GPUAutoProfiler_Sample.h>
#include <Modloader/app/structs/GPUAutoProfiler_Sample__Array.h>
#include <Modloader/app/structs/GPUAutoProfiler_Sample__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GPUAutoProfiler_Sample {
        inline app::GPUAutoProfiler_Sample__Class** type_info() {
            static app::GPUAutoProfiler_Sample__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GPUAutoProfiler_Sample__Class**)(modloader::win::memory::resolve_rva(0x0472BC28));
            }
            return cache;
        }
        inline app::GPUAutoProfiler_Sample__Class* get_class() {
            return il2cpp::get_nested_class<app::GPUAutoProfiler_Sample__Class>(type_info(), "Moon.Telemetry.Performance.profilers", "GPUAutoProfiler", "Sample");
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
