#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::JobsThresholdSuspendProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3D7B0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::JobsThresholdSuspendProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3D7C0, bool, GetState, (app::JobsThresholdSuspendProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3D890, void, SetState, (app::JobsThresholdSuspendProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::JobsThresholdSuspendProfilingSetting * this_ptr))
}
