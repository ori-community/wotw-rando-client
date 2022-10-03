#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GPUAutoProfiler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GPUAutoProfiler__Class** type_info;
        inline app::GPUAutoProfiler__Class* get_class() {
            return il2cpp::get_class<app::GPUAutoProfiler__Class>(type_info, "Moon.Telemetry.Performance.profilers", "GPUAutoProfiler");
        }
        inline app::GPUAutoProfiler* create() {
            return il2cpp::create_object<app::GPUAutoProfiler>(get_class());
        }
    } // namespace GPUAutoProfiler
} // namespace app::classes::types
