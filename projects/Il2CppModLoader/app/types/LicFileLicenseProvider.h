#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LicFileLicenseProvider {
        namespace {
            app::LicFileLicenseProvider__Class* type_info_ref = nullptr;
        }
        app::LicFileLicenseProvider__Class** type_info = &type_info_ref;
        inline app::LicFileLicenseProvider__Class* get_class() {
            return il2cpp::get_class<app::LicFileLicenseProvider__Class>(type_info, "System.ComponentModel", "LicFileLicenseProvider");
        }
        inline app::LicFileLicenseProvider* create() {
            return il2cpp::create_object<app::LicFileLicenseProvider>(get_class());
        }
    } // namespace LicFileLicenseProvider
} // namespace app::classes::types
