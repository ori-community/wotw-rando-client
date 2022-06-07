#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Newtonsoft::Json::Bson::BsonArray {
    IL2CPP_REGISTER_METHOD(0x01A485B0, void, Add, (app::BsonArray * this_ptr, app::BsonToken * token))
    IL2CPP_REGISTER_METHOD(0x00E16AD0, app::BsonType__Enum, get_Type, (app::BsonArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A48660, app::IEnumerator_1_Newtonsoft_Json_Bson_BsonToken_ *, GetEnumerator, (app::BsonArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A48730, app::IEnumerator *, IEnumerable_GetEnumerator, (app::BsonArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A48740, void, ctor, (app::BsonArray * this_ptr))
}
