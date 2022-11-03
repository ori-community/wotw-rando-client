#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::Linq::JConstructor {
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::IList_1_Newtonsoft_Json_Linq_JToken_*, get_ChildrenTokens, (app::JConstructor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F04580, int32_t, IndexOfItem, (app::JConstructor * this_ptr, app::JToken* item))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::String*, get_Name, (app::JConstructor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420230, app::JTokenType__Enum, get_Type, (app::JConstructor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F04670, void, ctor_1, (app::JConstructor * this_ptr, app::JConstructor* other))
    IL2CPP_REGISTER_METHOD(0x01F047E0, void, ctor_2, (app::JConstructor * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHODINFO(0x0478C6E0, JConstructor__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F049B0, app::JToken*, CloneToken, (app::JConstructor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F04C40, void, WriteTo, (app::JConstructor * this_ptr, app::JsonWriter* writer, app::JsonConverter__Array* converters))
    IL2CPP_REGISTER_METHOD(0x01F04DA0, app::JConstructor*, Load, (app::JsonReader * reader, app::JsonLoadSettings* settings))
    IL2CPP_REGISTER_METHODINFO(0x04725C10, JConstructor_Load__MethodInfo)
} // namespace app::classes::Newtonsoft::Json::Linq::JConstructor
