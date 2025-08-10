#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Base64Encoder_1.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/DateTimeOffset.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/JsonTextWriter.h>
#include <Modloader/app/structs/JsonToken__Enum_1.h>
#include <Modloader/app/structs/Nullable_1_Double_.h>
#include <Modloader/app/structs/Nullable_1_Single_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextWriter.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/Uri.h>

namespace app::classes::Newtonsoft::Json::JsonTextWriter {
    IL2CPP_REGISTER_METHOD(0x01EFAB00, app::Base64Encoder_1*, get_Base64Encoder, app::JsonTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFACE0, char16_t, get_QuoteChar, app::JsonTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFACF0, void, ctor, app::JsonTextWriter* this_ptr, app::TextWriter* text_writer)
    IL2CPP_REGISTER_METHOD(0x01EFAE60, void, Close, app::JsonTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFAF00, void, CloseBufferAndWriter, app::JsonTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFAF60, void, WriteStartObject, app::JsonTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFAFC0, void, WriteStartArray, app::JsonTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFB020, void, WriteStartConstructor, app::JsonTextWriter* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01EFB140, void, WriteEnd, app::JsonTextWriter* this_ptr, app::JsonToken__Enum_1 token)
    IL2CPP_REGISTER_METHOD(0x01EFB280, void, WritePropertyName_1, app::JsonTextWriter* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01EFB2F0, void, WritePropertyName_2, app::JsonTextWriter* this_ptr, app::String* name, bool escape)
    IL2CPP_REGISTER_METHOD(0x01EFB3F0, void, OnStringEscapeHandlingChanged, app::JsonTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFB400, void, UpdateCharEscapeFlags, app::JsonTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFB4C0, void, WriteIndent, app::JsonTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFB730, int32_t, SetIndentChars, app::JsonTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFB850, void, WriteValueDelimiter, app::JsonTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFB880, void, WriteIndentSpace, app::JsonTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BCD480, void, WriteValueInternal, app::JsonTextWriter* this_ptr, app::String* value, app::JsonToken__Enum_1 token)
    IL2CPP_REGISTER_METHOD(0x01EFB8B0, void, WriteValue_1, app::JsonTextWriter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01EFBA10, void, WriteNull, app::JsonTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFBAF0, void, WriteUndefined, app::JsonTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BCD480, void, WriteRaw, app::JsonTextWriter* this_ptr, app::String* json)
    IL2CPP_REGISTER_METHOD(0x01EFBBD0, void, WriteValue_2, app::JsonTextWriter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01EFBCE0, void, WriteEscapedString, app::JsonTextWriter* this_ptr, app::String* value, bool quote)
    IL2CPP_REGISTER_METHOD(0x01EFBE10, void, WriteValue_3, app::JsonTextWriter* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01EFBE50, void, WriteValue_4, app::JsonTextWriter* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x01EFBED0, void, WriteValue_5, app::JsonTextWriter* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x01EFBF60, void, WriteValue_6, app::JsonTextWriter* this_ptr, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x01EFBFA0, void, WriteValue_7, app::JsonTextWriter* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01EFC0B0, void, WriteValue_8, app::JsonTextWriter* this_ptr, app::Nullable_1_Single_ value)
    IL2CPP_REGISTER_METHOD(0x01EFC1E0, void, WriteValue_9, app::JsonTextWriter* this_ptr, double value)
    IL2CPP_REGISTER_METHOD(0x01EFC2F0, void, WriteValue_10, app::JsonTextWriter* this_ptr, app::Nullable_1_Double_ value)
    IL2CPP_REGISTER_METHOD(0x01EFC420, void, WriteValue_11, app::JsonTextWriter* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01EFC5C0, void, WriteValue_12, app::JsonTextWriter* this_ptr, int16_t value)
    IL2CPP_REGISTER_METHOD(0x01EFC600, void, WriteValue_13, app::JsonTextWriter* this_ptr, uint16_t value)
    IL2CPP_REGISTER_METHOD(0x01EFC640, void, WriteValue_14, app::JsonTextWriter* this_ptr, char16_t value)
    IL2CPP_REGISTER_METHOD(0x01EFC7D0, void, WriteValue_15, app::JsonTextWriter* this_ptr, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x01EFC810, void, WriteValue_16, app::JsonTextWriter* this_ptr, int8_t value)
    IL2CPP_REGISTER_METHOD(0x01EFC850, void, WriteValue_17, app::JsonTextWriter* this_ptr, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x01EFC940, void, WriteValue_18, app::JsonTextWriter* this_ptr, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x01EFCB10, int32_t, WriteValueToBuffer_1, app::JsonTextWriter* this_ptr, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x01EFCCD0, void, WriteValue_19, app::JsonTextWriter* this_ptr, app::Byte__Array* value)
    IL2CPP_REGISTER_METHOD(0x01EFCEC0, void, WriteValue_20, app::JsonTextWriter* this_ptr, app::DateTimeOffset value)
    IL2CPP_REGISTER_METHOD(0x01EFD010, int32_t, WriteValueToBuffer_2, app::JsonTextWriter* this_ptr, app::DateTimeOffset value)
    IL2CPP_REGISTER_METHOD(0x01EFD1E0, void, WriteValue_21, app::JsonTextWriter* this_ptr, app::Guid value)
    IL2CPP_REGISTER_METHOD(0x01EFD320, void, WriteValue_22, app::JsonTextWriter* this_ptr, app::TimeSpan value)
    IL2CPP_REGISTER_METHOD(0x01EFD460, void, WriteValue_23, app::JsonTextWriter* this_ptr, app::Uri* value)
    IL2CPP_REGISTER_METHOD(0x01EFD560, void, WriteComment, app::JsonTextWriter* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01EFD660, void, EnsureWriteBuffer, app::JsonTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFD6A0, void, WriteIntegerValue_1, app::JsonTextWriter* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x01EFD700, void, WriteIntegerValue_2, app::JsonTextWriter* this_ptr, uint64_t value, bool negative)
    IL2CPP_REGISTER_METHOD(0x01EFD8C0, int32_t, WriteNumberToBuffer_1, app::JsonTextWriter* this_ptr, uint64_t value, bool negative)
    IL2CPP_REGISTER_METHOD(0x01EFDA00, void, WriteIntegerValue_3, app::JsonTextWriter* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01EFDAE0, void, WriteIntegerValue_4, app::JsonTextWriter* this_ptr, uint32_t value, bool negative)
    IL2CPP_REGISTER_METHOD(0x01EFDB70, int32_t, WriteNumberToBuffer_2, app::JsonTextWriter* this_ptr, uint32_t value, bool negative)
} // namespace app::classes::Newtonsoft::Json::JsonTextWriter
