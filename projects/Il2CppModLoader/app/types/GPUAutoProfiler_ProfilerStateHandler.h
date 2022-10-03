#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GPUAutoProfiler_ProfilerStateHandler {
        namespace {
            app::GPUAutoProfiler_ProfilerStateHandler__Class* type_info_ref = nullptr;
        }
        app::GPUAutoProfiler_ProfilerStateHandler__Class** type_info = &type_info_ref;
        inline app::GPUAutoProfiler_ProfilerStateHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::GPUAutoProfiler_ProfilerStateHandler__Class>(type_info, "Moon.Telemetry.Performance.profilers", "GPUAutoProfiler", "ProfilerStateHandler");
        }
        inline app::GPUAutoProfiler_ProfilerStateHandler* create() {
            return il2cpp::create_object<app::GPUAutoProfiler_ProfilerStateHandler>(get_class());
        }
    } // namespace GPUAutoProfiler_ProfilerStateHandler
} // namespace app::classes::types
