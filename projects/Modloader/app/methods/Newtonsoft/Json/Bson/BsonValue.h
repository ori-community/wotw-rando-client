#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BsonType__Enum.h>
#include <Modloader/app/structs/BsonValue.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Newtonsoft::Json::Bson::BsonValue {
    IL2CPP_REGISTER_METHOD(0x01A4ABB0, void, ctor, app::BsonValue* this_ptr, app::Object* value, app::BsonType__Enum type)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Object*, get_Value, app::BsonValue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4CE0, app::BsonType__Enum, get_Type, app::BsonValue* this_ptr)
} // namespace app::classes::Newtonsoft::Json::Bson::BsonValue
