#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GPUAutoProfiler {
        inline app::GPUAutoProfiler__Class** type_info = (app::GPUAutoProfiler__Class**)(modloader::win::memory::resolve_rva(0x04726F70));
        inline app::GPUAutoProfiler__Class* get_class() {
            return il2cpp::get_class<app::GPUAutoProfiler__Class>(type_info, "Moon.Telemetry.Performance.profilers", "GPUAutoProfiler");
        }
        inline app::GPUAutoProfiler* create() {
            return il2cpp::create_object<app::GPUAutoProfiler>(get_class());
        }
    } // namespace GPUAutoProfiler
} // namespace app::classes::types
