#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/HmdMatrix34_t.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02A521E0, bool, Invoke, (app::IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose * this_ptr, app::HmdMatrix34_t* pmat_standing_zero_pose_to_raw_tracking_pose))
    IL2CPP_REGISTER_METHOD(0x02F407D0, app::IAsyncResult*, BeginInvoke, (app::IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose * this_ptr, app::HmdMatrix34_t* pmat_standing_zero_pose_to_raw_tracking_pose, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (app::IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose * this_ptr, app::HmdMatrix34_t* pmat_standing_zero_pose_to_raw_tracking_pose, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose
