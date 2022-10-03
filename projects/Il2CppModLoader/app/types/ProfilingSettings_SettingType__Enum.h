#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProfilingSettings_SettingType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ProfilingSettings_SettingType__Enum__Class** type_info;
        inline app::ProfilingSettings_SettingType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ProfilingSettings_SettingType__Enum__Class>(type_info, "Moon.Telemetry.Performance", "ProfilingSettings", "SettingType");
        }
        inline app::ProfilingSettings_SettingType__Enum* create() {
            return il2cpp::create_object<app::ProfilingSettings_SettingType__Enum>(get_class());
        }
        inline app::ProfilingSettings_SettingType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::ProfilingSettings_SettingType__Enum__Array>(get_class(), size);
        }
    } // namespace ProfilingSettings_SettingType__Enum
} // namespace app::classes::types
