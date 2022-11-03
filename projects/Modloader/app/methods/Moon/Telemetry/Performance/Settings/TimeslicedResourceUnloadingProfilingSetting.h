#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::TimeslicedResourceUnloadingProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E40570, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::TimeslicedResourceUnloadingProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E40580, bool, GetState, (app::TimeslicedResourceUnloadingProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E40620, void, SetState, (app::TimeslicedResourceUnloadingProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TimeslicedResourceUnloadingProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::TimeslicedResourceUnloadingProfilingSetting
