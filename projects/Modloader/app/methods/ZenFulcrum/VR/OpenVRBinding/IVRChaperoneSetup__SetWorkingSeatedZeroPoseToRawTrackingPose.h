#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/HmdMatrix34_t.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x006FCF70,
        void,
        Invoke,
        app::IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose* this_ptr,
        app::HmdMatrix34_t* p_mat_seated_zero_pose_to_raw_tracking_pose
    )
    IL2CPP_REGISTER_METHOD(
        0x02F40D80,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose* this_ptr,
        app::HmdMatrix34_t* p_mat_seated_zero_pose_to_raw_tracking_pose,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x006FD370,
        void,
        EndInvoke,
        app::IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose* this_ptr,
        app::HmdMatrix34_t* p_mat_seated_zero_pose_to_raw_tracking_pose,
        app::IAsyncResult* result
    )
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose
