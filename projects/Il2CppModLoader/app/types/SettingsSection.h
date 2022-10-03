#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SettingsSection {
        namespace {
            app::SettingsSection__Class* type_info_ref = nullptr;
        }
        app::SettingsSection__Class** type_info = &type_info_ref;
        inline app::SettingsSection__Class* get_class() {
            return il2cpp::get_class<app::SettingsSection__Class>(type_info, "System.Net.Configuration", "SettingsSection");
        }
        inline app::SettingsSection* create() {
            return il2cpp::create_object<app::SettingsSection>(get_class());
        }
    } // namespace SettingsSection
} // namespace app::classes::types
