#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationsThatSupportMimeType {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRApplications_GetApplicationsThatSupportMimeType * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CE4E30, uint32_t, Invoke, (app::IVRApplications_GetApplicationsThatSupportMimeType * this_ptr, app::String* pch_mime_type, app::String* pch_app_keys_that_support_buffer, uint32_t un_app_keys_that_support_buffer))
    IL2CPP_REGISTER_METHOD(0x02F3EBC0, app::IAsyncResult*, BeginInvoke, (app::IVRApplications_GetApplicationsThatSupportMimeType * this_ptr, app::String* pch_mime_type, app::String* pch_app_keys_that_support_buffer, uint32_t un_app_keys_that_support_buffer, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (app::IVRApplications_GetApplicationsThatSupportMimeType * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationsThatSupportMimeType
