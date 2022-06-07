#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraSettingOverrides {
    IL2CPP_REGISTER_METHOD(0x016A4C60, app::CameraSettings *, GetCameraSettings, (app::CameraSettingOverrides * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CameraSettingOverrides * this_ptr))
}
