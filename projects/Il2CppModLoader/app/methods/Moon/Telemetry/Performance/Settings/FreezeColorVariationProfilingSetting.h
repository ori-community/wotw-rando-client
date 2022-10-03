#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::FreezeColorVariationProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3CE50, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::FreezeColorVariationProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3CE60, bool, GetState, (app::FreezeColorVariationProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3CF00, void, SetState, (app::FreezeColorVariationProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::FreezeColorVariationProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::FreezeColorVariationProfilingSetting
