#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LicenseProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LicenseProvider__Class** type_info;
        inline app::LicenseProvider__Class* get_class() {
            return il2cpp::get_class<app::LicenseProvider__Class>(type_info, "System.ComponentModel", "LicenseProvider");
        }
        inline app::LicenseProvider* create() {
            return il2cpp::create_object<app::LicenseProvider>(get_class());
        }
    } // namespace LicenseProvider
} // namespace app::classes::types
