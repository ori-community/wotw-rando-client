#pragma once
#include <Modloader/app/structs/ToggleSettingsAction_SettingType__Enum.h>
#include <Modloader/app/structs/ToggleSettingsAction_SettingType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ToggleSettingsAction_SettingType__Enum {
        inline app::ToggleSettingsAction_SettingType__Enum__Class** type_info() {
            static app::ToggleSettingsAction_SettingType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ToggleSettingsAction_SettingType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ToggleSettingsAction_SettingType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ToggleSettingsAction_SettingType__Enum__Class>(type_info(), "", "ToggleSettingsAction", "SettingType");
        }
        inline app::ToggleSettingsAction_SettingType__Enum* create() {
            return il2cpp::create_object<app::ToggleSettingsAction_SettingType__Enum>(get_class());
        }
    } // namespace ToggleSettingsAction_SettingType__Enum
} // namespace app::classes::types
