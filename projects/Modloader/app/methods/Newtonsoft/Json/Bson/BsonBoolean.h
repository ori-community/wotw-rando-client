#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BsonBoolean.h>

namespace app::classes::Newtonsoft::Json::Bson::BsonBoolean {
    IL2CPP_REGISTER_METHOD(0x01A49F10, void, ctor, app::BsonBoolean* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01A49FB0, void, cctor, )
} // namespace app::classes::Newtonsoft::Json::Bson::BsonBoolean
