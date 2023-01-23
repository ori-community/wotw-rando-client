#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SettingsStringProvider_SettingType__Enum__Class.h>
#include <Modloader/app/structs/SettingsStringProvider_SettingType__Enum.h>

namespace app::classes::types {
    namespace SettingsStringProvider_SettingType__Enum {
        namespace {
            inline app::SettingsStringProvider_SettingType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SettingsStringProvider_SettingType__Enum__Class** type_info = &type_info_ref;
        inline app::SettingsStringProvider_SettingType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SettingsStringProvider_SettingType__Enum__Class>(type_info, "", "SettingsStringProvider", "SettingType");
        }
        inline app::SettingsStringProvider_SettingType__Enum* create() {
            return il2cpp::create_object<app::SettingsStringProvider_SettingType__Enum>(get_class());
        }
    } // namespace SettingsStringProvider_SettingType__Enum
} // namespace app::classes::types
