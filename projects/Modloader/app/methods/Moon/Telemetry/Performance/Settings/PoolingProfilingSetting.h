#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#include <Modloader/app/structs/PoolingProfilingSetting.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::PoolingProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3EBF0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::PoolingProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3EC00, bool, GetState, (app::PoolingProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3ED20, void, SetState, (app::PoolingProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PoolingProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::PoolingProfilingSetting
