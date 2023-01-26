#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/CameraPostProcessing.h>
#include <Modloader/app/structs/GameplayCamera.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::GameplayCamera {
    IL2CPP_REGISTER_METHOD(0x0040B220, app::Camera*, get_Camera, (app::GameplayCamera * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040B240, app::Transform*, get_GameplayPuppet, (app::GameplayCamera * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040B270, app::CameraPostProcessing*, get_CameraPostProcessing, (app::GameplayCamera * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040B290, void, LockSmoothScrollingForAFrame, (app::GameplayCamera * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040B2B0, bool, IsOnScreen, (app::GameplayCamera * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x0040B340, bool, IsOnScreenPadded, (app::GameplayCamera * this_ptr, app::Vector3 position, float padding))
    IL2CPP_REGISTER_METHOD(0x0040B3E0, float, GetPointDistToScreen, (app::GameplayCamera * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x0040B430, float, GetPointDistToBounds, (app::Vector3 point, app::Bounds bounds))
    IL2CPP_REGISTER_METHOD(0x0040B690, float, get_CameraWidthWorldUnits, (app::GameplayCamera * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040B940, void, MoveToTarget, (app::GameplayCamera * this_ptr, app::Vector3 target, float duration, bool ignore_scroll_lock))
    IL2CPP_REGISTER_METHOD(0x0040BCB0, void, MoveToTargetCharacter, (app::GameplayCamera * this_ptr, float duration))
    IL2CPP_REGISTER_METHOD(0x0040BFB0, void, GoToChaseMode, (app::GameplayCamera * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040C1E0, void, OnDestroy, (app::GameplayCamera * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040C470, void, Awake, (app::GameplayCamera * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040C730, void, OnEnable, (app::GameplayCamera * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040CAE0, void, OnDisable, (app::GameplayCamera * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040CBD0, void, OnRestoreCheckpoint, (app::GameplayCamera * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040CC00, void, UpdateTargetHelperPosition, (app::GameplayCamera * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040CC50, void, set_Target, (app::GameplayCamera * this_ptr, app::Transform* value))
    IL2CPP_REGISTER_METHOD(0x0040CC90, app::Transform*, get_Target, (app::GameplayCamera * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040CC00, void, Start, (app::GameplayCamera * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040CCC0, float, get_TimeDelta, (app::GameplayCamera * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040CCD0, void, set_TimeDelta, (app::GameplayCamera * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0040CCE0, void, UpdateTarget, (app::GameplayCamera * this_ptr, float lerp_to_target))
    IL2CPP_REGISTER_METHOD(0x0040D3B0, app::Bounds, get_CameraBoundingBox, (app::GameplayCamera * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040D3D0, void, set_CameraBoundingBox, (app::GameplayCamera * this_ptr, app::Bounds value))
    IL2CPP_REGISTER_METHOD(0x0040D3F0, void, UpdateCameraBounds, (app::GameplayCamera * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040D4D0, app::Vector3, get_CameraCenterInGameplayPlane, (app::GameplayCamera * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040D4F0, void, MoveCameraToTargetInstantly, (app::GameplayCamera * this_ptr, bool update_target_position))
    IL2CPP_REGISTER_METHOD(0x0040D7E0, void, MoveCameraToTargetPosition, (app::GameplayCamera * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040D930, void, ForceCameraToObayScrollLockConstraints, (app::GameplayCamera * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040DCD0, void, TargetPositionSnapped, (app::GameplayCamera * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040DD00, void, ChangeTargetToCurrentCharacter, (app::GameplayCamera * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040DEC0, void, ChangeTarget, (app::GameplayCamera * this_ptr, app::Transform* target_transform))
    IL2CPP_REGISTER_METHOD(0x0040DFA0, void, OnFixedUpdate, (app::GameplayCamera * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x0040E830, void, EnableGoThroughScrollLocks, (app::GameplayCamera * this_ptr, app::Object_1* requester))
    IL2CPP_REGISTER_METHOD(0x0040E8E0, void, DisableGoThroughScrollLocks, (app::GameplayCamera * this_ptr, app::Object_1* requester))
    IL2CPP_REGISTER_METHOD(0x0040E9A0, app::Vector3, ProjectPointOnZ, (app::GameplayCamera * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x0040EF50, bool, get_IsSuspended, (app::GameplayCamera * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040EF60, void, set_IsSuspended, (app::GameplayCamera * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0040EF70, app::SuspendableMask__Enum, get_Mask, (app::GameplayCamera * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040EF80, void, set_Mask, (app::GameplayCamera * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x0040F040, void, SetDynamicCameraActive, (app::GameplayCamera * this_ptr, bool active))
    IL2CPP_REGISTER_METHOD(0x0040F0B0, bool, GetDynamicCameraActive, (app::GameplayCamera * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040F110, void, ctor, (app::GameplayCamera * this_ptr))
} // namespace app::classes::GameplayCamera
