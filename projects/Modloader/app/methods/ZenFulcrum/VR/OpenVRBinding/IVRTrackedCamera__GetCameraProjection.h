#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVRTrackedCameraError__Enum.h>
#include <Modloader/app/structs/EVRTrackedCameraFrameType__Enum.h>
#include <Modloader/app/structs/HmdMatrix44_t.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRTrackedCamera_GetCameraProjection.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__GetCameraProjection {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRTrackedCamera_GetCameraProjection* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x00F53190,
        app::EVRTrackedCameraError__Enum,
        Invoke,
        app::IVRTrackedCamera_GetCameraProjection* this_ptr,
        uint32_t n_device_index,
        app::EVRTrackedCameraFrameType__Enum e_frame_type,
        float fl_z_near,
        float fl_z_far,
        app::HmdMatrix44_t* p_projection
    )
    IL2CPP_REGISTER_METHOD(
        0x00F53640,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRTrackedCamera_GetCameraProjection* this_ptr,
        uint32_t n_device_index,
        app::EVRTrackedCameraFrameType__Enum e_frame_type,
        float fl_z_near,
        float fl_z_far,
        app::HmdMatrix44_t* p_projection,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00F51FA0,
        app::EVRTrackedCameraError__Enum,
        EndInvoke,
        app::IVRTrackedCamera_GetCameraProjection* this_ptr,
        app::HmdMatrix44_t* p_projection,
        app::IAsyncResult* result
    )
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__GetCameraProjection
