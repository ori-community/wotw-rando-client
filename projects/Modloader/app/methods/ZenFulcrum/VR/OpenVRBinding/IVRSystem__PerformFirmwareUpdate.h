#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IVRSystem_PerformFirmwareUpdate.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/EVRFirmwareError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__PerformFirmwareUpdate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSystem_PerformFirmwareUpdate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B33400, app::EVRFirmwareError__Enum, Invoke, (app::IVRSystem_PerformFirmwareUpdate * this_ptr, uint32_t un_device_index))
    IL2CPP_REGISTER_METHOD(0x02CEF550, app::IAsyncResult*, BeginInvoke, (app::IVRSystem_PerformFirmwareUpdate * this_ptr, uint32_t un_device_index, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVRFirmwareError__Enum, EndInvoke, (app::IVRSystem_PerformFirmwareUpdate * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__PerformFirmwareUpdate
