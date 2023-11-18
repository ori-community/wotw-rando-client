#pragma once
#include <Modloader/app/structs/LicenseManager_LicenseInteropHelper.h>
#include <Modloader/app/structs/LicenseManager_LicenseInteropHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LicenseManager_LicenseInteropHelper {
        inline app::LicenseManager_LicenseInteropHelper__Class** type_info() {
            static app::LicenseManager_LicenseInteropHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LicenseManager_LicenseInteropHelper__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LicenseManager_LicenseInteropHelper__Class* get_class() {
            return il2cpp::get_nested_class<app::LicenseManager_LicenseInteropHelper__Class>(type_info(), "System.ComponentModel", "LicenseManager", "LicenseInteropHelper");
        }
        inline app::LicenseManager_LicenseInteropHelper* create() {
            return il2cpp::create_object<app::LicenseManager_LicenseInteropHelper>(get_class());
        }
    } // namespace LicenseManager_LicenseInteropHelper
} // namespace app::classes::types
