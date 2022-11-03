#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GPUAutoProfiler_Sample__Array {
        namespace {
            inline app::GPUAutoProfiler_Sample__Array__Class* type_info_ref = nullptr;
        }
        inline app::GPUAutoProfiler_Sample__Array__Class** type_info = &type_info_ref;
        inline app::GPUAutoProfiler_Sample__Array__Class* get_class() {
            return il2cpp::get_class<app::GPUAutoProfiler_Sample__Array__Class>(type_info, "Moon.Telemetry.Performance.profilers", "GPUAutoProfiler+Sample[]");
        }
        inline app::GPUAutoProfiler_Sample__Array* create() {
            return il2cpp::create_object<app::GPUAutoProfiler_Sample__Array>(get_class());
        }
    } // namespace GPUAutoProfiler_Sample__Array
} // namespace app::classes::types
