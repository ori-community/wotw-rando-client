#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetTrackedDeviceIndexForControllerRole {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSystem_GetTrackedDeviceIndexForControllerRole * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B33400, uint32_t, Invoke, (app::IVRSystem_GetTrackedDeviceIndexForControllerRole * this_ptr, app::ETrackedControllerRole__Enum un_device_type))
    IL2CPP_REGISTER_METHOD(0x02CEEE60, app::IAsyncResult*, BeginInvoke, (app::IVRSystem_GetTrackedDeviceIndexForControllerRole * this_ptr, app::ETrackedControllerRole__Enum un_device_type, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (app::IVRSystem_GetTrackedDeviceIndexForControllerRole * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetTrackedDeviceIndexForControllerRole
