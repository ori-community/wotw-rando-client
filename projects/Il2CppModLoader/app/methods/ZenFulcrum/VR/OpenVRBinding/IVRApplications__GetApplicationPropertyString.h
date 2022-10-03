#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationPropertyString {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRApplications_GetApplicationPropertyString * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02F3D650, uint32_t, Invoke, (app::IVRApplications_GetApplicationPropertyString * this_ptr, app::String* pch_app_key, app::EVRApplicationProperty__Enum e_property, app::StringBuilder* pch_property_value_buffer, uint32_t un_property_value_buffer_len, app::EVRApplicationError__Enum* pe_error))
    IL2CPP_REGISTER_METHOD(0x02F3DD30, app::IAsyncResult*, BeginInvoke, (app::IVRApplications_GetApplicationPropertyString * this_ptr, app::String* pch_app_key, app::EVRApplicationProperty__Enum e_property, app::StringBuilder* pch_property_value_buffer, uint32_t un_property_value_buffer_len, app::EVRApplicationError__Enum* pe_error, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, uint32_t, EndInvoke, (app::IVRApplications_GetApplicationPropertyString * this_ptr, app::EVRApplicationError__Enum* pe_error, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationPropertyString
