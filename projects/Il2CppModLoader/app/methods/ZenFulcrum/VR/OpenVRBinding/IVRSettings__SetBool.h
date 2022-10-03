#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSettings__SetBool {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSettings_SetBool * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CE8390, void, Invoke, (app::IVRSettings_SetBool * this_ptr, app::String* pch_section, app::String* pch_settings_key, bool b_value, app::EVRSettingsError__Enum* pe_error))
    IL2CPP_REGISTER_METHOD(0x02CE89C0, app::IAsyncResult*, BeginInvoke, (app::IVRSettings_SetBool * this_ptr, app::String* pch_section, app::String* pch_settings_key, bool b_value, app::EVRSettingsError__Enum* pe_error, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (app::IVRSettings_SetBool * this_ptr, app::EVRSettingsError__Enum* pe_error, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSettings__SetBool
