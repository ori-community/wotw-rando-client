#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::ComponentModel::LicenseContext {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::LicenseUsageMode__Enum, get_UsageMode, (app::LicenseContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String*, GetSavedLicenseKey, (app::LicenseContext * this_ptr, app::Type* type, app::Assembly* resource_assembly))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Object*, GetService, (app::LicenseContext * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetSavedLicenseKey, (app::LicenseContext * this_ptr, app::Type* type, app::String* key))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LicenseContext * this_ptr))
} // namespace app::classes::System::ComponentModel::LicenseContext
