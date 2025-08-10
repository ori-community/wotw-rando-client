#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/LianaEntity.h>
#include <Modloader/app/structs/LianaEntity_LianaParameters.h>
#include <Modloader/app/structs/LianaEntity_TongueState__Enum.h>
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/SnapTrapEntity_SnapTrapParameters.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::LianaEntity {
    IL2CPP_REGISTER_METHOD(0x011380B0, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x01138180, void, Awake, app::LianaEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01138260, void, OnDestroy, app::LianaEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01138320, void, OnRestoreCheckpoint, app::LianaEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01138330,
        void,
        Setup,
        app::LianaEntity* this_ptr,
        app::SnapTrapEntity_SnapTrapParameters param,
        app::LianaEntity_LianaParameters liana_params,
        bool can_freeze,
        bool uses_detection_zone,
        app::Rect detection_rect,
        float frozen_mouth_open_rot,
        app::SerializedBooleanUberState* thawed_state,
        app::Vector2 place_holder_scale,
        bool rebuild_rope
    )
    IL2CPP_REGISTER_METHOD(0x01139920, app::Bounds, CalculateBounds, app::LianaEntity* this_ptr, float height)
    IL2CPP_REGISTER_METHOD(
        0x01139DB0,
        void,
        AddJointToTongue,
        app::LianaEntity* this_ptr,
        bool frozen,
        app::Transform* tongue_joint_transform,
        int32_t joint_count,
        float joints_per_rope_joint,
        app::List_1_UnityEngine_Transform_* rope_joints
    )
    IL2CPP_REGISTER_METHOD(0x01139F80, void, FixedUpdate, app::LianaEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0113A040, void, LateUpdate, app::LianaEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0113A5A0, void, UpdateFrozenTongue, app::LianaEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0113A8B0, void, UpdateFrozenTongueBatchedAPI, app::LianaEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0113ABB0, void, UpdateThawedTongue, app::LianaEntity* this_ptr, app::Vector3 align_visuals_offset)
    IL2CPP_REGISTER_METHOD(0x0113AEE0, void, UpdateThawedTongueBatchedAPI, app::LianaEntity* this_ptr, app::Vector3 align_visuals_offset)
    IL2CPP_REGISTER_METHOD(0x0113B210, void, ForceReel, app::LianaEntity* this_ptr, float speed)
    IL2CPP_REGISTER_METHOD(0x0113B270, void, ReelTongue, app::LianaEntity* this_ptr, float speed)
    IL2CPP_REGISTER_METHOD(0x0113B3F0, void, ActivateTongue, app::LianaEntity* this_ptr, bool on, bool force)
    IL2CPP_REGISTER_METHOD(0x0113B670, void, StartPullLoopAnim, app::LianaEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0113B850, void, StopPullLoopAnim, app::LianaEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0113B890, void, TongueGrabbed, app::LianaEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0113BB00, void, TongueReleased, app::LianaEntity* this_ptr, bool force)
    IL2CPP_REGISTER_METHOD(0x0113BD80, void, Suspend, app::LianaEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0113C2D0, void, Resume, app::LianaEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0113C590, void, Freeze, app::LianaEntity* this_ptr, bool frozen, bool spawn_effect)
    IL2CPP_REGISTER_METHOD(0x0113C780, void, Closed, app::LianaEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0113C940, void, OpenedAfterCatch, app::LianaEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0113C980, void, OpenedAfterMiss, app::LianaEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0113C9C0, app::IEnumerator*, WaitReleaseTongue, app::LianaEntity* this_ptr, float wait_time)
    IL2CPP_REGISTER_METHOD(0x0113CB20, void, DoneChewing, app::LianaEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0113CEB0, void, ChangeTongueState, app::LianaEntity* this_ptr, app::LianaEntity_TongueState__Enum state)
    IL2CPP_REGISTER_METHOD(0x0113D160, void, EnablePhysics, app::LianaEntity* this_ptr, bool enable)
    IL2CPP_REGISTER_METHOD(0x0113D2D0, void, OnFrustumEnter, app::LianaEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0113D3B0, void, OnFrustumExit, app::LianaEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0113D490, void, OnSceneRootPostEnable, app::LianaEntity* this_ptr, app::SceneRoot* scene_root)
    IL2CPP_REGISTER_METHOD(0x0113D580, void, OnSceneRootPreDisable, app::LianaEntity* this_ptr, app::SceneRoot* scene_root)
    IL2CPP_REGISTER_METHOD(0x0113D2D0, void, OnFrustumInstantEnabled, app::LianaEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CFDD40, bool, get_InsideFrustum, app::LianaEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0113D660, app::Bounds, get_Bounds, app::LianaEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0113D680, void, set_Bounds, app::LianaEntity* this_ptr, app::Bounds value)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowCacheBounds, app::LianaEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldDisable, app::LianaEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldEnable, app::LianaEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldChildrenEnable, app::LianaEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldSetMoonReady, app::LianaEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0113D6A0, void, ctor, app::LianaEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0113D780, void, cctor, )
} // namespace app::classes::LianaEntity
