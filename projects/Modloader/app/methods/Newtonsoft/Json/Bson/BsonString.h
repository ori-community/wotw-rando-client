#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::Bson::BsonString {
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_ByteCount, (app::BsonString * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00654960, void, set_ByteCount, (app::BsonString * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00446970, bool, get_IncludeLength, (app::BsonString * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A4ABA0, void, ctor, (app::BsonString * this_ptr, app::Object* value, bool include_length))
} // namespace app::classes::Newtonsoft::Json::Bson::BsonString
