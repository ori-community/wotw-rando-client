#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#include <Modloader/app/structs/WorkersOnAllCoresProfilingSetting.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::WorkersOnAllCoresProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00ACB190, app::ProfilingSettings_SettingType__Enum, get_SettingType, app::WorkersOnAllCoresProfilingSetting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GetState, app::WorkersOnAllCoresProfilingSetting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E40F00, void, SetState, app::WorkersOnAllCoresProfilingSetting* this_ptr, bool state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::WorkersOnAllCoresProfilingSetting* this_ptr)
} // namespace app::classes::Moon::Telemetry::Performance::Settings::WorkersOnAllCoresProfilingSetting
