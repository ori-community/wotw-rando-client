#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GPUProfilingMode {
        inline app::GPUProfilingMode__Class** type_info = (app::GPUProfilingMode__Class**)(modloader::win::memory::resolve_rva(0x0470C888));
        inline app::GPUProfilingMode__Class* get_class() {
            return il2cpp::get_class<app::GPUProfilingMode__Class>(type_info, "Moon.Telemetry.Performance.profilers", "GPUProfilingMode");
        }
        inline app::GPUProfilingMode* create() {
            return il2cpp::create_object<app::GPUProfilingMode>(get_class());
        }
    } // namespace GPUProfilingMode
} // namespace app::classes::types
