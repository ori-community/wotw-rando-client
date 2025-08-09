#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/ETrackedDeviceProperty__Enum.h>
#include <Modloader/app/structs/ETrackedPropertyError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRSystem_GetFloatTrackedDeviceProperty.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetFloatTrackedDeviceProperty {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRSystem_GetFloatTrackedDeviceProperty* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02CEBBB0,
        float,
        Invoke,
        app::IVRSystem_GetFloatTrackedDeviceProperty* this_ptr,
        uint32_t un_device_index,
        app::ETrackedDeviceProperty__Enum prop,
        app::ETrackedPropertyError__Enum* p_error
    )
    IL2CPP_REGISTER_METHOD(
        0x02CEBF40,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRSystem_GetFloatTrackedDeviceProperty* this_ptr,
        uint32_t un_device_index,
        app::ETrackedDeviceProperty__Enum prop,
        app::ETrackedPropertyError__Enum* p_error,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x02CE71E0,
        float,
        EndInvoke,
        app::IVRSystem_GetFloatTrackedDeviceProperty* this_ptr,
        app::ETrackedPropertyError__Enum* p_error,
        app::IAsyncResult* result
    )
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetFloatTrackedDeviceProperty
