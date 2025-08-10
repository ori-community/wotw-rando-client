#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_2_UnityEngine_Vector3_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Func_3_UnityEngine_Vector3_UnityEngine_Vector3_Boolean_.h>
#include <Modloader/app/structs/TargetBreadcrumbsTracker.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::TargetBreadcrumbsTracker {
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::Transform*, get_FollowedTarget, app::TargetBreadcrumbsTracker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_FollowedTarget, app::TargetBreadcrumbsTracker* this_ptr, app::Transform* value)
    IL2CPP_REGISTER_METHOD(0x00CE0950, bool, get_IsFollowing, app::TargetBreadcrumbsTracker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B32900, float, get_ForcedRecordInterval, app::TargetBreadcrumbsTracker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CE09F0, void, set_ForcedRecordInterval, app::TargetBreadcrumbsTracker* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x008A34C0, float, get_MinDistanceBetweenPointsSqr, app::TargetBreadcrumbsTracker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CE0A00, void, Awake, app::TargetBreadcrumbsTracker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CE0B70, void, SetForcedRecordInterval, app::TargetBreadcrumbsTracker* this_ptr, float interval)
    IL2CPP_REGISTER_METHOD(0x00CE0C10, void, SetMinDistanceBetweenBreadcrumbs, app::TargetBreadcrumbsTracker* this_ptr, float distance)
    IL2CPP_REGISTER_METHOD(0x00CE0C20, void, StartTracking_1, app::TargetBreadcrumbsTracker* this_ptr, app::Transform* follow_target)
    IL2CPP_REGISTER_METHOD(
        0x00CE0D40,
        void,
        StartTracking_2,
        app::TargetBreadcrumbsTracker* this_ptr,
        app::Transform* follow_target,
        app::Vector3 first_tracked_point
    )
    IL2CPP_REGISTER_METHOD(0x00CE0E10, void, StopTracking, app::TargetBreadcrumbsTracker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CE0E20, bool, GetNextTrackedPosition, app::TargetBreadcrumbsTracker* this_ptr, app::Vector3* breadcrumb_position)
    IL2CPP_REGISTER_METHOD(0x00CE1050, bool, IterateToNextPoint, app::TargetBreadcrumbsTracker* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FBC10,
        void,
        SetCheckClearanceFunction,
        app::TargetBreadcrumbsTracker* this_ptr,
        app::Func_3_UnityEngine_Vector3_UnityEngine_Vector3_Boolean_* clearance_between_points_func
    )
    IL2CPP_REGISTER_METHOD(
        0x002FBC30,
        void,
        SetProcessAddedPointFunction,
        app::TargetBreadcrumbsTracker* this_ptr,
        app::Func_2_UnityEngine_Vector3_UnityEngine_Vector3_* process_added_point_function
    )
    IL2CPP_REGISTER_METHOD(0x00CE11D0, void, SetDefaultCheckClearanceFunction, app::TargetBreadcrumbsTracker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CE1330, void, SetDefaultProcessAddedPointFunction, app::TargetBreadcrumbsTracker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CE1490, void, UpdateTracking, app::TargetBreadcrumbsTracker* this_ptr, float d_time)
    IL2CPP_REGISTER_METHOD(0x00CE16E0, void, TrimPath, app::TargetBreadcrumbsTracker* this_ptr, app::Vector3 current_follower_position)
    IL2CPP_REGISTER_METHOD(0x00CE1980, void, ClearTrackingData, app::TargetBreadcrumbsTracker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CE1A30, void, AddPoint, app::TargetBreadcrumbsTracker* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x00CE1B20, app::Vector3, NewestPoint, app::TargetBreadcrumbsTracker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CE1BE0, app::Vector3, OldestPoint, app::TargetBreadcrumbsTracker* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00CE1CA0,
        bool,
        DefaultClearanceBetweenPointsFunction,
        app::TargetBreadcrumbsTracker* this_ptr,
        app::Vector3 point1,
        app::Vector3 point2
    )
    IL2CPP_REGISTER_METHOD(0x00B68B50, app::Vector3, DefaultProcessAddedPointFunction, app::TargetBreadcrumbsTracker* this_ptr, app::Vector3 point)
    IL2CPP_REGISTER_METHOD(0x00CE1DE0, void, OnDrawGizmos, app::TargetBreadcrumbsTracker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CE1FD0, void, ctor, app::TargetBreadcrumbsTracker* this_ptr)
} // namespace app::classes::TargetBreadcrumbsTracker
