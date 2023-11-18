#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IVRSystem_GetInt32TrackedDeviceProperty.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/ETrackedDeviceProperty__Enum.h>
#include <Modloader/app/structs/ETrackedPropertyError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetInt32TrackedDeviceProperty {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSystem_GetInt32TrackedDeviceProperty * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CEC540, int32_t, Invoke, (app::IVRSystem_GetInt32TrackedDeviceProperty * this_ptr, uint32_t un_device_index, app::ETrackedDeviceProperty__Enum prop, app::ETrackedPropertyError__Enum* p_error))
    IL2CPP_REGISTER_METHOD(0x02CEC8E0, app::IAsyncResult*, BeginInvoke, (app::IVRSystem_GetInt32TrackedDeviceProperty * this_ptr, uint32_t un_device_index, app::ETrackedDeviceProperty__Enum prop, app::ETrackedPropertyError__Enum* p_error, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, int32_t, EndInvoke, (app::IVRSystem_GetInt32TrackedDeviceProperty * this_ptr, app::ETrackedPropertyError__Enum* p_error, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetInt32TrackedDeviceProperty
