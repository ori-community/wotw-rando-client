#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSettings__GetInt32 {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSettings_GetInt32 * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02CE72C0, int32_t, Invoke, (app::IVRSettings_GetInt32 * this_ptr, app::String * pch_section, app::String * pch_settings_key, app::EVRSettingsError__Enum * pe_error))
    IL2CPP_REGISTER_METHOD(0x02CE7840, app::IAsyncResult *, BeginInvoke, (app::IVRSettings_GetInt32 * this_ptr, app::String * pch_section, app::String * pch_settings_key, app::EVRSettingsError__Enum * pe_error, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, int32_t, EndInvoke, (app::IVRSettings_GetInt32 * this_ptr, app::EVRSettingsError__Enum * pe_error, app::IAsyncResult * result))
}
