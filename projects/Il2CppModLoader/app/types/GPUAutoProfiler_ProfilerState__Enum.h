#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GPUAutoProfiler_ProfilerState__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GPUAutoProfiler_ProfilerState__Enum__Class** type_info;
        inline app::GPUAutoProfiler_ProfilerState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GPUAutoProfiler_ProfilerState__Enum__Class>(type_info, "Moon.Telemetry.Performance.profilers", "GPUAutoProfiler", "ProfilerState");
        }
        inline app::GPUAutoProfiler_ProfilerState__Enum* create() {
            return il2cpp::create_object<app::GPUAutoProfiler_ProfilerState__Enum>(get_class());
        }
    } // namespace GPUAutoProfiler_ProfilerState__Enum
} // namespace app::classes::types
