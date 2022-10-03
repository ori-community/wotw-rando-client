#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SettingsPropertyNotFoundException {
        namespace {
            app::SettingsPropertyNotFoundException__Class* type_info_ref = nullptr;
        }
        app::SettingsPropertyNotFoundException__Class** type_info = &type_info_ref;
        inline app::SettingsPropertyNotFoundException__Class* get_class() {
            return il2cpp::get_class<app::SettingsPropertyNotFoundException__Class>(type_info, "System.Configuration", "SettingsPropertyNotFoundException");
        }
        inline app::SettingsPropertyNotFoundException* create() {
            return il2cpp::create_object<app::SettingsPropertyNotFoundException>(get_class());
        }
    } // namespace SettingsPropertyNotFoundException
} // namespace app::classes::types
