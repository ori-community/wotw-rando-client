#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BsonArray.h>
#include <Modloader/app/structs/BsonToken.h>
#include <Modloader/app/structs/BsonType__Enum.h>
#include <Modloader/app/structs/IEnumerator_1_Newtonsoft_Json_Bson_BsonToken_.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::Newtonsoft::Json::Bson::BsonArray {
    IL2CPP_REGISTER_METHOD(0x01A485B0, void, Add, (app::BsonArray * this_ptr, app::BsonToken* token))
    IL2CPP_REGISTER_METHOD(0x00E16AD0, app::BsonType__Enum, get_Type, (app::BsonArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A48660, app::IEnumerator_1_Newtonsoft_Json_Bson_BsonToken_*, GetEnumerator, (app::BsonArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A48730, app::IEnumerator*, IEnumerable_GetEnumerator, (app::BsonArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A48740, void, ctor, (app::BsonArray * this_ptr))
} // namespace app::classes::Newtonsoft::Json::Bson::BsonArray
