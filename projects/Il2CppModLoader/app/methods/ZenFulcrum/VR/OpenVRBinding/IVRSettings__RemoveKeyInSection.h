#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSettings__RemoveKeyInSection {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSettings_RemoveKeyInSection * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01434270, void, Invoke, (app::IVRSettings_RemoveKeyInSection * this_ptr, app::String * pch_section, app::String * pch_settings_key, app::EVRSettingsError__Enum * pe_error))
    IL2CPP_REGISTER_METHOD(0x02CE81D0, app::IAsyncResult *, BeginInvoke, (app::IVRSettings_RemoveKeyInSection * this_ptr, app::String * pch_section, app::String * pch_settings_key, app::EVRSettingsError__Enum * pe_error, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (app::IVRSettings_RemoveKeyInSection * this_ptr, app::EVRSettingsError__Enum * pe_error, app::IAsyncResult * result))
}
