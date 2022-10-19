#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProfilingSettings_BulkSettings {
        inline app::ProfilingSettings_BulkSettings__Class** type_info = (app::ProfilingSettings_BulkSettings__Class**)(modloader::win::memory::resolve_rva(0x047876F0));
        inline app::ProfilingSettings_BulkSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::ProfilingSettings_BulkSettings__Class>(type_info, "Moon.Telemetry.Performance", "ProfilingSettings", "BulkSettings");
        }
        inline app::ProfilingSettings_BulkSettings* create() {
            return il2cpp::create_object<app::ProfilingSettings_BulkSettings>(get_class());
        }
    } // namespace ProfilingSettings_BulkSettings
} // namespace app::classes::types
