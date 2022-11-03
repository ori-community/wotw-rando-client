#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProfilingSettings_c {
        inline app::ProfilingSettings_c__Class** type_info = (app::ProfilingSettings_c__Class**)(modloader::win::memory::resolve_rva(0x04708390));
        inline app::ProfilingSettings_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ProfilingSettings_c__Class>(type_info, "Moon.Telemetry.Performance", "ProfilingSettings", "<>c");
        }
        inline app::ProfilingSettings_c* create() {
            return il2cpp::create_object<app::ProfilingSettings_c>(get_class());
        }
    } // namespace ProfilingSettings_c
} // namespace app::classes::types
