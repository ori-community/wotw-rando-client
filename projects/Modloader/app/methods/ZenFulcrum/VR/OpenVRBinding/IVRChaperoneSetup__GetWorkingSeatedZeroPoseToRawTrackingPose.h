#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02A521E0, bool, Invoke, (app::IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose * this_ptr, app::HmdMatrix34_t* pmat_seated_zero_pose_to_raw_tracking_pose))
    IL2CPP_REGISTER_METHOD(0x02F40700, app::IAsyncResult*, BeginInvoke, (app::IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose * this_ptr, app::HmdMatrix34_t* pmat_seated_zero_pose_to_raw_tracking_pose, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (app::IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose * this_ptr, app::HmdMatrix34_t* pmat_seated_zero_pose_to_raw_tracking_pose, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose
