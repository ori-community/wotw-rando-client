#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRSystem_DriverDebugRequest.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__DriverDebugRequest {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRSystem_DriverDebugRequest* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02CEA590,
        uint32_t,
        Invoke,
        app::IVRSystem_DriverDebugRequest* this_ptr,
        uint32_t un_device_index,
        app::String* pch_request,
        app::String* pch_response_buffer,
        uint32_t un_response_buffer_size
    )
    IL2CPP_REGISTER_METHOD(
        0x02CEA9A0,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRSystem_DriverDebugRequest* this_ptr,
        uint32_t un_device_index,
        app::String* pch_request,
        app::String* pch_response_buffer,
        uint32_t un_response_buffer_size,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, app::IVRSystem_DriverDebugRequest* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__DriverDebugRequest
