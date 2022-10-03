#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LicFileLicenseProvider_LicFileLicense {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LicFileLicenseProvider_LicFileLicense__Class** type_info;
        inline app::LicFileLicenseProvider_LicFileLicense__Class* get_class() {
            return il2cpp::get_nested_class<app::LicFileLicenseProvider_LicFileLicense__Class>(type_info, "System.ComponentModel", "LicFileLicenseProvider", "LicFileLicense");
        }
        inline app::LicFileLicenseProvider_LicFileLicense* create() {
            return il2cpp::create_object<app::LicFileLicenseProvider_LicFileLicense>(get_class());
        }
    } // namespace LicFileLicenseProvider_LicFileLicense
} // namespace app::classes::types
