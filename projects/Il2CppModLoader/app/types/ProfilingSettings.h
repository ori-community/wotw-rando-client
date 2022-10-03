#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProfilingSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ProfilingSettings__Class** type_info;
        inline app::ProfilingSettings__Class* get_class() {
            return il2cpp::get_class<app::ProfilingSettings__Class>(type_info, "Moon.Telemetry.Performance", "ProfilingSettings");
        }
        inline app::ProfilingSettings* create() {
            return il2cpp::create_object<app::ProfilingSettings>(get_class());
        }
    } // namespace ProfilingSettings
} // namespace app::classes::types
