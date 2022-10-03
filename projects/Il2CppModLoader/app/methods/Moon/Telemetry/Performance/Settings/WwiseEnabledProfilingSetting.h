#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::WwiseEnabledProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E40FA0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::WwiseEnabledProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E40FB0, bool, GetState, (app::WwiseEnabledProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E41050, void, SetState, (app::WwiseEnabledProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WwiseEnabledProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::WwiseEnabledProfilingSetting
