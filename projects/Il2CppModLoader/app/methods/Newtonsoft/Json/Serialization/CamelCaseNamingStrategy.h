#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Newtonsoft::Json::Serialization::CamelCaseNamingStrategy {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CamelCaseNamingStrategy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0185DEB0, app::String *, ResolvePropertyName, (app::CamelCaseNamingStrategy * this_ptr, app::String * name))
}
