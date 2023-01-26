#pragma once
#include <Modloader/app/structs/ProfilingSettings_BulkSettings.h>
#include <Modloader/app/structs/ProfilingSettings_BulkSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProfilingSettings_BulkSettings {
        inline app::ProfilingSettings_BulkSettings__Class** type_info() {
            static app::ProfilingSettings_BulkSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ProfilingSettings_BulkSettings__Class**)(modloader::win::memory::resolve_rva(0x047876F0));
            }
            return cache;
        }
        inline app::ProfilingSettings_BulkSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::ProfilingSettings_BulkSettings__Class>(type_info(), "Moon.Telemetry.Performance", "ProfilingSettings", "BulkSettings");
        }
        inline app::ProfilingSettings_BulkSettings* create() {
            return il2cpp::create_object<app::ProfilingSettings_BulkSettings>(get_class());
        }
    } // namespace ProfilingSettings_BulkSettings
} // namespace app::classes::types
