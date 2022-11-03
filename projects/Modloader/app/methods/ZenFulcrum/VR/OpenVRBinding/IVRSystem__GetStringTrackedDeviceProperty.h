#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetStringTrackedDeviceProperty {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSystem_GetStringTrackedDeviceProperty * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CE5480, uint32_t, Invoke, (app::IVRSystem_GetStringTrackedDeviceProperty * this_ptr, uint32_t un_device_index, app::ETrackedDeviceProperty__Enum prop, app::StringBuilder* pch_value, uint32_t un_buffer_size, app::ETrackedPropertyError__Enum* p_error))
    IL2CPP_REGISTER_METHOD(0x02CEEAD0, app::IAsyncResult*, BeginInvoke, (app::IVRSystem_GetStringTrackedDeviceProperty * this_ptr, uint32_t un_device_index, app::ETrackedDeviceProperty__Enum prop, app::StringBuilder* pch_value, uint32_t un_buffer_size, app::ETrackedPropertyError__Enum* p_error, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, uint32_t, EndInvoke, (app::IVRSystem_GetStringTrackedDeviceProperty * this_ptr, app::ETrackedPropertyError__Enum* p_error, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetStringTrackedDeviceProperty
