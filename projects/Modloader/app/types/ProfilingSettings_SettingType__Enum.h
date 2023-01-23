#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum__Class.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum__Array.h>

namespace app::classes::types {
    namespace ProfilingSettings_SettingType__Enum {
        inline app::ProfilingSettings_SettingType__Enum__Class** type_info = (app::ProfilingSettings_SettingType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476B178));
        inline app::ProfilingSettings_SettingType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ProfilingSettings_SettingType__Enum__Class>(type_info, "Moon.Telemetry.Performance", "ProfilingSettings", "SettingType");
        }
        inline app::ProfilingSettings_SettingType__Enum* create() {
            return il2cpp::create_object<app::ProfilingSettings_SettingType__Enum>(get_class());
        }
        inline app::ProfilingSettings_SettingType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::ProfilingSettings_SettingType__Enum__Array>(get_class(), size);
        }
        inline app::ProfilingSettings_SettingType__Enum__Array* create_array(const std::vector<app::ProfilingSettings_SettingType__Enum*>& items) {
            return il2cpp::array_new<app::ProfilingSettings_SettingType__Enum__Array>(get_class(), items);
        }
    } // namespace ProfilingSettings_SettingType__Enum
} // namespace app::classes::types
