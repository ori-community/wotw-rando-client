#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BsonWriter.h>
#include <Modloader/app/structs/JsonReader.h>
#include <Modloader/app/structs/JsonSerializer.h>
#include <Modloader/app/structs/JsonWriter.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Regex.h>
#include <Modloader/app/structs/RegexConverter.h>
#include <Modloader/app/structs/RegexOptions__Enum.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Newtonsoft::Json::Converters::RegexConverter {
    IL2CPP_REGISTER_METHOD(
        0x01A54DE0,
        void,
        WriteJson_1,
        app::RegexConverter* this_ptr,
        app::JsonWriter* writer,
        app::Object* value,
        app::JsonSerializer* serializer
    )
    IL2CPP_REGISTER_METHOD(0x01141CD0, bool, HasFlag, app::RegexConverter* this_ptr, app::RegexOptions__Enum options, app::RegexOptions__Enum flag)
    IL2CPP_REGISTER_METHOD(0x01A55070, void, WriteBson, app::RegexConverter* this_ptr, app::BsonWriter* writer, app::Regex* regex)
    IL2CPP_REGISTER_METHOD(
        0x01A551C0,
        void,
        WriteJson_2,
        app::RegexConverter* this_ptr,
        app::JsonWriter* writer,
        app::Regex* regex,
        app::JsonSerializer* serializer
    )
    IL2CPP_REGISTER_METHOD(
        0x01A553D0,
        app::Object*,
        ReadJson,
        app::RegexConverter* this_ptr,
        app::JsonReader* reader,
        app::Type* object_type,
        app::Object* existing_value,
        app::JsonSerializer* serializer
    )
    IL2CPP_REGISTER_METHOD(0x01A554E0, app::Object*, ReadRegexString, app::RegexConverter* this_ptr, app::JsonReader* reader)
    IL2CPP_REGISTER_METHOD(0x01A55790, app::Regex*, ReadRegexObject, app::RegexConverter* this_ptr, app::JsonReader* reader, app::JsonSerializer* serializer)
    IL2CPP_REGISTER_METHOD(0x01A55D80, bool, CanConvert, app::RegexConverter* this_ptr, app::Type* object_type)
    IL2CPP_REGISTER_METHOD(0x01A55E70, bool, IsRegex, app::RegexConverter* this_ptr, app::Type* object_type)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::RegexConverter* this_ptr)
} // namespace app::classes::Newtonsoft::Json::Converters::RegexConverter
