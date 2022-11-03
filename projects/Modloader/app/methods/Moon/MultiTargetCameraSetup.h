#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::MultiTargetCameraSetup {
    IL2CPP_REGISTER_METHOD(0x00615270, bool, get_IsSuspended, (app::MultiTargetCameraSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00674DC0, void, set_IsSuspended, (app::MultiTargetCameraSetup * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00C03C70, app::SuspendableMask__Enum, get_Mask, (app::MultiTargetCameraSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C03C80, void, set_Mask, (app::MultiTargetCameraSetup * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x0111E060, void, Awake, (app::MultiTargetCameraSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0111E240, void, OnDestroy, (app::MultiTargetCameraSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0111E410, void, OnRestoreCheckpoint, (app::MultiTargetCameraSetup * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04736FD0, MultiTargetCameraSetup_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0111E5A0, void, Activate, (app::MultiTargetCameraSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0111E790, void, Deactivate, (app::MultiTargetCameraSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0111E970, void, UpdateZonesActivation, (app::MultiTargetCameraSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0111EAC0, app::Rect, GetRect, (app::MultiTargetCameraSetup * this_ptr, app::CameraTargetSettings setting))
    IL2CPP_REGISTER_METHOD(0x0111EBE0, app::Vector3, GetTargetPos, (app::MultiTargetCameraSetup * this_ptr, app::CameraTargetSettings setting))
    IL2CPP_REGISTER_METHOD(0x0111EC00, app::Rect, BoundingRectangle, (app::MultiTargetCameraSetup * this_ptr, app::List_1_UnityEngine_Rect_* rects))
    IL2CPP_REGISTER_METHOD(0x0111EF30, void, OnDisable, (app::MultiTargetCameraSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0111EF40, void, FixedUpdate, (app::MultiTargetCameraSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0111FC70, void, DebugDrawCameraRectangle, (app::MultiTargetCameraSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01120260, void, ctor, (app::MultiTargetCameraSetup * this_ptr))
} // namespace app::classes::Moon::MultiTargetCameraSetup
