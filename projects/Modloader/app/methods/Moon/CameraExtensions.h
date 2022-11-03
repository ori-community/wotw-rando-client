#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::CameraExtensions {
    IL2CPP_REGISTER_METHOD(0x00CC2400, app::Int2, pixelSize, (app::Camera * _this))
    IL2CPP_REGISTER_METHOD(0x00CC24C0, int32_t, pixelCount, (app::Camera * _this))
    IL2CPP_REGISTER_METHOD(0x00CC2570, bool, isGame, (app::Camera * _this))
    IL2CPP_REGISTER_METHOD(0x00CC25E0, bool, isSceneView, (app::Camera * _this))
    IL2CPP_REGISTER_METHOD(0x00CC2650, bool, isMain, (app::Camera * _this))
    IL2CPP_REGISTER_METHOD(0x00CC2790, app::Matrix4x4, viewMatrix, (app::Camera * _this))
} // namespace app::classes::Moon::CameraExtensions
