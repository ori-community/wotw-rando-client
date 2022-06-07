#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::ReduceSceneUnloadUtilityProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3EEB0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::ReduceSceneUnloadUtilityProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3EEC0, bool, GetState, (app::ReduceSceneUnloadUtilityProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3EFB0, void, SetState, (app::ReduceSceneUnloadUtilityProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ReduceSceneUnloadUtilityProfilingSetting * this_ptr))
}
