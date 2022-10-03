#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProfilingSettings_SettingType__Enum__Array__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ProfilingSettings_SettingType__Enum__Array__Array__Class** type_info;
        inline app::ProfilingSettings_SettingType__Enum__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::ProfilingSettings_SettingType__Enum__Array__Array__Class>(type_info, "Moon.Telemetry.Performance", "ProfilingSettings+SettingType[][]");
        }
        inline app::ProfilingSettings_SettingType__Enum__Array__Array* create() {
            return il2cpp::create_object<app::ProfilingSettings_SettingType__Enum__Array__Array>(get_class());
        }
    } // namespace ProfilingSettings_SettingType__Enum__Array__Array
} // namespace app::classes::types
