#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SettingsStringProvider {
        namespace {
            app::SettingsStringProvider__Class* type_info_ref = nullptr;
        }
        app::SettingsStringProvider__Class** type_info = &type_info_ref;
        inline app::SettingsStringProvider__Class* get_class() {
            return il2cpp::get_class<app::SettingsStringProvider__Class>(type_info, "", "SettingsStringProvider");
        }
        inline app::SettingsStringProvider* create() {
            return il2cpp::create_object<app::SettingsStringProvider>(get_class());
        }
    } // namespace SettingsStringProvider
} // namespace app::classes::types
