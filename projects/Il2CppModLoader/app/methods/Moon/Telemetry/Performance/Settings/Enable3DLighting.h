#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::Enable3DLighting {
    IL2CPP_REGISTER_METHOD(0x00E3C140, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::Enable3DLighting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3C150, bool, GetState, (app::Enable3DLighting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3C210, void, SetState, (app::Enable3DLighting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Enable3DLighting * this_ptr))
}
