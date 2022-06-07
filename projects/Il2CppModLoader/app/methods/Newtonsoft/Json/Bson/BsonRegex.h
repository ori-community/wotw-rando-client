#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Newtonsoft::Json::Bson::BsonRegex {
    IL2CPP_REGISTER_METHOD(0x002FB950, app::BsonString *, get_Pattern, (app::BsonRegex * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Pattern, (app::BsonRegex * this_ptr, app::BsonString * value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::BsonString *, get_Options, (app::BsonRegex * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Options, (app::BsonRegex * this_ptr, app::BsonString * value))
    IL2CPP_REGISTER_METHOD(0x01A4A980, void, ctor, (app::BsonRegex * this_ptr, app::String * pattern, app::String * options))
    IL2CPP_REGISTER_METHOD(0x007F17E0, app::BsonType__Enum, get_Type, (app::BsonRegex * this_ptr))
}
