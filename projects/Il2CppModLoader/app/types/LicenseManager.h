#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LicenseManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LicenseManager__Class** type_info;
        inline app::LicenseManager__Class* get_class() {
            return il2cpp::get_class<app::LicenseManager__Class>(type_info, "System.ComponentModel", "LicenseManager");
        }
        inline app::LicenseManager* create() {
            return il2cpp::create_object<app::LicenseManager>(get_class());
        }
    } // namespace LicenseManager
} // namespace app::classes::types
