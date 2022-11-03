#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRChaperoneSetup_SetWorkingStandingZeroPoseToRawTrackingPose * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x006FCF70, void, Invoke, (app::IVRChaperoneSetup_SetWorkingStandingZeroPoseToRawTrackingPose * this_ptr, app::HmdMatrix34_t* p_mat_standing_zero_pose_to_raw_tracking_pose))
    IL2CPP_REGISTER_METHOD(0x02F40E50, app::IAsyncResult*, BeginInvoke, (app::IVRChaperoneSetup_SetWorkingStandingZeroPoseToRawTrackingPose * this_ptr, app::HmdMatrix34_t* p_mat_standing_zero_pose_to_raw_tracking_pose, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (app::IVRChaperoneSetup_SetWorkingStandingZeroPoseToRawTrackingPose * this_ptr, app::HmdMatrix34_t* p_mat_standing_zero_pose_to_raw_tracking_pose, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose
