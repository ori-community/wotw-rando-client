#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LicenseUsageMode__Enum.h>
#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/DesigntimeLicenseContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::ComponentModel::Design::DesigntimeLicenseContext {
    IL2CPP_REGISTER_METHOD(0x00417920, app::LicenseUsageMode__Enum, get_UsageMode, (app::DesigntimeLicenseContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String*, GetSavedLicenseKey, (app::DesigntimeLicenseContext * this_ptr, app::Type* type, app::Assembly* resource_assembly))
    IL2CPP_REGISTER_METHOD(0x01FE3370, void, SetSavedLicenseKey, (app::DesigntimeLicenseContext * this_ptr, app::Type* type, app::String* key))
    IL2CPP_REGISTER_METHOD(0x01FE33E0, void, ctor, (app::DesigntimeLicenseContext * this_ptr))
} // namespace app::classes::System::ComponentModel::Design::DesigntimeLicenseContext
