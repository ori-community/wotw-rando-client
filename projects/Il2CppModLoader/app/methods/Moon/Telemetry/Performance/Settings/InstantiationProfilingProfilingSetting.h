#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::InstantiationProfilingProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x007EC3F0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::InstantiationProfilingProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3D660, bool, GetState, (app::InstantiationProfilingProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3D700, void, SetState, (app::InstantiationProfilingProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::InstantiationProfilingProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::InstantiationProfilingProfilingSetting
