#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LicenseException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LicenseException__Class** type_info;
        inline app::LicenseException__Class* get_class() {
            return il2cpp::get_class<app::LicenseException__Class>(type_info, "System.ComponentModel", "LicenseException");
        }
        inline app::LicenseException* create() {
            return il2cpp::create_object<app::LicenseException>(get_class());
        }
    } // namespace LicenseException
} // namespace app::classes::types
