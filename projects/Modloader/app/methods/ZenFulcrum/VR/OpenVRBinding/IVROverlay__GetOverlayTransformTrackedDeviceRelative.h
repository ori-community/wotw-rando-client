#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVROverlayError__Enum.h>
#include <Modloader/app/structs/HmdMatrix34_t.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayTransformTrackedDeviceRelative.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTransformTrackedDeviceRelative {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVROverlay_GetOverlayTransformTrackedDeviceRelative* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02CE61E0,
        app::EVROverlayError__Enum,
        Invoke,
        app::IVROverlay_GetOverlayTransformTrackedDeviceRelative* this_ptr,
        uint64_t ul_overlay_handle,
        uint32_t* pun_tracked_device,
        app::HmdMatrix34_t* pmat_tracked_device_to_overlay_transform
    )
    IL2CPP_REGISTER_METHOD(
        0x02D7D1D0,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVROverlay_GetOverlayTransformTrackedDeviceRelative* this_ptr,
        uint64_t ul_overlay_handle,
        uint32_t* pun_tracked_device,
        app::HmdMatrix34_t* pmat_tracked_device_to_overlay_transform,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00F530B0,
        app::EVROverlayError__Enum,
        EndInvoke,
        app::IVROverlay_GetOverlayTransformTrackedDeviceRelative* this_ptr,
        uint32_t* pun_tracked_device,
        app::HmdMatrix34_t* pmat_tracked_device_to_overlay_transform,
        app::IAsyncResult* result
    )
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTransformTrackedDeviceRelative
