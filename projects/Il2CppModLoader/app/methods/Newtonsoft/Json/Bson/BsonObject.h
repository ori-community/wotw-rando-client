#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::Bson::BsonObject {
    IL2CPP_REGISTER_METHOD(0x01A4A400, void, Add, (app::BsonObject * this_ptr, app::String* name, app::BsonToken* token))
    IL2CPP_REGISTER_METHOD(0x007E9990, app::BsonType__Enum, get_Type, (app::BsonObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A4A670, app::IEnumerator_1_Newtonsoft_Json_Bson_BsonProperty_*, GetEnumerator, (app::BsonObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A4A740, app::IEnumerator*, IEnumerable_GetEnumerator, (app::BsonObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A4A750, void, ctor, (app::BsonObject * this_ptr))
} // namespace app::classes::Newtonsoft::Json::Bson::BsonObject
