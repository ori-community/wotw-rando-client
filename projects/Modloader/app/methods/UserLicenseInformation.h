#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UserLicenseInformation.h>

namespace app::classes::UserLicenseInformation {
    IL2CPP_REGISTER_METHOD(0x013B1840, bool, get_IsFullVersion, ())
    IL2CPP_REGISTER_METHOD(0x013B1930, bool, get_IsTrial, ())
    IL2CPP_REGISTER_METHOD(0x013B1A20, bool, get_IsTrialUsed, ())
    IL2CPP_REGISTER_METHOD(0x013B1B10, void, ctor, (app::UserLicenseInformation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013B1B10, void, OnLicenseChanged, (app::UserLicenseInformation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013B1B20, void, cctor, ())
} // namespace app::classes::UserLicenseInformation
