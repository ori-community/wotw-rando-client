#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GrabbableSurface.h>
#include <Modloader/app/structs/GrabbableSurfaceSettings.h>
#include <Modloader/app/structs/GrabbableSurface_PositionInfo.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/SpiritLeashMode__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::GrabbableSurface {
    IL2CPP_REGISTER_METHOD(0x0107B800, int32_t, get_InstanceCount, )
    IL2CPP_REGISTER_METHOD(0x0107B8A0, void, set_InstanceCount, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0107B950, void, Awake, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107B9F0, void, OnDestroy, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107BA90, app::GrabbableSurfaceSettings*, get_GrabSurfaceSettings, )
    IL2CPP_REGISTER_METHOD(0x0107BD30, void, set_GrabSurfaceSettings, app::GrabbableSurfaceSettings* value)
    IL2CPP_REGISTER_METHOD(0x0107BDE0, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x00A35C30, float, get_OriCloseEnoughDistance, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_SpiritLeashCost, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::Transform*, get_HookTargetTransform, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00623260, float, get_PositionOffset, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, app::SpiritLeashMode__Enum, get_LeashInteractionMode, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107BE90, bool, get_IsGrabbed, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldDecelerateOnApproach, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanBeSustained, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107BEA0, app::Vector3, get_FrontSegmentPoint, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107BED0, app::Vector3, get_FrontSegmentNormal, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107BF00, app::Vector3, get_FrontSegmentDirection, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107BF30, app::Vector3, get_BackSegmentPoint, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107BF60, app::Vector3, get_BackSegmentNormal, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107BF90, app::Vector3, get_BackSegmentDirection, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107BFC0, app::Vector3, get_CurrentSegmentPoint, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107BFF0, app::Vector3, get_CurrentSegmentNormal, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107C020, app::Vector3, get_CurrentSegmentNormalSmooth, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107CFE0, app::Vector3, get_CurrentSegmentDirection, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSpiritLeashHighlight, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSpiritLeashDehighlight, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107D010, void, OnSpiritLeashed, app::GrabbableSurface* this_ptr, app::Vector3 player_position, app::Vector3 target_position)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsMoving, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107D280, app::Vector2, GetVelocityAtPoint, app::GrabbableSurface* this_ptr, app::Vector2 point)
    IL2CPP_REGISTER_METHOD(0x0107D310, void, OnValidate, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107D480, bool, RuntimeValidate, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107D510, void, ComputeVerticesAndNormalsToSerialize, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107E410, bool, IsOrderInverted, app::GrabbableSurface* this_ptr, app::List_1_UnityEngine_Vector3_* points)
    IL2CPP_REGISTER_METHOD(0x0107E580, void, FixedUpdate, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107E8A0, void, OnTouched, app::GrabbableSurface* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUntouched, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107E980, void, OnGrabbed, app::GrabbableSurface* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnReleased, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107EA60, void, UpdateVerticesWorldPosition, app::GrabbableSurface* this_ptr, app::GrabbableSurfaceSettings* settings)
    IL2CPP_REGISTER_METHOD(0x0107F0F0, void, InitializePositionInfo_1, app::GrabbableSurface* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(
        0x0107F2C0,
        void,
        InitializePositionInfo_2,
        app::GrabbableSurface* this_ptr,
        app::Vector3 position,
        app::GrabbableSurface_PositionInfo* position_info
    )
    IL2CPP_REGISTER_METHOD(0x0107F890, void, UpdatePositionInfo_1, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0107F8E0, void, UpdatePositionInfo_2, app::GrabbableSurface* this_ptr, app::GrabbableSurface_PositionInfo* position_info)
    IL2CPP_REGISTER_METHOD(
        0x0107FBE0,
        void,
        InitializePositionInfoOffseted,
        app::GrabbableSurface* this_ptr,
        app::GrabbableSurface_PositionInfo* position_info,
        app::GrabbableSurface_PositionInfo* origin,
        float offset
    )
    IL2CPP_REGISTER_METHOD(0x0107FC60, app::Vector3, AdvancePosition_1, app::GrabbableSurface* this_ptr, float move_distance)
    IL2CPP_REGISTER_METHOD(
        0x0107FE60,
        app::Vector3,
        AdvancePosition_2,
        app::GrabbableSurface* this_ptr,
        float move_distance,
        app::GrabbableSurface_PositionInfo* position_info
    )
    IL2CPP_REGISTER_METHOD(
        0x010805F0,
        bool,
        CanMoveThroughSegments,
        app::GrabbableSurface* this_ptr,
        app::Vector3 seg0,
        app::Vector3 seg1,
        float min_angle,
        app::Vector3 segment_end_pos
    )
    IL2CPP_REGISTER_METHOD(
        0x010808C0,
        void,
        CopyPositionInfo,
        app::GrabbableSurface* this_ptr,
        app::GrabbableSurface_PositionInfo* source,
        app::GrabbableSurface_PositionInfo* destination
    )
    IL2CPP_REGISTER_METHOD(0x01080930, float, get_AngleOfNormalWithDownToConsiderGround, )
    IL2CPP_REGISTER_METHOD(0x010809D0, float, get_AngleOfNormalWithDownToConsiderCeiling, )
    IL2CPP_REGISTER_METHOD(0x01080A70, bool, IsWallNormal, app::Vector2 n)
    IL2CPP_REGISTER_METHOD(0x01080BA0, bool, IsLeftWallNormal, app::Vector2 n)
    IL2CPP_REGISTER_METHOD(0x01080D50, bool, IsRightWallNormal, app::Vector2 n)
    IL2CPP_REGISTER_METHOD(0x01080F00, bool, IsCeilingNormal, app::Vector2 n)
    IL2CPP_REGISTER_METHOD(0x01080FF0, bool, IsGroundNormal, app::Vector2 n)
    IL2CPP_REGISTER_METHOD(0x010810E0, void, ctor, app::GrabbableSurface* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01081A00, void, cctor, )
} // namespace app::classes::GrabbableSurface
