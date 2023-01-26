#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CamelCaseNamingStrategy.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Newtonsoft::Json::Serialization::CamelCaseNamingStrategy {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CamelCaseNamingStrategy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0185DEB0, app::String*, ResolvePropertyName, (app::CamelCaseNamingStrategy * this_ptr, app::String* name))
} // namespace app::classes::Newtonsoft::Json::Serialization::CamelCaseNamingStrategy
