#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVRApplicationError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRApplications_GetStartingApplication.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetStartingApplication {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRApplications_GetStartingApplication* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02D79D50,
        app::EVRApplicationError__Enum,
        Invoke,
        app::IVRApplications_GetStartingApplication* this_ptr,
        app::String* pch_app_key_buffer,
        uint32_t un_app_key_buffer_len
    )
    IL2CPP_REGISTER_METHOD(
        0x02F3EE40,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRApplications_GetStartingApplication* this_ptr,
        app::String* pch_app_key_buffer,
        uint32_t un_app_key_buffer_len,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00F550D0,
        app::EVRApplicationError__Enum,
        EndInvoke,
        app::IVRApplications_GetStartingApplication* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetStartingApplication
