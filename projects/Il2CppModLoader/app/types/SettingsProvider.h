#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SettingsProvider {
        namespace {
            inline app::SettingsProvider__Class* type_info_ref = nullptr;
        }
        inline app::SettingsProvider__Class** type_info = &type_info_ref;
        inline app::SettingsProvider__Class* get_class() {
            return il2cpp::get_class<app::SettingsProvider__Class>(type_info, "System.Configuration", "SettingsProvider");
        }
        inline app::SettingsProvider* create() {
            return il2cpp::create_object<app::SettingsProvider>(get_class());
        }
    } // namespace SettingsProvider
} // namespace app::classes::types
