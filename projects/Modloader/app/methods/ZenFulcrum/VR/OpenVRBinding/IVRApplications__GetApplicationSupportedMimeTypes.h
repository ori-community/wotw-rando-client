#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationSupportedMimeTypes.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationSupportedMimeTypes {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRApplications_GetApplicationSupportedMimeTypes * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02F3E4B0, bool, Invoke, (app::IVRApplications_GetApplicationSupportedMimeTypes * this_ptr, app::String* pch_app_key, app::String* pch_mime_types_buffer, uint32_t un_mime_types_buffer))
    IL2CPP_REGISTER_METHOD(0x02F3EA20, app::IAsyncResult*, BeginInvoke, (app::IVRApplications_GetApplicationSupportedMimeTypes * this_ptr, app::String* pch_app_key, app::String* pch_mime_types_buffer, uint32_t un_mime_types_buffer, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::IVRApplications_GetApplicationSupportedMimeTypes * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationSupportedMimeTypes
