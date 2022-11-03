#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Telemetry::Performance::ProfilingSettings_Setting {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::ProfilingSettings_SettingType__Enum, get_Type, (app::ProfilingSettings_Setting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_Type, (app::ProfilingSettings_Setting * this_ptr, app::ProfilingSettings_SettingType__Enum value))
    IL2CPP_REGISTER_METHOD(0x00CC59E0, app::ProfilingSettings_SettingAction__Enum, get_Action, (app::ProfilingSettings_Setting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_Action, (app::ProfilingSettings_Setting * this_ptr, app::ProfilingSettings_SettingAction__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ProfilingSettings_Setting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::ProfilingSettings_Setting
