#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IList_1_Newtonsoft_Json_Linq_JToken_.h>
#include <Modloader/app/structs/JProperty.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/JToken.h>
#include <Modloader/app/structs/JTokenType__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/JsonWriter.h>
#include <Modloader/app/structs/JsonConverter__Array.h>
#include <Modloader/app/structs/JsonReader.h>
#include <Modloader/app/structs/JsonLoadSettings.h>

namespace app::classes::Newtonsoft::Json::Linq::JProperty {
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IList_1_Newtonsoft_Json_Linq_JToken_*, get_ChildrenTokens, (app::JProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::String*, get_Name, (app::JProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F0CFD0, app::JToken*, get_Value, (app::JProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F0CFF0, void, set_Value, (app::JProperty * this_ptr, app::JToken* value))
    IL2CPP_REGISTER_METHOD(0x01F0D070, void, ctor_1, (app::JProperty * this_ptr, app::JProperty* other))
    IL2CPP_REGISTER_METHOD(0x01F0D1D0, app::JToken*, GetItem, (app::JProperty * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0473FE40, JProperty_GetItem__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F0D290, void, SetItem, (app::JProperty * this_ptr, int32_t index, app::JToken* item))
    IL2CPP_REGISTER_METHODINFO(0x0470D578, JProperty_SetItem__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F0D3D0, bool, RemoveItem, (app::JProperty * this_ptr, app::JToken* item))
    IL2CPP_REGISTER_METHODINFO(0x047932E0, JProperty_RemoveItem__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F0D4E0, void, RemoveItemAt, (app::JProperty * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0477A8C8, JProperty_RemoveItemAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F0D5F0, int32_t, IndexOfItem, (app::JProperty * this_ptr, app::JToken* item))
    IL2CPP_REGISTER_METHOD(0x01F0D620, void, InsertItem, (app::JProperty * this_ptr, int32_t index, app::JToken* item, bool skip_parent_check))
    IL2CPP_REGISTER_METHODINFO(0x047486A0, JProperty_InsertItem__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F0D790, bool, ContainsItem, (app::JProperty * this_ptr, app::JToken* item))
    IL2CPP_REGISTER_METHOD(0x01F0D7B0, void, ClearItems, (app::JProperty * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047637C8, JProperty_ClearItems__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F0D8C0, app::JToken*, CloneToken, (app::JProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00910BD0, app::JTokenType__Enum, get_Type, (app::JProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F0DB40, void, ctor_2, (app::JProperty * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01F0DCA0, void, ctor_3, (app::JProperty * this_ptr, app::String* name, app::Object* content))
    IL2CPP_REGISTER_METHOD(0x01F0DF10, void, WriteTo, (app::JProperty * this_ptr, app::JsonWriter* writer, app::JsonConverter__Array* converters))
    IL2CPP_REGISTER_METHOD(0x01F0DFB0, app::JProperty*, Load, (app::JsonReader * reader, app::JsonLoadSettings* settings))
    IL2CPP_REGISTER_METHODINFO(0x0475D238, JProperty_Load__MethodInfo)
} // namespace app::classes::Newtonsoft::Json::Linq::JProperty
