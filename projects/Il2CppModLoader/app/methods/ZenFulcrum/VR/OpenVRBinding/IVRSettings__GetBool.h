#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSettings__GetBool {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSettings_GetBool * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0254B810, bool, Invoke, (app::IVRSettings_GetBool * this_ptr, app::String* pch_section, app::String* pch_settings_key, app::EVRSettingsError__Enum* pe_error))
    IL2CPP_REGISTER_METHOD(0x02CE6AB0, app::IAsyncResult*, BeginInvoke, (app::IVRSettings_GetBool * this_ptr, app::String* pch_section, app::String* pch_settings_key, app::EVRSettingsError__Enum* pe_error, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (app::IVRSettings_GetBool * this_ptr, app::EVRSettingsError__Enum* pe_error, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSettings__GetBool
