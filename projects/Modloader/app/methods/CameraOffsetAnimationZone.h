#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CameraOffsetAnimationZone.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/SelectableCategory__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/VirtualTimelineRepresentationGroup__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/VirtualClipsBuilder.h>

namespace app::classes::CameraOffsetAnimationZone {
    IL2CPP_REGISTER_METHOD(0x01693660, bool, get_IsActivated, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01693680, void, set_IsActivated, (app::CameraOffsetAnimationZone * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01693660, bool, get_IsInfluencingCamera, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01693690, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x016939C0, void, Awake, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01693BC0, void, CreateOffsetLayer, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01693E10, void, Init, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01693EA0, void, OnEnable, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01694260, void, OnDisable, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01694450, void, Register, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01694580, void, Unregister, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01694660, void, OnDestroy, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01694690, void, Activate, (app::CameraOffsetAnimationZone * this_ptr, bool instant))
    IL2CPP_REGISTER_METHOD(0x016949B0, void, Deactivate, (app::CameraOffsetAnimationZone * this_ptr, bool instant))
    IL2CPP_REGISTER_METHOD(0x01694BF0, void, Remove, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01694DD0, void, OnRestoreCheckpoint, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04719158, CameraOffsetAnimationZone_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005BDAA0, bool, Changed, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01694DE0, app::Rect, get_Rect, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01694F40, bool, IsWithinRect, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01695260, void, OnCameraOffsetUpdate, (app::CameraOffsetAnimationZone * this_ptr, bool instant))
    IL2CPP_REGISTER_METHOD(0x01695640, void, Blend, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01695C30, float, get_Radius, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01695D10, float, get_NormalizedPositionInsideZone, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01696060, void, OnFrustumEnter, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01696080, void, OnFrustumExit, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFEA0, bool, get_InsideFrustum, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008496A0, void, set_InsideFrustum, (app::CameraOffsetAnimationZone * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01696090, app::Bounds, IFrustumOptimizable_get_Bounds, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBCC50, bool, get_AllowCacheBounds, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016960B0, app::Rect, get_Bounds, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01696400, void, set_Bounds, (app::CameraOffsetAnimationZone * this_ptr, app::Rect value))
    IL2CPP_REGISTER_METHOD(0x016966A0, void, OffsetUpdated, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016966C0, void, OnValidate, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, app::SelectableCategory__Enum, get_Category, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, get_VirtualTimelineTarget, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::VirtualTimelineRepresentationGroup__Enum, get_VirtualTimelineGroup, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016966D0, app::String*, get_NameDisplayedOnClip, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01696750, void, Build, (app::CameraOffsetAnimationZone * this_ptr, app::VirtualClipsBuilder* builder))
    IL2CPP_REGISTER_METHOD(0x016969A0, void, ctor, (app::CameraOffsetAnimationZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01696BA0, void, cctor, ())
} // namespace app::classes::CameraOffsetAnimationZone
