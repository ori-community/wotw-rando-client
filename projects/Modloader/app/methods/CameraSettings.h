#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraSettings {
    IL2CPP_REGISTER_METHOD(0x016A4E00, void, ctor_1, (app::CameraSettings * this_ptr, app::CameraSettings* settings))
    IL2CPP_REGISTER_METHOD(0x016A5900, void, CopyFrom, (app::CameraSettings * this_ptr, app::CameraSettings* settings))
    IL2CPP_REGISTER_METHOD(0x016A5CC0, void, ctor_2, (app::CameraSettings * this_ptr, app::CameraSettingsAsset* settings, app::FogGradientController* fog_gradient))
    IL2CPP_REGISTER_METHOD(0x016A6AD0, app::Color__Array*, ConvertGradient, (app::Gradient * gradient))
    IL2CPP_REGISTER_METHOD(0x016A6C30, void, ctor_3, (app::CameraSettings * this_ptr, app::CameraSettingsAsset* camera_settings, app::Gradient* fog_gradient, app::Gradient* multiply_fog_gradient, float range))
} // namespace app::classes::CameraSettings
