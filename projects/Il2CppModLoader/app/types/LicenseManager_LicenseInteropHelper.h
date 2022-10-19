#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LicenseManager_LicenseInteropHelper {
        namespace {
            inline app::LicenseManager_LicenseInteropHelper__Class* type_info_ref = nullptr;
        }
        inline app::LicenseManager_LicenseInteropHelper__Class** type_info = &type_info_ref;
        inline app::LicenseManager_LicenseInteropHelper__Class* get_class() {
            return il2cpp::get_nested_class<app::LicenseManager_LicenseInteropHelper__Class>(type_info, "System.ComponentModel", "LicenseManager", "LicenseInteropHelper");
        }
        inline app::LicenseManager_LicenseInteropHelper* create() {
            return il2cpp::create_object<app::LicenseManager_LicenseInteropHelper>(get_class());
        }
    } // namespace LicenseManager_LicenseInteropHelper
} // namespace app::classes::types
