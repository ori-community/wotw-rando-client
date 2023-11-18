#pragma once
#include <Modloader/app/structs/LicFileLicenseProvider.h>
#include <Modloader/app/structs/LicFileLicenseProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LicFileLicenseProvider {
        inline app::LicFileLicenseProvider__Class** type_info() {
            static app::LicFileLicenseProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LicFileLicenseProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LicFileLicenseProvider__Class* get_class() {
            return il2cpp::get_class<app::LicFileLicenseProvider__Class>(type_info(), "System.ComponentModel", "LicFileLicenseProvider");
        }
        inline app::LicFileLicenseProvider* create() {
            return il2cpp::create_object<app::LicFileLicenseProvider>(get_class());
        }
    } // namespace LicFileLicenseProvider
} // namespace app::classes::types
