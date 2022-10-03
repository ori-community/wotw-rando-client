#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProfilingSettings_BulkSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ProfilingSettings_BulkSettings__Class** type_info;
        inline app::ProfilingSettings_BulkSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::ProfilingSettings_BulkSettings__Class>(type_info, "Moon.Telemetry.Performance", "ProfilingSettings", "BulkSettings");
        }
        inline app::ProfilingSettings_BulkSettings* create() {
            return il2cpp::create_object<app::ProfilingSettings_BulkSettings>(get_class());
        }
    } // namespace ProfilingSettings_BulkSettings
} // namespace app::classes::types
