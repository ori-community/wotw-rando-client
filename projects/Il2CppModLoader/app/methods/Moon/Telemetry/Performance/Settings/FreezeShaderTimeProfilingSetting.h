#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::FreezeShaderTimeProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00D5A0A0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::FreezeShaderTimeProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3CFB0, bool, GetState, (app::FreezeShaderTimeProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3D040, void, SetState, (app::FreezeShaderTimeProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::FreezeShaderTimeProfilingSetting * this_ptr))
}
