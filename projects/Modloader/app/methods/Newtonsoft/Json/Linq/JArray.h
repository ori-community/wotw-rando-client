#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IList_1_Newtonsoft_Json_Linq_JToken_.h>
#include <Modloader/app/structs/JArray.h>
#include <Modloader/app/structs/JTokenType__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/JToken.h>
#include <Modloader/app/structs/JsonReader.h>
#include <Modloader/app/structs/JsonLoadSettings.h>
#include <Modloader/app/structs/JsonWriter.h>
#include <Modloader/app/structs/JsonConverter__Array.h>
#include <Modloader/app/structs/IEnumerator_1_Newtonsoft_Json_Linq_JToken_.h>
#include <Modloader/app/structs/JToken__Array.h>

namespace app::classes::Newtonsoft::Json::Linq::JArray {
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IList_1_Newtonsoft_Json_Linq_JToken_*, get_ChildrenTokens, (app::JArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::JTokenType__Enum, get_Type, (app::JArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F037F0, void, ctor_1, (app::JArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F03950, void, ctor_2, (app::JArray * this_ptr, app::JArray* other))
    IL2CPP_REGISTER_METHOD(0x01F03AB0, void, ctor_3, (app::JArray * this_ptr, app::Object* content))
    IL2CPP_REGISTER_METHOD(0x01F03C20, app::JToken*, CloneToken, (app::JArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F03E90, app::JArray*, Load, (app::JsonReader * reader, app::JsonLoadSettings* settings))
    IL2CPP_REGISTER_METHODINFO(0x047104D8, JArray_Load__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F04150, void, WriteTo, (app::JArray * this_ptr, app::JsonWriter* writer, app::JsonConverter__Array* converters))
    IL2CPP_REGISTER_METHOD(0x01F042A0, app::JToken*, get_Item, (app::JArray * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01F042C0, void, set_Item, (app::JArray * this_ptr, int32_t index, app::JToken* value))
    IL2CPP_REGISTER_METHOD(0x01F042E0, int32_t, IndexOfItem, (app::JArray * this_ptr, app::JToken* item))
    IL2CPP_REGISTER_METHOD(0x01F043D0, int32_t, IndexOf, (app::JArray * this_ptr, app::JToken* item))
    IL2CPP_REGISTER_METHOD(0x01F043F0, void, Insert, (app::JArray * this_ptr, int32_t index, app::JToken* item))
    IL2CPP_REGISTER_METHOD(0x01F04420, void, RemoveAt, (app::JArray * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01F04440, app::IEnumerator_1_Newtonsoft_Json_Linq_JToken_*, GetEnumerator, (app::JArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F044E0, void, Add, (app::JArray * this_ptr, app::JToken* item))
    IL2CPP_REGISTER_METHOD(0x01F04500, void, Clear, (app::JArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F04520, bool, Contains, (app::JArray * this_ptr, app::JToken* item))
    IL2CPP_REGISTER_METHOD(0x01F04540, void, CopyTo, (app::JArray * this_ptr, app::JToken__Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, (app::JArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F04560, bool, Remove, (app::JArray * this_ptr, app::JToken* item))
} // namespace app::classes::Newtonsoft::Json::Linq::JArray
