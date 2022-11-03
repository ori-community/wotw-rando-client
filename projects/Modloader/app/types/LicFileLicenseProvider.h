#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LicFileLicenseProvider {
        namespace {
            inline app::LicFileLicenseProvider__Class* type_info_ref = nullptr;
        }
        inline app::LicFileLicenseProvider__Class** type_info = &type_info_ref;
        inline app::LicFileLicenseProvider__Class* get_class() {
            return il2cpp::get_class<app::LicFileLicenseProvider__Class>(type_info, "System.ComponentModel", "LicFileLicenseProvider");
        }
        inline app::LicFileLicenseProvider* create() {
            return il2cpp::create_object<app::LicFileLicenseProvider>(get_class());
        }
    } // namespace LicFileLicenseProvider
} // namespace app::classes::types
