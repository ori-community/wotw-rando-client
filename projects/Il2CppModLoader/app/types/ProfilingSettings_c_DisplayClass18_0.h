#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProfilingSettings_c_DisplayClass18_0 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ProfilingSettings_c_DisplayClass18_0__Class** type_info;
        inline app::ProfilingSettings_c_DisplayClass18_0__Class* get_class() {
            return il2cpp::get_nested_class<app::ProfilingSettings_c_DisplayClass18_0__Class>(type_info, "Moon.Telemetry.Performance", "ProfilingSettings", "<>c__DisplayClass18_0");
        }
        inline app::ProfilingSettings_c_DisplayClass18_0* create() {
            return il2cpp::create_object<app::ProfilingSettings_c_DisplayClass18_0>(get_class());
        }
    } // namespace ProfilingSettings_c_DisplayClass18_0
} // namespace app::classes::types
