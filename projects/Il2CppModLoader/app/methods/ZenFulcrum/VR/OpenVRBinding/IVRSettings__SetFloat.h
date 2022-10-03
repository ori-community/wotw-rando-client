#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSettings__SetFloat {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSettings_SetFloat * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CE8AB0, void, Invoke, (app::IVRSettings_SetFloat * this_ptr, app::String* pch_section, app::String* pch_settings_key, float fl_value, app::EVRSettingsError__Enum* pe_error))
    IL2CPP_REGISTER_METHOD(0x02CE9100, app::IAsyncResult*, BeginInvoke, (app::IVRSettings_SetFloat * this_ptr, app::String* pch_section, app::String* pch_settings_key, float fl_value, app::EVRSettingsError__Enum* pe_error, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (app::IVRSettings_SetFloat * this_ptr, app::EVRSettingsError__Enum* pe_error, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSettings__SetFloat
