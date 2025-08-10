#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/LegacyLever.h>
#include <Modloader/app/structs/LeverDirections__Enum.h>
#include <Modloader/app/structs/LeverMode__Enum.h>
#include <Modloader/app/structs/LeverPuppet.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::LegacyLever {
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_InRange, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_InRange, app::LegacyLever* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x008C5DB0, bool, get_IsGrabbed, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008C5DC0, void, set_IsGrabbed, app::LegacyLever* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanTurn, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A28F40, float, get_Radius, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC80, app::Transform*, get_Transform, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FF2B0, app::LeverDirections__Enum, get_Direction, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD750, app::LeverDirections__Enum, get_OriginalDirection, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD760, void, set_OriginalDirection, app::LegacyLever* this_ptr, app::LeverDirections__Enum value)
    IL2CPP_REGISTER_METHOD(0x00A28F50, bool, get_NeedsToBeOnGround, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005065F0, app::LeverMode__Enum, get_LeverType, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::SoundHost*, get_SoundHost, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A28F60, app::LeverPuppet*, get_Puppet, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A29020, void, OnEnable, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A29100, void, OnDisable, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A291C0, void, Awake, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A29450, void, OnDestroy, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A29510, void, OnEnterLever, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A29650, void, OnExitLever, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A297A0, void, OnGrabLever, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A297D0, void, OnReleaseLever, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A29820, void, OnPushLeverLeft, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A29950, void, OnPushLeverRight, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A29A80, void, OnPushLeverMiddle, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A29B00, void, FixedUpdate, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A29B90, float, GetGroundLevelOffset, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A29C20, void, HackyRotatingHandle, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A2A310, bool, PlayLeverAnimation, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A2A320, app::Vector3, get_Position, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A2A3B0, void, set_Position, app::LegacyLever* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x00A2A430, float, get_SeinPositionOffset, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A2A440, void, SetLeverDirection, app::LegacyLever* this_ptr, app::LeverDirections__Enum lever_direction)
    IL2CPP_REGISTER_METHOD(0x00A2A6B0, void, Serialize, app::LegacyLever* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::Action*, get_GrabLeverEvent, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD10, void, set_GrabLeverEvent, app::LegacyLever* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x002FBD20, app::Action*, get_ReleaseLeverEvent, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD30, void, set_ReleaseLeverEvent, app::LegacyLever* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x002FBD40, app::Action*, get_LeverLeftEvent, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD50, void, set_LeverLeftEvent, app::LegacyLever* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::Action*, get_LeverRightEvent, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD70, void, set_LeverRightEvent, app::LegacyLever* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x00660430, app::Action*, get_LeverLeftFailedEvent, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00660440, void, set_LeverLeftFailedEvent, app::LegacyLever* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x005B0220, app::Action*, get_LeverRightFailedEvent, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A2A740, void, set_LeverRightFailedEvent, app::LegacyLever* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x00418200, app::Action*, get_LeverMiddleEvent, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008760C0, void, set_LeverMiddleEvent, app::LegacyLever* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::Action*, get_LeverEnterEvent, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A6390, void, set_LeverEnterEvent, app::LegacyLever* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x006A63A0, app::Action*, get_LeverExitEvent, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A63B0, void, set_LeverExitEvent, app::LegacyLever* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x0065FBA0, app::Func_1_Boolean_*, get_CanLeverLeft, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065FBB0, void, set_CanLeverLeft, app::LegacyLever* this_ptr, app::Func_1_Boolean_* value)
    IL2CPP_REGISTER_METHOD(0x0065FBC0, app::Func_1_Boolean_*, get_CanLeverRight, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065FBD0, void, set_CanLeverRight, app::LegacyLever* this_ptr, app::Func_1_Boolean_* value)
    IL2CPP_REGISTER_METHOD(0x0061E5C0, bool, get_IsSuspended, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061E5D0, void, set_IsSuspended, app::LegacyLever* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0061E5E0, app::SuspendableMask__Enum, get_Mask, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A2A750, void, set_Mask, app::LegacyLever* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00A2A810, bool, get_CanBeGrabbed, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A2A8F0, void, AdjustLeverOnGround, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00805AA0, int32_t, get_GroundMask, )
    IL2CPP_REGISTER_METHOD(0x00A2AC10, void, OnFrustumEnter, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A2AC20, void, OnFrustumExit, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00739A80, bool, get_InsideFrustum, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A2AC30, app::Bounds, get_Bounds, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A2AC50, void, OnDrawGizmos, app::LegacyLever* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A2AD00, void, ctor, app::LegacyLever* this_ptr)
} // namespace app::classes::LegacyLever
