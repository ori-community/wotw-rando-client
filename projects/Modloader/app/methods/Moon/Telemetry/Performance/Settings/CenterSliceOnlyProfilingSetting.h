#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#include <Modloader/app/structs/CenterSliceOnlyProfilingSetting.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::CenterSliceOnlyProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00420230, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::CenterSliceOnlyProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3B550, void, CacheDefault, (app::CenterSliceOnlyProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3B640, bool, GetState, (app::CenterSliceOnlyProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3B720, void, SetState, (app::CenterSliceOnlyProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CenterSliceOnlyProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::CenterSliceOnlyProfilingSetting
