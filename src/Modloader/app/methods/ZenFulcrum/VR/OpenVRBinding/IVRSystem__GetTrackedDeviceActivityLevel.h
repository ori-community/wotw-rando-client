#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EDeviceActivityLevel__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRSystem_GetTrackedDeviceActivityLevel.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetTrackedDeviceActivityLevel {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRSystem_GetTrackedDeviceActivityLevel* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x02B33400, app::EDeviceActivityLevel__Enum, Invoke, app::IVRSystem_GetTrackedDeviceActivityLevel* this_ptr, uint32_t un_device_id)
    IL2CPP_REGISTER_METHOD(
        0x02CEECE0,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRSystem_GetTrackedDeviceActivityLevel* this_ptr,
        uint32_t un_device_id,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00F550D0,
        app::EDeviceActivityLevel__Enum,
        EndInvoke,
        app::IVRSystem_GetTrackedDeviceActivityLevel* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetTrackedDeviceActivityLevel
