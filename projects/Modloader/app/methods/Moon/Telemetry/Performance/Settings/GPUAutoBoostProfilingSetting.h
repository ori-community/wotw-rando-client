#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::GPUAutoBoostProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::GPUAutoBoostProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3D0E0, bool, GetState, (app::GPUAutoBoostProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3D170, void, SetState, (app::GPUAutoBoostProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GPUAutoBoostProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::GPUAutoBoostProfilingSetting
