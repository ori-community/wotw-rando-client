#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LicFileLicenseProvider_LicFileLicense {
        inline app::LicFileLicenseProvider_LicFileLicense__Class** type_info = (app::LicFileLicenseProvider_LicFileLicense__Class**)(modloader::win::memory::resolve_rva(0x047741F8));
        inline app::LicFileLicenseProvider_LicFileLicense__Class* get_class() {
            return il2cpp::get_nested_class<app::LicFileLicenseProvider_LicFileLicense__Class>(type_info, "System.ComponentModel", "LicFileLicenseProvider", "LicFileLicense");
        }
        inline app::LicFileLicenseProvider_LicFileLicense* create() {
            return il2cpp::create_object<app::LicFileLicenseProvider_LicFileLicense>(get_class());
        }
    } // namespace LicFileLicenseProvider_LicFileLicense
} // namespace app::classes::types
