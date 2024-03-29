#pragma once
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum__Array.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum__Array__Array.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProfilingSettings_SettingType__Enum__Array {
        inline app::ProfilingSettings_SettingType__Enum__Array__Class** type_info() {
            static app::ProfilingSettings_SettingType__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ProfilingSettings_SettingType__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x0478F440));
            }
            return cache;
        }
        inline app::ProfilingSettings_SettingType__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::ProfilingSettings_SettingType__Enum__Array__Class>(type_info(), "Moon.Telemetry.Performance", "ProfilingSettings+SettingType[]");
        }
        inline app::ProfilingSettings_SettingType__Enum__Array* create() {
            return il2cpp::create_object<app::ProfilingSettings_SettingType__Enum__Array>(get_class());
        }
        inline app::ProfilingSettings_SettingType__Enum__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::ProfilingSettings_SettingType__Enum__Array__Array>(get_class(), size);
        }
        inline app::ProfilingSettings_SettingType__Enum__Array__Array* create_array(const std::vector<app::ProfilingSettings_SettingType__Enum__Array*>& items) {
            return il2cpp::array_new<app::ProfilingSettings_SettingType__Enum__Array__Array>(get_class(), items);
        }
    } // namespace ProfilingSettings_SettingType__Enum__Array
} // namespace app::classes::types
