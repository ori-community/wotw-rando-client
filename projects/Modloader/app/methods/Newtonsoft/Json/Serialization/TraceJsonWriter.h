#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/DateTimeOffset.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/JsonWriter.h>
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/Nullable_1_Byte_.h>
#include <Modloader/app/structs/Nullable_1_Char_.h>
#include <Modloader/app/structs/Nullable_1_DateTimeOffset_.h>
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#include <Modloader/app/structs/Nullable_1_Decimal_.h>
#include <Modloader/app/structs/Nullable_1_Double_.h>
#include <Modloader/app/structs/Nullable_1_Guid_.h>
#include <Modloader/app/structs/Nullable_1_Int16_.h>
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/Nullable_1_Int64_.h>
#include <Modloader/app/structs/Nullable_1_SByte_.h>
#include <Modloader/app/structs/Nullable_1_Single_.h>
#include <Modloader/app/structs/Nullable_1_TimeSpan_.h>
#include <Modloader/app/structs/Nullable_1_UInt16_.h>
#include <Modloader/app/structs/Nullable_1_UInt32_.h>
#include <Modloader/app/structs/Nullable_1_UInt64_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/TraceJsonWriter.h>
#include <Modloader/app/structs/Uri.h>

namespace app::classes::Newtonsoft::Json::Serialization::TraceJsonWriter {
    IL2CPP_REGISTER_METHOD(0x01BFD6D0, void, ctor, app::TraceJsonWriter* this_ptr, app::JsonWriter* inner_writer)
    IL2CPP_REGISTER_METHOD(0x01BFDA40, app::String*, GetSerializedJsonMessage, app::TraceJsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BFDA70, void, WriteValue_1, app::TraceJsonWriter* this_ptr, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x01BFDB00, void, WriteValue_2, app::TraceJsonWriter* this_ptr, app::Nullable_1_Decimal_ value)
    IL2CPP_REGISTER_METHOD(0x01BFDC30, void, WriteValue_3, app::TraceJsonWriter* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01BFDCB0, void, WriteValue_4, app::TraceJsonWriter* this_ptr, app::Nullable_1_Boolean_ value)
    IL2CPP_REGISTER_METHOD(0x01BFDDC0, void, WriteValue_5, app::TraceJsonWriter* this_ptr, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x01BFDE40, void, WriteValue_6, app::TraceJsonWriter* this_ptr, app::Nullable_1_Byte_ value)
    IL2CPP_REGISTER_METHOD(0x01BFDF50, void, WriteValue_7, app::TraceJsonWriter* this_ptr, char16_t value)
    IL2CPP_REGISTER_METHOD(0x01BFDFD0, void, WriteValue_8, app::TraceJsonWriter* this_ptr, app::Nullable_1_Char_ value)
    IL2CPP_REGISTER_METHOD(0x01BFE0D0, void, WriteValue_9, app::TraceJsonWriter* this_ptr, app::Byte__Array* value)
    IL2CPP_REGISTER_METHOD(0x01BFE170, void, WriteValue_10, app::TraceJsonWriter* this_ptr, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x01BFE1F0, void, WriteValue_11, app::TraceJsonWriter* this_ptr, app::Nullable_1_DateTime_ value)
    IL2CPP_REGISTER_METHOD(0x01BFE310, void, WriteValue_12, app::TraceJsonWriter* this_ptr, app::DateTimeOffset value)
    IL2CPP_REGISTER_METHOD(0x01BFE3A0, void, WriteValue_13, app::TraceJsonWriter* this_ptr, app::Nullable_1_DateTimeOffset_ value)
    IL2CPP_REGISTER_METHOD(0x01BFE4D0, void, WriteValue_14, app::TraceJsonWriter* this_ptr, double value)
    IL2CPP_REGISTER_METHOD(0x01BFE550, void, WriteValue_15, app::TraceJsonWriter* this_ptr, app::Nullable_1_Double_ value)
    IL2CPP_REGISTER_METHOD(0x01BFE670, void, WriteUndefined, app::TraceJsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BFE6E0, void, WriteNull, app::TraceJsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BFE750, void, WriteValue_16, app::TraceJsonWriter* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01BFE7D0, void, WriteValue_17, app::TraceJsonWriter* this_ptr, app::Nullable_1_Single_ value)
    IL2CPP_REGISTER_METHOD(0x01BFE8E0, void, WriteValue_18, app::TraceJsonWriter* this_ptr, app::Guid value)
    IL2CPP_REGISTER_METHOD(0x01BFE970, void, WriteValue_19, app::TraceJsonWriter* this_ptr, app::Nullable_1_Guid_ value)
    IL2CPP_REGISTER_METHOD(0x01BFEAA0, void, WriteValue_20, app::TraceJsonWriter* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01BFEB20, void, WriteValue_21, app::TraceJsonWriter* this_ptr, app::Nullable_1_Int32_ value)
    IL2CPP_REGISTER_METHOD(0x01BFEC30, void, WriteValue_22, app::TraceJsonWriter* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x01BFECB0, void, WriteValue_23, app::TraceJsonWriter* this_ptr, app::Nullable_1_Int64_ value)
    IL2CPP_REGISTER_METHOD(0x01BFEDD0, void, WriteValue_24, app::TraceJsonWriter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01BFEF40, void, WriteValue_25, app::TraceJsonWriter* this_ptr, int8_t value)
    IL2CPP_REGISTER_METHOD(0x01BFEFC0, void, WriteValue_26, app::TraceJsonWriter* this_ptr, app::Nullable_1_SByte_ value)
    IL2CPP_REGISTER_METHOD(0x01BFF0D0, void, WriteValue_27, app::TraceJsonWriter* this_ptr, int16_t value)
    IL2CPP_REGISTER_METHOD(0x01BFF150, void, WriteValue_28, app::TraceJsonWriter* this_ptr, app::Nullable_1_Int16_ value)
    IL2CPP_REGISTER_METHOD(0x01BFF250, void, WriteValue_29, app::TraceJsonWriter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01BFF2D0, void, WriteValue_30, app::TraceJsonWriter* this_ptr, app::TimeSpan value)
    IL2CPP_REGISTER_METHOD(0x01BFF350, void, WriteValue_31, app::TraceJsonWriter* this_ptr, app::Nullable_1_TimeSpan_ value)
    IL2CPP_REGISTER_METHOD(0x01BFF470, void, WriteValue_32, app::TraceJsonWriter* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x01BFF4F0, void, WriteValue_33, app::TraceJsonWriter* this_ptr, app::Nullable_1_UInt32_ value)
    IL2CPP_REGISTER_METHOD(0x01BFF600, void, WriteValue_34, app::TraceJsonWriter* this_ptr, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x01BFF680, void, WriteValue_35, app::TraceJsonWriter* this_ptr, app::Nullable_1_UInt64_ value)
    IL2CPP_REGISTER_METHOD(0x01BFF7A0, void, WriteValue_36, app::TraceJsonWriter* this_ptr, app::Uri* value)
    IL2CPP_REGISTER_METHOD(0x01BFF8C0, void, WriteValue_37, app::TraceJsonWriter* this_ptr, uint16_t value)
    IL2CPP_REGISTER_METHOD(0x01BFF940, void, WriteValue_38, app::TraceJsonWriter* this_ptr, app::Nullable_1_UInt16_ value)
    IL2CPP_REGISTER_METHOD(0x01BFFA40, void, WriteComment, app::TraceJsonWriter* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01BFFAB0, void, WriteStartArray, app::TraceJsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BFFB30, void, WriteEndArray, app::TraceJsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BFFB90, void, WriteStartConstructor, app::TraceJsonWriter* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01BFFC20, void, WriteEndConstructor, app::TraceJsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BFFC80, void, WritePropertyName_1, app::TraceJsonWriter* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01BFFCF0, void, WritePropertyName_2, app::TraceJsonWriter* this_ptr, app::String* name, bool escape)
    IL2CPP_REGISTER_METHOD(0x01BFFD70, void, WriteStartObject, app::TraceJsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BFFDF0, void, WriteEndObject, app::TraceJsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BFFE50, void, WriteRawValue, app::TraceJsonWriter* this_ptr, app::String* json)
    IL2CPP_REGISTER_METHOD(0x01BFFED0, void, WriteRaw, app::TraceJsonWriter* this_ptr, app::String* json)
    IL2CPP_REGISTER_METHOD(0x01BFFF30, void, Close, app::TraceJsonWriter* this_ptr)
} // namespace app::classes::Newtonsoft::Json::Serialization::TraceJsonWriter
