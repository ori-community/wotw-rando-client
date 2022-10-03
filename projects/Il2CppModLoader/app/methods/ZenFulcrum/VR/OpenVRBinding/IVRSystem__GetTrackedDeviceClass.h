#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetTrackedDeviceClass {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSystem_GetTrackedDeviceClass * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B33400, app::ETrackedDeviceClass__Enum, Invoke, (app::IVRSystem_GetTrackedDeviceClass * this_ptr, uint32_t un_device_index))
    IL2CPP_REGISTER_METHOD(0x02CEEDA0, app::IAsyncResult*, BeginInvoke, (app::IVRSystem_GetTrackedDeviceClass * this_ptr, uint32_t un_device_index, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::ETrackedDeviceClass__Enum, EndInvoke, (app::IVRSystem_GetTrackedDeviceClass * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetTrackedDeviceClass
