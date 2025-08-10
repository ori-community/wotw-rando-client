#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PanicHintsProfilingSetting.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::PanicHintsProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3E7F0, app::ProfilingSettings_SettingType__Enum, get_SettingType, app::PanicHintsProfilingSetting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E3E800, bool, GetState, app::PanicHintsProfilingSetting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E3E8A0, void, SetState, app::PanicHintsProfilingSetting* this_ptr, bool state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PanicHintsProfilingSetting* this_ptr)
} // namespace app::classes::Moon::Telemetry::Performance::Settings::PanicHintsProfilingSetting
