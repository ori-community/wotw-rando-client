#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVRTrackedCameraError__Enum.h>
#include <Modloader/app/structs/EVRTrackedCameraFrameType__Enum.h>
#include <Modloader/app/structs/HmdVector2_t.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRTrackedCamera_GetCameraIntrinsics.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__GetCameraIntrinsics {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRTrackedCamera_GetCameraIntrinsics* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x00F52B80,
        app::EVRTrackedCameraError__Enum,
        Invoke,
        app::IVRTrackedCamera_GetCameraIntrinsics* this_ptr,
        uint32_t n_device_index,
        app::EVRTrackedCameraFrameType__Enum e_frame_type,
        app::HmdVector2_t* p_focal_length,
        app::HmdVector2_t* p_center
    )
    IL2CPP_REGISTER_METHOD(
        0x00F52FA0,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRTrackedCamera_GetCameraIntrinsics* this_ptr,
        uint32_t n_device_index,
        app::EVRTrackedCameraFrameType__Enum e_frame_type,
        app::HmdVector2_t* p_focal_length,
        app::HmdVector2_t* p_center,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00F530B0,
        app::EVRTrackedCameraError__Enum,
        EndInvoke,
        app::IVRTrackedCamera_GetCameraIntrinsics* this_ptr,
        app::HmdVector2_t* p_focal_length,
        app::HmdVector2_t* p_center,
        app::IAsyncResult* result
    )
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__GetCameraIntrinsics
