#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NoBlurAroundFocusSliceProfilingSetting.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::NoBlurAroundFocusSliceProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3E390, app::ProfilingSettings_SettingType__Enum, get_SettingType, app::NoBlurAroundFocusSliceProfilingSetting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E3E3A0, bool, GetState, app::NoBlurAroundFocusSliceProfilingSetting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E3E460, void, SetState, app::NoBlurAroundFocusSliceProfilingSetting* this_ptr, bool state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::NoBlurAroundFocusSliceProfilingSetting* this_ptr)
} // namespace app::classes::Moon::Telemetry::Performance::Settings::NoBlurAroundFocusSliceProfilingSetting
