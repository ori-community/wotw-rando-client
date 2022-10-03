#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SettingsGroupNameAttribute {
        namespace {
            app::SettingsGroupNameAttribute__Class* type_info_ref = nullptr;
        }
        app::SettingsGroupNameAttribute__Class** type_info = &type_info_ref;
        inline app::SettingsGroupNameAttribute__Class* get_class() {
            return il2cpp::get_class<app::SettingsGroupNameAttribute__Class>(type_info, "System.Configuration", "SettingsGroupNameAttribute");
        }
        inline app::SettingsGroupNameAttribute* create() {
            return il2cpp::create_object<app::SettingsGroupNameAttribute>(get_class());
        }
    } // namespace SettingsGroupNameAttribute
} // namespace app::classes::types
