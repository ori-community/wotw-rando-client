#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WebRequestModuleElement.h>
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Net::Configuration::WebRequestModuleElement {
    IL2CPP_REGISTER_METHOD(0x01E995C0, void, ctor_1, (app::WebRequestModuleElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E995F0, void, ctor_2, (app::WebRequestModuleElement * this_ptr, app::String* prefix, app::String* type))
    IL2CPP_REGISTER_METHOD(0x01E99620, void, ctor_3, (app::WebRequestModuleElement * this_ptr, app::String* prefix, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x01E99650, app::String*, get_Prefix, (app::WebRequestModuleElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E99680, void, set_Prefix, (app::WebRequestModuleElement * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01E996B0, app::ConfigurationPropertyCollection*, get_Properties, (app::WebRequestModuleElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E996E0, app::Type*, get_Type, (app::WebRequestModuleElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E99710, void, set_Type, (app::WebRequestModuleElement * this_ptr, app::Type* value))
} // namespace app::classes::System::Net::Configuration::WebRequestModuleElement
