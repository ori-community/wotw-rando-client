#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::EarlyZReconstructionProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x008556D0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::EarlyZReconstructionProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3BDE0, bool, GetState, (app::EarlyZReconstructionProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3BEA0, void, SetState, (app::EarlyZReconstructionProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EarlyZReconstructionProfilingSetting * this_ptr))
}
