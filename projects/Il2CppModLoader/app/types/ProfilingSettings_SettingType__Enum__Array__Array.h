#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProfilingSettings_SettingType__Enum__Array__Array {
        inline app::ProfilingSettings_SettingType__Enum__Array__Array__Class** type_info = (app::ProfilingSettings_SettingType__Enum__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x0476FC60));
        inline app::ProfilingSettings_SettingType__Enum__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::ProfilingSettings_SettingType__Enum__Array__Array__Class>(type_info, "Moon.Telemetry.Performance", "ProfilingSettings+SettingType[][]");
        }
        inline app::ProfilingSettings_SettingType__Enum__Array__Array* create() {
            return il2cpp::create_object<app::ProfilingSettings_SettingType__Enum__Array__Array>(get_class());
        }
    } // namespace ProfilingSettings_SettingType__Enum__Array__Array
} // namespace app::classes::types
