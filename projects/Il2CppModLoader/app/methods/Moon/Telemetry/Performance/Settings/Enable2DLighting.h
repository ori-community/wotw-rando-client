#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::Enable2DLighting {
    IL2CPP_REGISTER_METHOD(0x00E3BFA0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::Enable2DLighting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3BFB0, bool, GetState, (app::Enable2DLighting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3C070, void, SetState, (app::Enable2DLighting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Enable2DLighting * this_ptr))
}
