#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ToggleSettingsAction_SettingType__Enum {
        namespace {
            app::ToggleSettingsAction_SettingType__Enum__Class* type_info_ref = nullptr;
        }
        app::ToggleSettingsAction_SettingType__Enum__Class** type_info = &type_info_ref;
        inline app::ToggleSettingsAction_SettingType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ToggleSettingsAction_SettingType__Enum__Class>(type_info, "", "ToggleSettingsAction", "SettingType");
        }
        inline app::ToggleSettingsAction_SettingType__Enum* create() {
            return il2cpp::create_object<app::ToggleSettingsAction_SettingType__Enum>(get_class());
        }
    } // namespace ToggleSettingsAction_SettingType__Enum
} // namespace app::classes::types
