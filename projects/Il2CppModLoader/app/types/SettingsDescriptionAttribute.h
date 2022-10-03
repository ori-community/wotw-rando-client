#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SettingsDescriptionAttribute {
        namespace {
            app::SettingsDescriptionAttribute__Class* type_info_ref = nullptr;
        }
        app::SettingsDescriptionAttribute__Class** type_info = &type_info_ref;
        inline app::SettingsDescriptionAttribute__Class* get_class() {
            return il2cpp::get_class<app::SettingsDescriptionAttribute__Class>(type_info, "System.Configuration", "SettingsDescriptionAttribute");
        }
        inline app::SettingsDescriptionAttribute* create() {
            return il2cpp::create_object<app::SettingsDescriptionAttribute>(get_class());
        }
    } // namespace SettingsDescriptionAttribute
} // namespace app::classes::types
