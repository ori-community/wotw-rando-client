#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::Bson::BsonObjectId {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Byte__Array*, get_Value, (app::BsonObjectId * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A4A8A0, void, ctor, (app::BsonObjectId * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHODINFO(0x047803C0, BsonObjectId__ctor__MethodInfo)
} // namespace app::classes::Newtonsoft::Json::Bson::BsonObjectId
