#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::BreadCrumbPositionTracker {
    IL2CPP_REGISTER_METHOD(0x00D4A100, bool, get_HasPath, (app::BreadCrumbPositionTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D4A190, void, ctor, (app::BreadCrumbPositionTracker * this_ptr, float track_interval, float point_lifetime))
    IL2CPP_REGISTER_METHOD(0x00D4A3D0, void, UpdateTracking, (app::BreadCrumbPositionTracker * this_ptr, app::Vector2 target, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00D4A6E0, void, TrackTarget, (app::BreadCrumbPositionTracker * this_ptr, app::Vector2 target))
    IL2CPP_REGISTER_METHOD(0x00D4A800, void, Clear, (app::BreadCrumbPositionTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D4A8B0, void, Reset, (app::BreadCrumbPositionTracker * this_ptr, float track_interval, float point_lifetime))
    IL2CPP_REGISTER_METHOD(0x00D4A990, app::Vector2, GetCurrentTrackedPoint, (app::BreadCrumbPositionTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D4AA40, app::Vector2, GetNextTrackedPoint, (app::BreadCrumbPositionTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D4AAF0, void, UseCurrentTrackedPoint, (app::BreadCrumbPositionTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D4AC10, void, ResetKillTimer, (app::BreadCrumbPositionTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D4AC20, void, DrawGizmos, (app::BreadCrumbPositionTracker * this_ptr))
} // namespace app::classes::BreadCrumbPositionTracker
