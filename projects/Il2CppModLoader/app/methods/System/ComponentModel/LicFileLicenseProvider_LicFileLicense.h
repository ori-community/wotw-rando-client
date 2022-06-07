#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::LicFileLicenseProvider_LicFileLicense {
    IL2CPP_REGISTER_METHOD(0x01FF07E0, void, ctor, (app::LicFileLicenseProvider_LicFileLicense * this_ptr, app::LicFileLicenseProvider * owner, app::String * key))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_LicenseKey, (app::LicFileLicenseProvider_LicFileLicense * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FF07F0, void, Dispose, (app::LicFileLicenseProvider_LicFileLicense * this_ptr))
}
