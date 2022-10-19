#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProfilingSettings_Setting {
        inline app::ProfilingSettings_Setting__Class** type_info = (app::ProfilingSettings_Setting__Class**)(modloader::win::memory::resolve_rva(0x04735660));
        inline app::ProfilingSettings_Setting__Class* get_class() {
            return il2cpp::get_nested_class<app::ProfilingSettings_Setting__Class>(type_info, "Moon.Telemetry.Performance", "ProfilingSettings", "Setting");
        }
        inline app::ProfilingSettings_Setting* create() {
            return il2cpp::create_object<app::ProfilingSettings_Setting>(get_class());
        }
        inline app::ProfilingSettings_Setting__Array* create_array(int size) {
            return il2cpp::array_new<app::ProfilingSettings_Setting__Array>(get_class(), size);
        }
        inline app::ProfilingSettings_Setting__Array* create_array(const std::vector<app::ProfilingSettings_Setting*>& items) {
            return il2cpp::array_new<app::ProfilingSettings_Setting__Array>(get_class(), items);
        }
    } // namespace ProfilingSettings_Setting
} // namespace app::classes::types
