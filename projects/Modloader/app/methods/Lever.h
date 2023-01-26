#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Lever.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/IDesiredUberState.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/LeverDirections__Enum.h>
#include <Modloader/app/structs/LeverMode__Enum.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Lever {
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_InRange, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_InRange, (app::Lever * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0052A070, bool, get_IsGrabbed, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A080, void, set_IsGrabbed, (app::Lever * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00447340, float, get_Radius, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::Transform*, get_Transform, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FF8B0, app::LeverDirections__Enum, get_Direction, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005065F0, app::LeverDirections__Enum, get_OriginalDirection, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506600, void, set_OriginalDirection, (app::Lever * this_ptr, app::LeverDirections__Enum value))
    IL2CPP_REGISTER_METHOD(0x01133810, bool, get_NeedsToBeOnGround, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00855600, app::LeverMode__Enum, get_LeverType, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01133820, void, OnEnable, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011338E0, void, OnDisable, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011339A0, void, Awake, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01133CB0, void, OnDestroy, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01133EB0, void, Apply, (app::Lever * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x011340F0, app::IUberState__Array*, get_AffectingUberStates, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01134230, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01134400, void, OnRestoreCheckpoint, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01134410, void, OnEnterLever, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01134440, void, OnExitLever, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01134470, void, OnGrabLever, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01134560, void, OnReleaseLever, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01134660, void, OnPushLeverLeft, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011348E0, void, OnPushLeverRight, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01134B70, void, OnPushLeverMiddle, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01134C60, void, FixedUpdate, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01134CF0, float, GetGroundLevelOffset, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01134D10, bool, get_CanTurn, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01134D30, void, HackyRotatingHandle, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01135370, void, ResetLever, (app::Lever * this_ptr, app::LeverDirections__Enum direction))
    IL2CPP_REGISTER_METHOD(0x01135420, void, SetHandleAngle, (app::Lever * this_ptr, float angle))
    IL2CPP_REGISTER_METHOD(0x01135470, bool, PlayLeverAnimation, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00736690, void, set_Position, (app::Lever * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00A2A430, float, get_SeinPositionOffset, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01135480, void, SetLeverDirection, (app::Lever * this_ptr, app::LeverDirections__Enum lever_direction))
    IL2CPP_REGISTER_METHOD(0x005B0220, app::Action*, get_GrabLeverEvent, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2A740, void, set_GrabLeverEvent, (app::Lever * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x00418200, app::Action*, get_ReleaseLeverEvent, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008760C0, void, set_ReleaseLeverEvent, (app::Lever * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::Action*, get_LeverLeftEvent, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A6390, void, set_LeverLeftEvent, (app::Lever * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x006A63A0, app::Action*, get_LeverRightEvent, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A63B0, void, set_LeverRightEvent, (app::Lever * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x0065FBA0, app::Action*, get_LeverLeftFailedEvent, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0065FBB0, void, set_LeverLeftFailedEvent, (app::Lever * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x0065FBC0, app::Action*, get_LeverRightFailedEvent, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0065FBD0, void, set_LeverRightFailedEvent, (app::Lever * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x0065FBE0, app::Action*, get_LeverMiddleEvent, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0065FBF0, void, set_LeverMiddleEvent, (app::Lever * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x00A64220, app::Action*, get_LeverEnterEvent, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00510100, void, set_LeverEnterEvent, (app::Lever * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x005FDE00, app::Action*, get_LeverExitEvent, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FDE10, void, set_LeverExitEvent, (app::Lever * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x011354B0, app::Func_1_Boolean_*, get_CanLeverLeft, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D77860, void, set_CanLeverLeft, (app::Lever * this_ptr, app::Func_1_Boolean_* value))
    IL2CPP_REGISTER_METHOD(0x0071EAB0, app::Func_1_Boolean_*, get_CanLeverRight, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A43000, void, set_CanLeverRight, (app::Lever * this_ptr, app::Func_1_Boolean_* value))
    IL2CPP_REGISTER_METHOD(0x00A5BA30, bool, get_IsSuspended, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0101D2F0, void, set_IsSuspended, (app::Lever * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0074F800, app::SuspendableMask__Enum, get_Mask, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011354C0, void, set_Mask, (app::Lever * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x01135580, bool, get_CanBeGrabbed, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01135670, void, AdjustLeverOnGround, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00805AA0, int32_t, get_GroundMask, ())
    IL2CPP_REGISTER_METHOD(0x00BFFEB0, void, OnFrustumEnter, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB0300, void, OnFrustumExit, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005DA240, bool, get_InsideFrustum, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01135A30, app::Bounds, get_Bounds, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00689DA0, bool, get_InvalidateParentTimelineCache, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00689DB0, void, set_InvalidateParentTimelineCache, (app::Lever * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01135A50, void, OnDrawGizmos, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01135B10, app::IDesiredUberState*, GetRequirementsForTimeline, (app::Lever * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x01135BB0, void, OnSceneRootPostEnable, (app::Lever * this_ptr, app::SceneRoot* scene_root))
    IL2CPP_REGISTER_METHOD(0x01135BC0, void, ctor, (app::Lever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01136AB0, void, cctor, ())
} // namespace app::classes::Lever
