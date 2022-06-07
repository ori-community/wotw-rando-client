#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::BoostModeProfilingSetting_MainThreadLoadDebuggerProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3B530, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::BoostModeProfilingSetting_MainThreadLoadDebuggerProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00481590, bool, GetState, (app::BoostModeProfilingSetting_MainThreadLoadDebuggerProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3B540, void, SetState, (app::BoostModeProfilingSetting_MainThreadLoadDebuggerProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BoostModeProfilingSetting_MainThreadLoadDebuggerProfilingSetting * this_ptr))
}
