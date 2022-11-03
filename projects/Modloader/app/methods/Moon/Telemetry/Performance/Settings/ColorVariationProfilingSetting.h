#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::ColorVariationProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00910BD0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::ColorVariationProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3B820, bool, GetState, (app::ColorVariationProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3B8E0, void, SetState, (app::ColorVariationProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ColorVariationProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::ColorVariationProfilingSetting
