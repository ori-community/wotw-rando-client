#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRSettings {
    IL2CPP_REGISTER_METHOD(0x0167B6E0, void, ctor, (app::CVRSettings * this_ptr, void* p_interface))
    IL2CPP_REGISTER_METHOD(0x0167B820, app::String*, GetSettingsErrorNameFromEnum, (app::CVRSettings * this_ptr, app::EVRSettingsError__Enum e_error))
    IL2CPP_REGISTER_METHOD(0x0167B900, bool, Sync, (app::CVRSettings * this_ptr, bool b_force, app::EVRSettingsError__Enum* pe_error))
    IL2CPP_REGISTER_METHOD(0x0167B920, void, SetBool, (app::CVRSettings * this_ptr, app::String* pch_section, app::String* pch_settings_key, bool b_value, app::EVRSettingsError__Enum* pe_error))
    IL2CPP_REGISTER_METHOD(0x0167B950, void, SetInt32, (app::CVRSettings * this_ptr, app::String* pch_section, app::String* pch_settings_key, int32_t n_value, app::EVRSettingsError__Enum* pe_error))
    IL2CPP_REGISTER_METHOD(0x0167B980, void, SetFloat, (app::CVRSettings * this_ptr, app::String* pch_section, app::String* pch_settings_key, float fl_value, app::EVRSettingsError__Enum* pe_error))
    IL2CPP_REGISTER_METHOD(0x0167B9B0, void, SetString, (app::CVRSettings * this_ptr, app::String* pch_section, app::String* pch_settings_key, app::String* pch_value, app::EVRSettingsError__Enum* pe_error))
    IL2CPP_REGISTER_METHOD(0x0167B9E0, bool, GetBool, (app::CVRSettings * this_ptr, app::String* pch_section, app::String* pch_settings_key, app::EVRSettingsError__Enum* pe_error))
    IL2CPP_REGISTER_METHOD(0x0167BA10, int32_t, GetInt32, (app::CVRSettings * this_ptr, app::String* pch_section, app::String* pch_settings_key, app::EVRSettingsError__Enum* pe_error))
    IL2CPP_REGISTER_METHOD(0x0167BA40, float, GetFloat, (app::CVRSettings * this_ptr, app::String* pch_section, app::String* pch_settings_key, app::EVRSettingsError__Enum* pe_error))
    IL2CPP_REGISTER_METHOD(0x0167BA70, void, GetString, (app::CVRSettings * this_ptr, app::String* pch_section, app::String* pch_settings_key, app::StringBuilder* pch_value, uint32_t un_value_len, app::EVRSettingsError__Enum* pe_error))
    IL2CPP_REGISTER_METHOD(0x0167BAA0, void, RemoveSection, (app::CVRSettings * this_ptr, app::String* pch_section, app::EVRSettingsError__Enum* pe_error))
    IL2CPP_REGISTER_METHOD(0x0167BAC0, void, RemoveKeyInSection, (app::CVRSettings * this_ptr, app::String* pch_section, app::String* pch_settings_key, app::EVRSettingsError__Enum* pe_error))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRSettings
