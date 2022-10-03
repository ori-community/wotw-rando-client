#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GPUAutoProfilerReport {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GPUAutoProfilerReport__Class** type_info;
        inline app::GPUAutoProfilerReport__Class* get_class() {
            return il2cpp::get_class<app::GPUAutoProfilerReport__Class>(type_info, "Moon.Telemetry.Performance.profilers", "GPUAutoProfilerReport");
        }
        inline app::GPUAutoProfilerReport* create() {
            return il2cpp::create_object<app::GPUAutoProfilerReport>(get_class());
        }
    } // namespace GPUAutoProfilerReport
} // namespace app::classes::types
