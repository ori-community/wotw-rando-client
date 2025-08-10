#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicResolutionScalingProfilingSetting.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#include <Modloader/app/structs/RenderScope__Enum.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::DynamicResolutionScalingProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3BD70, app::ProfilingSettings_SettingType__Enum, get_SettingType, app::DynamicResolutionScalingProfilingSetting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E3BD80, app::RenderScope__Enum*, GetScope, app::DynamicResolutionScalingProfilingSetting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DynamicResolutionScalingProfilingSetting* this_ptr)
} // namespace app::classes::Moon::Telemetry::Performance::Settings::DynamicResolutionScalingProfilingSetting
