#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraSettings.h>
#include <Modloader/app/structs/CameraSettingOverrides.h>

namespace app::classes::CameraSettingOverrides {
    IL2CPP_REGISTER_METHOD(0x016A4C60, app::CameraSettings*, GetCameraSettings, (app::CameraSettingOverrides * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CameraSettingOverrides * this_ptr))
} // namespace app::classes::CameraSettingOverrides
