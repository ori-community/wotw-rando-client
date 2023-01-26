#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/JsonPropertyAttribute.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Newtonsoft::Json::JsonPropertyAttribute {
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::Type*, get_ItemConverterType, (app::JsonPropertyAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::Object__Array*, get_ItemConverterParameters, (app::JsonPropertyAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::Type*, get_NamingStrategyType, (app::JsonPropertyAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::Object__Array*, get_NamingStrategyParameters, (app::JsonPropertyAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::String*, get_PropertyName, (app::JsonPropertyAttribute * this_ptr))
} // namespace app::classes::Newtonsoft::Json::JsonPropertyAttribute
