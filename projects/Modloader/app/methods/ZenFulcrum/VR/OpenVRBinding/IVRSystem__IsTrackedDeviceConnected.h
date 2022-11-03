#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__IsTrackedDeviceConnected {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSystem_IsTrackedDeviceConnected * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x010C4980, bool, Invoke, (app::IVRSystem_IsTrackedDeviceConnected * this_ptr, uint32_t un_device_index))
    IL2CPP_REGISTER_METHOD(0x02CEF490, app::IAsyncResult*, BeginInvoke, (app::IVRSystem_IsTrackedDeviceConnected * this_ptr, uint32_t un_device_index, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::IVRSystem_IsTrackedDeviceConnected * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__IsTrackedDeviceConnected
