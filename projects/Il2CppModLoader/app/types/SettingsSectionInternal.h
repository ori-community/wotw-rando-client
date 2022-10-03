#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SettingsSectionInternal {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SettingsSectionInternal__Class** type_info;
        inline app::SettingsSectionInternal__Class* get_class() {
            return il2cpp::get_class<app::SettingsSectionInternal__Class>(type_info, "System.Net.Configuration", "SettingsSectionInternal");
        }
        inline app::SettingsSectionInternal* create() {
            return il2cpp::create_object<app::SettingsSectionInternal>(get_class());
        }
    } // namespace SettingsSectionInternal
} // namespace app::classes::types
