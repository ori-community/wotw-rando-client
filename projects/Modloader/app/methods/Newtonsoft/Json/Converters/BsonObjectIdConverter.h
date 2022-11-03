#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::Converters::BsonObjectIdConverter {
    IL2CPP_REGISTER_METHOD(0x01A4E320, void, WriteJson, (app::BsonObjectIdConverter * this_ptr, app::JsonWriter* writer, app::Object* value, app::JsonSerializer* serializer))
    IL2CPP_REGISTER_METHOD(0x01A4E5C0, app::Object*, ReadJson, (app::BsonObjectIdConverter * this_ptr, app::JsonReader* reader, app::Type* object_type, app::Object* existing_value, app::JsonSerializer* serializer))
    IL2CPP_REGISTER_METHODINFO(0x04780338, BsonObjectIdConverter_ReadJson__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A4E8E0, bool, CanConvert, (app::BsonObjectIdConverter * this_ptr, app::Type* object_type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BsonObjectIdConverter * this_ptr))
} // namespace app::classes::Newtonsoft::Json::Converters::BsonObjectIdConverter
