#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GPUAutoProfiler_Sample {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GPUAutoProfiler_Sample__Class** type_info;
        inline app::GPUAutoProfiler_Sample__Class* get_class() {
            return il2cpp::get_nested_class<app::GPUAutoProfiler_Sample__Class>(type_info, "Moon.Telemetry.Performance.profilers", "GPUAutoProfiler", "Sample");
        }
        inline app::GPUAutoProfiler_Sample* create() {
            return il2cpp::create_object<app::GPUAutoProfiler_Sample>(get_class());
        }
        inline app::GPUAutoProfiler_Sample__Array* create_array(int size) {
            return il2cpp::array_new<app::GPUAutoProfiler_Sample__Array>(get_class(), size);
        }
    } // namespace GPUAutoProfiler_Sample
} // namespace app::classes::types
