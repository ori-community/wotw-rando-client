#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::TrilinearFilteringProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E406F0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::TrilinearFilteringProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, GetState, (app::TrilinearFilteringProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E40700, void, SetState, (app::TrilinearFilteringProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TrilinearFilteringProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::TrilinearFilteringProfilingSetting
