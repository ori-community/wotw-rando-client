#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#include <Modloader/app/structs/ObjectProfilingProfilingSetting.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::ObjectProfilingProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3E570, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::ObjectProfilingProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3E580, bool, GetState, (app::ObjectProfilingProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3E610, void, SetState, (app::ObjectProfilingProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ObjectProfilingProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::ObjectProfilingProfilingSetting
