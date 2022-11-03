#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::Serialization::NamingStrategy {
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_ProcessDictionaryKeys, (app::NamingStrategy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00504D80, bool, get_ProcessExtensionDataNames, (app::NamingStrategy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BFB750, bool, get_OverrideSpecifiedNames, (app::NamingStrategy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BFB760, app::String*, GetPropertyName, (app::NamingStrategy * this_ptr, app::String* name, bool has_specified_name))
    IL2CPP_REGISTER_METHOD(0x01BFB780, app::String*, GetExtensionDataName, (app::NamingStrategy * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01BFB7A0, app::String*, GetDictionaryKey, (app::NamingStrategy * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NamingStrategy * this_ptr))
} // namespace app::classes::Newtonsoft::Json::Serialization::NamingStrategy
