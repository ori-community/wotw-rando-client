#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRApplications_GetDefaultApplicationForMimeType.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetDefaultApplicationForMimeType {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRApplications_GetDefaultApplicationForMimeType* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02F3E4B0,
        bool,
        Invoke,
        app::IVRApplications_GetDefaultApplicationForMimeType* this_ptr,
        app::String* pch_mime_type,
        app::String* pch_app_key_buffer,
        uint32_t un_app_key_buffer_len
    )
    IL2CPP_REGISTER_METHOD(
        0x02F3ED60,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRApplications_GetDefaultApplicationForMimeType* this_ptr,
        app::String* pch_mime_type,
        app::String* pch_app_key_buffer,
        uint32_t un_app_key_buffer_len,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, app::IVRApplications_GetDefaultApplicationForMimeType* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetDefaultApplicationForMimeType
