#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Configuration::ConfigurationSettings {
    IL2CPP_REGISTER_METHOD(0x029619C0, void, ctor, (app::ConfigurationSettings * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04799B40, ConfigurationSettings__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x029619F0, app::NameValueCollection *, get_AppSettings, ())
    IL2CPP_REGISTER_METHODINFO(0x047783A8, ConfigurationSettings_get_AppSettings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02961A20, app::Object *, GetConfig, (app::String * section_name))
    IL2CPP_REGISTER_METHODINFO(0x04762CF0, ConfigurationSettings_GetConfig__MethodInfo)
}
