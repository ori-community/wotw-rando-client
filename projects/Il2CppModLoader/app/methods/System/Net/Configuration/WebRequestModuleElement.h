#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::Configuration::WebRequestModuleElement {
    IL2CPP_REGISTER_METHOD(0x01E995C0, void, ctor_1, (app::WebRequestModuleElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047121C8, WebRequestModuleElement__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E995F0, void, ctor_2, (app::WebRequestModuleElement * this_ptr, app::String* prefix, app::String* type))
    IL2CPP_REGISTER_METHODINFO(0x04705588, WebRequestModuleElement__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E99620, void, ctor_3, (app::WebRequestModuleElement * this_ptr, app::String* prefix, app::Type* type))
    IL2CPP_REGISTER_METHODINFO(0x04763B20, WebRequestModuleElement__ctor_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E99650, app::String*, get_Prefix, (app::WebRequestModuleElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04779260, WebRequestModuleElement_get_Prefix__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E99680, void, set_Prefix, (app::WebRequestModuleElement * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x0477A820, WebRequestModuleElement_set_Prefix__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E996B0, app::ConfigurationPropertyCollection*, get_Properties, (app::WebRequestModuleElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04708D38, WebRequestModuleElement_get_Properties__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E996E0, app::Type*, get_Type, (app::WebRequestModuleElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047167A8, WebRequestModuleElement_get_Type__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E99710, void, set_Type, (app::WebRequestModuleElement * this_ptr, app::Type* value))
    IL2CPP_REGISTER_METHODINFO(0x04717B10, WebRequestModuleElement_set_Type__MethodInfo)
} // namespace app::classes::System::Net::Configuration::WebRequestModuleElement
