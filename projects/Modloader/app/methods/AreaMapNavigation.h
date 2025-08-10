#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AreaMapNavigation.h>
#include <Modloader/app/structs/AreaMapNavigation_State__Enum.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/Quest.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::AreaMapNavigation {
    IL2CPP_REGISTER_METHOD(0x0050F110, float, get_ZoomTime, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0050F1C0, float, get_Zoom, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0050F340, app::Vector2, get_ScrollPosition, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0050F360, void, set_ScrollPosition, app::AreaMapNavigation* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x0050F390, bool, BoxIsInsideVisibleCanvas, app::AreaMapNavigation* this_ptr, app::Rect bound)
    IL2CPP_REGISTER_METHOD(0x0050F6E0, void, ChangeState, app::AreaMapNavigation* this_ptr, app::AreaMapNavigation_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x0050F6F0, void, Awake, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0050F9D0, void, OnDestroy, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0050FF00, void, SetTarget, app::AreaMapNavigation* this_ptr, app::Quest* quest)
    IL2CPP_REGISTER_METHOD(0x005100A0, void, SetTargetPosition, app::AreaMapNavigation* this_ptr, app::Vector3 target_pos)
    IL2CPP_REGISTER_METHOD(0x005100D0, app::Vector3, GetTargetPosition, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005100F0, void, ResetFlags, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00510100, void, SetFollowTransform, app::AreaMapNavigation* this_ptr, app::Transform* t)
    IL2CPP_REGISTER_METHOD(0x00510110, void, OptionChangeCallback, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00510130, void, OnVisibilityChangedCallback, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00510200, void, UpdateMapTarget, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00510310, void, SetScrollPositionToPlayer, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00510420, void, UpdateTargetPosition, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00510780, void, OnEnable, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005107C0, void, OnDisable, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00510800, app::Bounds, get_Bounds, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00510820, void, set_Bounds, app::AreaMapNavigation* this_ptr, app::Bounds value)
    IL2CPP_REGISTER_METHOD(0x00510840, app::Vector2, get_MapPlanePosition, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00510950, void, set_MapPlanePosition, app::AreaMapNavigation* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x00510A70, app::Vector2, get_MapPlaneSize, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00510B80, void, set_MapPlaneSize, app::AreaMapNavigation* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x00510CA0, void, Advance, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00510F40, app::Nullable_1_UnityEngine_Vector2_, get_RetainedPosition, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00510F60, void, set_RetainedPosition, app::AreaMapNavigation* this_ptr, app::Nullable_1_UnityEngine_Vector2_ value)
    IL2CPP_REGISTER_METHOD(0x00510F80, void, SetFocusTime, app::AreaMapNavigation* this_ptr, float time)
    IL2CPP_REGISTER_METHOD(0x005100F0, void, FocusOnPlayerNextTime, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00510F90, void, HandleObjectiveFocus, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005111C0, void, SetLocationPlayer, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00511310, void, SetLocationToTarget, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00511580, void, SnapPositionNow, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Init, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005115B0, void, UpdatePlane, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00511AC0, void, CenterMapOnWorldPosition, app::AreaMapNavigation* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x00511BA0, app::Vector3, WorldToMapPosition, app::AreaMapNavigation* this_ptr, app::Vector2 position)
    IL2CPP_REGISTER_METHOD(0x00511CF0, app::Vector3, MapToWorldPosition, app::AreaMapNavigation* this_ptr, app::Vector2 position)
    IL2CPP_REGISTER_METHOD(0x00511EF0, void, HandleMapScrolling, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005128E0, app::Vector3, ConstrainWorldPositionByBounds, app::AreaMapNavigation* this_ptr, app::Vector3 world_position)
    IL2CPP_REGISTER_METHOD(0x00512A90, void, UpdateScrollLimits, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005132A0, void, OnPostTimeSlicedEnable, app::AreaMapNavigation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005135A0, void, ctor, app::AreaMapNavigation* this_ptr)
} // namespace app::classes::AreaMapNavigation
