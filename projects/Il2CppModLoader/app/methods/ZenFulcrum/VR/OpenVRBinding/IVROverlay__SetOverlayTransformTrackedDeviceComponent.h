#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayTransformTrackedDeviceComponent {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_SetOverlayTransformTrackedDeviceComponent * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02009B10, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_SetOverlayTransformTrackedDeviceComponent * this_ptr, uint64_t ul_overlay_handle, uint32_t un_device_index, app::String * pch_component_name))
    IL2CPP_REGISTER_METHOD(0x02D81280, app::IAsyncResult *, BeginInvoke, (app::IVROverlay_SetOverlayTransformTrackedDeviceComponent * this_ptr, uint64_t ul_overlay_handle, uint32_t un_device_index, app::String * pch_component_name, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_SetOverlayTransformTrackedDeviceComponent * this_ptr, app::IAsyncResult * result))
}
