#pragma once
#include <Modloader/app/structs/ProfilingSettings_SettingAction__Enum.h>
#include <Modloader/app/structs/ProfilingSettings_SettingAction__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProfilingSettings_SettingAction__Enum {
        inline app::ProfilingSettings_SettingAction__Enum__Class** type_info() {
            static app::ProfilingSettings_SettingAction__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ProfilingSettings_SettingAction__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ProfilingSettings_SettingAction__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ProfilingSettings_SettingAction__Enum__Class>(type_info(), "Moon.Telemetry.Performance", "ProfilingSettings", "SettingAction");
        }
        inline app::ProfilingSettings_SettingAction__Enum* create() {
            return il2cpp::create_object<app::ProfilingSettings_SettingAction__Enum>(get_class());
        }
    } // namespace ProfilingSettings_SettingAction__Enum
} // namespace app::classes::types
