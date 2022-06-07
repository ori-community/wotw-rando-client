#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::UberPoolPrewarmExhaustedProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E40A60, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::UberPoolPrewarmExhaustedProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E40A70, bool, GetState, (app::UberPoolPrewarmExhaustedProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E40B10, void, SetState, (app::UberPoolPrewarmExhaustedProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UberPoolPrewarmExhaustedProfilingSetting * this_ptr))
}
