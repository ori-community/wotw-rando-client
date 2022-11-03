#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::CameraTargetsProvider {
    IL2CPP_REGISTER_METHOD(0x00CC28F0, app::List_1_Moon_CameraTargetSettings_*, GetTargets, (app::CameraTargetsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC2AF0, void, UpdateProvider, (app::CameraTargetsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateTargets, (app::CameraTargetsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyZoomRange, (app::CameraTargetsProvider * this_ptr, app::Vector2* zoom_range))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyPaddings, (app::CameraTargetsProvider * this_ptr, app::Vector2* horizontal_paddings, app::Vector2* vertical_paddings))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyLerping, (app::CameraTargetsProvider * this_ptr, float* camera_target_lerp_speed, float* zoom_lerp_speed_dec, float* zoom_lerp_speed_inc))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CameraTargetsProvider * this_ptr))
} // namespace app::classes::Moon::CameraTargetsProvider
