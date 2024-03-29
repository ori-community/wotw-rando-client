#pragma once
#include <Modloader/app/structs/ProfilingSettings_c_DisplayClass18_0.h>
#include <Modloader/app/structs/ProfilingSettings_c_DisplayClass18_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProfilingSettings_c_DisplayClass18_0 {
        inline app::ProfilingSettings_c_DisplayClass18_0__Class** type_info() {
            static app::ProfilingSettings_c_DisplayClass18_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ProfilingSettings_c_DisplayClass18_0__Class**)(modloader::win::memory::resolve_rva(0x04745700));
            }
            return cache;
        }
        inline app::ProfilingSettings_c_DisplayClass18_0__Class* get_class() {
            return il2cpp::get_nested_class<app::ProfilingSettings_c_DisplayClass18_0__Class>(type_info(), "Moon.Telemetry.Performance", "ProfilingSettings", "<>c__DisplayClass18_0");
        }
        inline app::ProfilingSettings_c_DisplayClass18_0* create() {
            return il2cpp::create_object<app::ProfilingSettings_c_DisplayClass18_0>(get_class());
        }
    } // namespace ProfilingSettings_c_DisplayClass18_0
} // namespace app::classes::types
