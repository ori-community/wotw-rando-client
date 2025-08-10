#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BsonObjectIdConverter.h>
#include <Modloader/app/structs/JsonReader.h>
#include <Modloader/app/structs/JsonSerializer.h>
#include <Modloader/app/structs/JsonWriter.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Newtonsoft::Json::Converters::BsonObjectIdConverter {
    IL2CPP_REGISTER_METHOD(
        0x01A4E320,
        void,
        WriteJson,
        app::BsonObjectIdConverter* this_ptr,
        app::JsonWriter* writer,
        app::Object* value,
        app::JsonSerializer* serializer
    )
    IL2CPP_REGISTER_METHOD(
        0x01A4E5C0,
        app::Object*,
        ReadJson,
        app::BsonObjectIdConverter* this_ptr,
        app::JsonReader* reader,
        app::Type* object_type,
        app::Object* existing_value,
        app::JsonSerializer* serializer
    )
    IL2CPP_REGISTER_METHOD(0x01A4E8E0, bool, CanConvert, app::BsonObjectIdConverter* this_ptr, app::Type* object_type)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::BsonObjectIdConverter* this_ptr)
} // namespace app::classes::Newtonsoft::Json::Converters::BsonObjectIdConverter
