#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::Configuration::WebRequestModulesSection {
    IL2CPP_REGISTER_METHOD(0x01E999B0, void, ctor, (app::WebRequestModulesSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472EAF8, WebRequestModulesSection__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E999E0, app::ConfigurationPropertyCollection*, get_Properties, (app::WebRequestModulesSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477A688, WebRequestModulesSection_get_Properties__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E99A10, app::WebRequestModuleElementCollection*, get_WebRequestModules, (app::WebRequestModulesSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471AD30, WebRequestModulesSection_get_WebRequestModules__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E99A40, void, InitializeDefault, (app::WebRequestModulesSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04742188, WebRequestModulesSection_InitializeDefault__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E99A70, void, PostDeserialize, (app::WebRequestModulesSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04736088, WebRequestModulesSection_PostDeserialize__MethodInfo)
} // namespace app::classes::System::Net::Configuration::WebRequestModulesSection
