#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetBoolTrackedDeviceProperty {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSystem_GetBoolTrackedDeviceProperty * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x026C8450, bool, Invoke, (app::IVRSystem_GetBoolTrackedDeviceProperty * this_ptr, uint32_t un_device_index, app::ETrackedDeviceProperty__Enum prop, app::ETrackedPropertyError__Enum* p_error))
    IL2CPP_REGISTER_METHOD(0x02CEAA90, app::IAsyncResult*, BeginInvoke, (app::IVRSystem_GetBoolTrackedDeviceProperty * this_ptr, uint32_t un_device_index, app::ETrackedDeviceProperty__Enum prop, app::ETrackedPropertyError__Enum* p_error, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (app::IVRSystem_GetBoolTrackedDeviceProperty * this_ptr, app::ETrackedPropertyError__Enum* p_error, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetBoolTrackedDeviceProperty
