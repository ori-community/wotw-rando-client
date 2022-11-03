#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayTransformTrackedDeviceRelative {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_SetOverlayTransformTrackedDeviceRelative * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02009B10, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_SetOverlayTransformTrackedDeviceRelative * this_ptr, uint64_t ul_overlay_handle, uint32_t un_tracked_device, app::HmdMatrix34_t* pmat_tracked_device_to_overlay_transform))
    IL2CPP_REGISTER_METHOD(0x02D81360, app::IAsyncResult*, BeginInvoke, (app::IVROverlay_SetOverlayTransformTrackedDeviceRelative * this_ptr, uint64_t ul_overlay_handle, uint32_t un_tracked_device, app::HmdMatrix34_t* pmat_tracked_device_to_overlay_transform, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_SetOverlayTransformTrackedDeviceRelative * this_ptr, app::HmdMatrix34_t* pmat_tracked_device_to_overlay_transform, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayTransformTrackedDeviceRelative
