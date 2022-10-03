#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraOffsetZone {
    IL2CPP_REGISTER_METHOD(0x003FF790, bool, get_IsPerformingZoomOutAndDisable, (app::CameraOffsetZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FF790, bool, get_AutoZoomOutAndDisable, (app::CameraOffsetZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0169BED0, void, FitRoomBound, (app::CameraOffsetZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0169C1F0, float, get_ZoomOnEnableCurveLength, (app::CameraOffsetZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0169C2F0, float, get_DampingTimeNormalized, (app::CameraOffsetZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0169C3D0, float, GetOnEanbleDampingValue, (app::CameraOffsetZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0169C440, void, ResetDampingTimer, (app::CameraOffsetZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F01340, void, StopZoomingOut, (app::CameraOffsetZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0169C450, void, OnEnable, (app::CameraOffsetZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0169C4F0, void, OnDisable, (app::CameraOffsetZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0169C640, void, DisableAfterZoomOut, (app::CameraOffsetZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0169C680, app::Bounds, GetOuterBounds, (app::CameraOffsetZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015DD640, app::Bounds, GetInnerBounds, (app::CameraOffsetZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, app::SelectableCategory__Enum, get_Category, (app::CameraOffsetZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0169C990, void, Update, (app::CameraOffsetZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0169CA20, float, NormalizedMarginPenetration, (app::CameraOffsetZone * this_ptr, app::Vector3 world_position))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CameraOffsetZone * this_ptr))
} // namespace app::classes::CameraOffsetZone
