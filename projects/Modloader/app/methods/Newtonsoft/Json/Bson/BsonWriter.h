#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BsonToken.h>
#include <Modloader/app/structs/BsonType__Enum.h>
#include <Modloader/app/structs/BsonWriter.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/DateTimeOffset.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/JsonToken__Enum_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/Uri.h>

namespace app::classes::Newtonsoft::Json::Bson::BsonWriter {
    IL2CPP_REGISTER_METHOD(0x01A4ABC0, void, WriteEnd, app::BsonWriter* this_ptr, app::JsonToken__Enum_1 token)
    IL2CPP_REGISTER_METHOD(0x01A4AC30, void, WriteComment, app::BsonWriter* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01A4AC80, void, WriteStartConstructor, app::BsonWriter* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01A4ACD0, void, WriteRaw, app::BsonWriter* this_ptr, app::String* json)
    IL2CPP_REGISTER_METHOD(0x01A4AD20, void, WriteRawValue, app::BsonWriter* this_ptr, app::String* json)
    IL2CPP_REGISTER_METHOD(0x01A4AD70, void, WriteStartArray, app::BsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A4B010, void, WriteStartObject, app::BsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A4B2B0, void, WritePropertyName, app::BsonWriter* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01A4B2E0, void, Close, app::BsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A4B360, void, AddParent, app::BsonWriter* this_ptr, app::BsonToken* container)
    IL2CPP_REGISTER_METHOD(0x01A4B390, void, RemoveParent, app::BsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A4B3B0, void, AddValue, app::BsonWriter* this_ptr, app::Object* value, app::BsonType__Enum type)
    IL2CPP_REGISTER_METHOD(0x01A4B510, void, AddToken, app::BsonWriter* this_ptr, app::BsonToken* token)
    IL2CPP_REGISTER_METHOD(0x01A4B7A0, void, WriteValue_1, app::BsonWriter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01A4BA10, void, WriteNull, app::BsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A4BAE0, void, WriteUndefined, app::BsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A4BBB0, void, WriteValue_2, app::BsonWriter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01A4BD60, void, WriteValue_3, app::BsonWriter* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01A4BE20, void, WriteValue_4, app::BsonWriter* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x01A4BF10, void, WriteValue_5, app::BsonWriter* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x01A4BFD0, void, WriteValue_6, app::BsonWriter* this_ptr, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x01A4C0D0, void, WriteValue_7, app::BsonWriter* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01A4C190, void, WriteValue_8, app::BsonWriter* this_ptr, double value)
    IL2CPP_REGISTER_METHOD(0x01A4C250, void, WriteValue_9, app::BsonWriter* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01A4C360, void, WriteValue_10, app::BsonWriter* this_ptr, int16_t value)
    IL2CPP_REGISTER_METHOD(0x01A4C420, void, WriteValue_11, app::BsonWriter* this_ptr, uint16_t value)
    IL2CPP_REGISTER_METHOD(0x01A4C4E0, void, WriteValue_12, app::BsonWriter* this_ptr, char16_t value)
    IL2CPP_REGISTER_METHOD(0x01A4C690, void, WriteValue_13, app::BsonWriter* this_ptr, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x01A4C750, void, WriteValue_14, app::BsonWriter* this_ptr, int8_t value)
    IL2CPP_REGISTER_METHOD(0x01A4C810, void, WriteValue_15, app::BsonWriter* this_ptr, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x01A4C8D0, void, WriteValue_16, app::BsonWriter* this_ptr, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x01A4C9C0, void, WriteValue_17, app::BsonWriter* this_ptr, app::DateTimeOffset value)
    IL2CPP_REGISTER_METHOD(0x01A4CA80, void, WriteValue_18, app::BsonWriter* this_ptr, app::Byte__Array* value)
    IL2CPP_REGISTER_METHOD(0x01A4CC20, void, WriteValue_19, app::BsonWriter* this_ptr, app::Guid value)
    IL2CPP_REGISTER_METHOD(0x01A4CDA0, void, WriteValue_20, app::BsonWriter* this_ptr, app::TimeSpan value)
    IL2CPP_REGISTER_METHOD(0x01A4CF20, void, WriteValue_21, app::BsonWriter* this_ptr, app::Uri* value)
    IL2CPP_REGISTER_METHOD(0x01A4D0E0, void, WriteObjectId, app::BsonWriter* this_ptr, app::Byte__Array* value)
    IL2CPP_REGISTER_METHOD(0x01A4D240, void, WriteRegex, app::BsonWriter* this_ptr, app::String* pattern, app::String* options)
} // namespace app::classes::Newtonsoft::Json::Bson::BsonWriter
