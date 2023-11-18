#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IVROverlay_GetOverlayTransformTrackedDeviceComponent.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVROverlayError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTransformTrackedDeviceComponent {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_GetOverlayTransformTrackedDeviceComponent * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02D7CCC0, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_GetOverlayTransformTrackedDeviceComponent * this_ptr, uint64_t ul_overlay_handle, uint32_t* pun_device_index, app::String* pch_component_name, uint32_t un_component_name_size))
    IL2CPP_REGISTER_METHOD(0x02D7D0D0, app::IAsyncResult*, BeginInvoke, (app::IVROverlay_GetOverlayTransformTrackedDeviceComponent * this_ptr, uint64_t ul_overlay_handle, uint32_t* pun_device_index, app::String* pch_component_name, uint32_t un_component_name_size, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetOverlayTransformTrackedDeviceComponent * this_ptr, uint32_t* pun_device_index, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTransformTrackedDeviceComponent
