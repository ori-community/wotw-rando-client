#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BsonProperty.h>
#include <Modloader/app/structs/BsonString.h>
#include <Modloader/app/structs/BsonToken.h>

namespace app::classes::Newtonsoft::Json::Bson::BsonProperty {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::BsonString*, get_Name, app::BsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Name, app::BsonProperty* this_ptr, app::BsonString* value)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::BsonToken*, get_Value, app::BsonProperty* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Value, app::BsonProperty* this_ptr, app::BsonToken* value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::BsonProperty* this_ptr)
} // namespace app::classes::Newtonsoft::Json::Bson::BsonProperty
