#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PickupCameraTarget {
    IL2CPP_REGISTER_METHOD(0x01158B30, bool, get_CameraTargetActive, (app::PickupCameraTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_CameraTargetPosition, (app::PickupCameraTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01158C50, app::Vector2, get_CameraTargetPadding, (app::PickupCameraTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01158D00, app::Vector3, get_CameraInfluencePosition, (app::PickupCameraTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01158D30, void, AdjustCameraTargetWeight, (app::PickupCameraTarget * this_ptr, float* weight, app::CameraTargetData* data, app::Vector3 primary_target_position))
    IL2CPP_REGISTER_METHOD(0x01158E60, float, get_CameraInfluenceMinDist, (app::PickupCameraTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01158F00, float, get_CameraInfluenceMaxDist, (app::PickupCameraTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A372E0, app::Vector2, get_CameraZoomFactor, (app::PickupCameraTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, app::CameraTargetType__Enum, get_TargetType, (app::PickupCameraTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01158FA0, void, GetTargetData, (app::PickupCameraTarget * this_ptr, app::CameraTargetData** data))
    IL2CPP_REGISTER_METHOD(0x01159200, void, OnEnable, (app::PickupCameraTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01157A00, void, OnDisable, (app::PickupCameraTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01159400, void, ctor, (app::PickupCameraTarget * this_ptr))
} // namespace app::classes::PickupCameraTarget
