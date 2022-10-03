#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProfilingSettings_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ProfilingSettings_c__Class** type_info;
        inline app::ProfilingSettings_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ProfilingSettings_c__Class>(type_info, "Moon.Telemetry.Performance", "ProfilingSettings", "<>c");
        }
        inline app::ProfilingSettings_c* create() {
            return il2cpp::create_object<app::ProfilingSettings_c>(get_class());
        }
    } // namespace ProfilingSettings_c
} // namespace app::classes::types
