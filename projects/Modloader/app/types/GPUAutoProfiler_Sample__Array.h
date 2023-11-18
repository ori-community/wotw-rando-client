#pragma once
#include <Modloader/app/structs/GPUAutoProfiler_Sample__Array.h>
#include <Modloader/app/structs/GPUAutoProfiler_Sample__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GPUAutoProfiler_Sample__Array {
        inline app::GPUAutoProfiler_Sample__Array__Class** type_info() {
            static app::GPUAutoProfiler_Sample__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GPUAutoProfiler_Sample__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GPUAutoProfiler_Sample__Array__Class* get_class() {
            return il2cpp::get_class<app::GPUAutoProfiler_Sample__Array__Class>(type_info(), "Moon.Telemetry.Performance.profilers", "GPUAutoProfiler+Sample[]");
        }
        inline app::GPUAutoProfiler_Sample__Array* create() {
            return il2cpp::create_object<app::GPUAutoProfiler_Sample__Array>(get_class());
        }
    } // namespace GPUAutoProfiler_Sample__Array
} // namespace app::classes::types
