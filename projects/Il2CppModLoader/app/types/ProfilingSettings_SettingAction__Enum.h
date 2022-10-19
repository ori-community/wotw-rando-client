#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProfilingSettings_SettingAction__Enum {
        namespace {
            inline app::ProfilingSettings_SettingAction__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ProfilingSettings_SettingAction__Enum__Class** type_info = &type_info_ref;
        inline app::ProfilingSettings_SettingAction__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ProfilingSettings_SettingAction__Enum__Class>(type_info, "Moon.Telemetry.Performance", "ProfilingSettings", "SettingAction");
        }
        inline app::ProfilingSettings_SettingAction__Enum* create() {
            return il2cpp::create_object<app::ProfilingSettings_SettingAction__Enum>(get_class());
        }
    } // namespace ProfilingSettings_SettingAction__Enum
} // namespace app::classes::types
