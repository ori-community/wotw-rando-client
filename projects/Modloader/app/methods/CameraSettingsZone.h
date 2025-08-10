#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraSettings.h>
#include <Modloader/app/structs/CameraSettingsZone.h>
#include <Modloader/app/structs/SelectableCategory__Enum.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::CameraSettingsZone {
    IL2CPP_REGISTER_METHOD(0x016A8680, app::CameraSettings*, GetSettings, app::CameraSettingsZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016A8860, void, ResetSettings, app::CameraSettingsZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016A8870, void, Register, app::CameraSettingsZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016A8A60, void, OnEnable, app::CameraSettingsZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016A8DA0, void, OnDisable, app::CameraSettingsZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016A8E60, float, get_Strength, app::CameraSettingsZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016A8E80, void, Advance, app::CameraSettingsZone* this_ptr, app::Vector2 position, float time_delta)
    IL2CPP_REGISTER_METHOD(0x016A8FF0, float, CalculateStrengthFromPosition, app::CameraSettingsZone* this_ptr, app::Vector2 position)
    IL2CPP_REGISTER_METHOD(0x00910BD0, app::SelectableCategory__Enum, get_Category, app::CameraSettingsZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016A9380, void, ctor, app::CameraSettingsZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016A93D0, void, cctor, )
} // namespace app::classes::CameraSettingsZone
