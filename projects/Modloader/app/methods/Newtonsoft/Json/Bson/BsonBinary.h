#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::Bson::BsonBinary {
    IL2CPP_REGISTER_METHOD(0x0052A050, app::BsonBinaryType__Enum, get_BinaryType, (app::BsonBinary * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_BinaryType, (app::BsonBinary * this_ptr, app::BsonBinaryType__Enum value))
    IL2CPP_REGISTER_METHOD(0x01A48890, void, ctor, (app::BsonBinary * this_ptr, app::Byte__Array* value, app::BsonBinaryType__Enum binary_type))
} // namespace app::classes::Newtonsoft::Json::Bson::BsonBinary
