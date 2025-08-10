#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/DateFormatHandling__Enum.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/DateTimeOffset.h>
#include <Modloader/app/structs/DateTimeZoneHandling__Enum.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/FloatFormatHandling__Enum.h>
#include <Modloader/app/structs/Formatting__Enum_1.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/IConvertible.h>
#include <Modloader/app/structs/JsonContainerType__Enum.h>
#include <Modloader/app/structs/JsonReader.h>
#include <Modloader/app/structs/JsonToken__Enum_1.h>
#include <Modloader/app/structs/JsonWriter.h>
#include <Modloader/app/structs/JsonWriterException.h>
#include <Modloader/app/structs/JsonWriter_State__Enum__Array__Array.h>
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
#include <Modloader/app/structs/PrimitiveTypeCode__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringEscapeHandling__Enum.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/WriteState__Enum_1.h>

namespace app::classes::Newtonsoft::Json::JsonWriter {
    IL2CPP_REGISTER_METHOD(0x01EFDC70, app::JsonWriter_State__Enum__Array__Array*, BuildStateArray, )
    IL2CPP_REGISTER_METHOD(0x01EFDFF0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_CloseOutput, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_CloseOutput, app::JsonWriter* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004379C0, bool, get_AutoCompleteOnClose, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004379D0, void, set_AutoCompleteOnClose, app::JsonWriter* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01EFE450, int32_t, get_Top, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFE4E0, app::WriteState__Enum_1, get_WriteState, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFE630, app::String*, get_ContainerPath, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFE720, app::String*, get_Path, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00998570, app::Formatting__Enum_1, get_Formatting, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFE880, void, set_Formatting, app::JsonWriter* this_ptr, app::Formatting__Enum_1 value)
    IL2CPP_REGISTER_METHOD(0x003FC830, app::DateFormatHandling__Enum, get_DateFormatHandling, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFE940, void, set_DateFormatHandling, app::JsonWriter* this_ptr, app::DateFormatHandling__Enum value)
    IL2CPP_REGISTER_METHOD(0x004E57A0, app::DateTimeZoneHandling__Enum, get_DateTimeZoneHandling, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFEA00, void, set_DateTimeZoneHandling, app::JsonWriter* this_ptr, app::DateTimeZoneHandling__Enum value)
    IL2CPP_REGISTER_METHOD(0x0057AAC0, app::StringEscapeHandling__Enum, get_StringEscapeHandling, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFEAC0, void, set_StringEscapeHandling, app::JsonWriter* this_ptr, app::StringEscapeHandling__Enum value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStringEscapeHandlingChanged, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006410F0, app::FloatFormatHandling__Enum, get_FloatFormatHandling, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFEB90, void, set_FloatFormatHandling, app::JsonWriter* this_ptr, app::FloatFormatHandling__Enum value)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, get_DateFormatString, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_DateFormatString, app::JsonWriter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01EFEC50, app::CultureInfo*, get_Culture, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_Culture, app::JsonWriter* this_ptr, app::CultureInfo* value)
    IL2CPP_REGISTER_METHOD(0x01EFED00, void, ctor, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFED20, void, UpdateScopeWithFinishedValue, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFED30, void, Push, app::JsonWriter* this_ptr, app::JsonContainerType__Enum value)
    IL2CPP_REGISTER_METHOD(0x01EFEFB0, app::JsonContainerType__Enum, Pop, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, app::JsonContainerType__Enum, Peek, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01858300, void, Close, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFF110, void, WriteStartObject, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFF150, void, WriteEndObject, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFF160, void, WriteStartArray, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFF1A0, void, WriteEndArray, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFF1B0, void, WriteStartConstructor, app::JsonWriter* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01EFF1F0, void, WriteEndConstructor, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFF200, void, WritePropertyName_1, app::JsonWriter* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01EFF210, void, WritePropertyName_2, app::JsonWriter* this_ptr, app::String* name, bool escape)
    IL2CPP_REGISTER_METHOD(0x01EFF230, void, WriteEnd_1, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFF360, void, WriteToken_1, app::JsonWriter* this_ptr, app::JsonReader* reader)
    IL2CPP_REGISTER_METHOD(0x01EFF420, void, WriteToken_2, app::JsonWriter* this_ptr, app::JsonReader* reader, bool write_children)
    IL2CPP_REGISTER_METHOD(0x01EFF4F0, void, WriteToken_3, app::JsonWriter* this_ptr, app::JsonToken__Enum_1 token, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x01EFFC80,
        void,
        WriteToken_4,
        app::JsonWriter* this_ptr,
        app::JsonReader* reader,
        bool write_children,
        bool write_date_constructor_as_date,
        bool write_comments
    )
    IL2CPP_REGISTER_METHOD(0x01F000A0, int32_t, CalculateWriteTokenInitialDepth, app::JsonWriter* this_ptr, app::JsonReader* reader)
    IL2CPP_REGISTER_METHOD(0x01F00110, int32_t, CalculateWriteTokenFinalDepth, app::JsonWriter* this_ptr, app::JsonReader* reader)
    IL2CPP_REGISTER_METHOD(0x01F00180, void, WriteConstructorDate, app::JsonWriter* this_ptr, app::JsonReader* reader)
    IL2CPP_REGISTER_METHOD(0x01F00280, void, WriteEnd_2, app::JsonWriter* this_ptr, app::JsonContainerType__Enum type)
    IL2CPP_REGISTER_METHOD(0x01F003B0, void, AutoCompleteAll, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F00400, app::JsonToken__Enum_1, GetCloseTokenForType, app::JsonWriter* this_ptr, app::JsonContainerType__Enum type)
    IL2CPP_REGISTER_METHOD(0x01F00500, void, AutoCompleteClose, app::JsonWriter* this_ptr, app::JsonContainerType__Enum type)
    IL2CPP_REGISTER_METHOD(0x01F008C0, int32_t, CalculateLevelsToComplete, app::JsonWriter* this_ptr, app::JsonContainerType__Enum type)
    IL2CPP_REGISTER_METHOD(0x01F009E0, void, UpdateCurrentState, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteEnd_3, app::JsonWriter* this_ptr, app::JsonToken__Enum_1 token)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteIndent, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteValueDelimiter, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteIndentSpace, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F00AF0, void, AutoComplete, app::JsonWriter* this_ptr, app::JsonToken__Enum_1 token_being_written)
    IL2CPP_REGISTER_METHOD(0x01F00D80, void, WriteNull, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F00DA0, void, WriteUndefined, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteRaw, app::JsonWriter* this_ptr, app::String* json)
    IL2CPP_REGISTER_METHOD(0x01F00DC0, void, WriteRawValue, app::JsonWriter* this_ptr, app::String* json)
    IL2CPP_REGISTER_METHOD(0x01F00E10, void, WriteValue_1, app::JsonWriter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01F00E30, void, WriteValue_2, app::JsonWriter* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01F00E30, void, WriteValue_3, app::JsonWriter* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x01F00E30, void, WriteValue_4, app::JsonWriter* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x01F00E30, void, WriteValue_5, app::JsonWriter* this_ptr, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x01F00E50, void, WriteValue_6, app::JsonWriter* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01F00E50, void, WriteValue_7, app::JsonWriter* this_ptr, double value)
    IL2CPP_REGISTER_METHOD(0x01F00E70, void, WriteValue_8, app::JsonWriter* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01F00E30, void, WriteValue_9, app::JsonWriter* this_ptr, int16_t value)
    IL2CPP_REGISTER_METHOD(0x01F00E30, void, WriteValue_10, app::JsonWriter* this_ptr, uint16_t value)
    IL2CPP_REGISTER_METHOD(0x01F00E10, void, WriteValue_11, app::JsonWriter* this_ptr, char16_t value)
    IL2CPP_REGISTER_METHOD(0x01F00E30, void, WriteValue_12, app::JsonWriter* this_ptr, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x01F00E30, void, WriteValue_13, app::JsonWriter* this_ptr, int8_t value)
    IL2CPP_REGISTER_METHOD(0x01F00E50, void, WriteValue_14, app::JsonWriter* this_ptr, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x01F00E90, void, WriteValue_15, app::JsonWriter* this_ptr, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x01F00E90, void, WriteValue_16, app::JsonWriter* this_ptr, app::DateTimeOffset value)
    IL2CPP_REGISTER_METHOD(0x01F00E10, void, WriteValue_17, app::JsonWriter* this_ptr, app::Guid value)
    IL2CPP_REGISTER_METHOD(0x01F00E10, void, WriteValue_18, app::JsonWriter* this_ptr, app::TimeSpan value)
    IL2CPP_REGISTER_METHOD(0x01F00EB0, void, WriteValue_19, app::JsonWriter* this_ptr, app::Nullable_1_Int32_ value)
    IL2CPP_REGISTER_METHOD(0x01F00F70, void, WriteValue_20, app::JsonWriter* this_ptr, app::Nullable_1_UInt32_ value)
    IL2CPP_REGISTER_METHOD(0x01F01030, void, WriteValue_21, app::JsonWriter* this_ptr, app::Nullable_1_Int64_ value)
    IL2CPP_REGISTER_METHOD(0x01F010F0, void, WriteValue_22, app::JsonWriter* this_ptr, app::Nullable_1_UInt64_ value)
    IL2CPP_REGISTER_METHOD(0x01F011B0, void, WriteValue_23, app::JsonWriter* this_ptr, app::Nullable_1_Single_ value)
    IL2CPP_REGISTER_METHOD(0x01F01260, void, WriteValue_24, app::JsonWriter* this_ptr, app::Nullable_1_Double_ value)
    IL2CPP_REGISTER_METHOD(0x01F01320, void, WriteValue_25, app::JsonWriter* this_ptr, app::Nullable_1_Boolean_ value)
    IL2CPP_REGISTER_METHOD(0x01F013E0, void, WriteValue_26, app::JsonWriter* this_ptr, app::Nullable_1_Int16_ value)
    IL2CPP_REGISTER_METHOD(0x01F014A0, void, WriteValue_27, app::JsonWriter* this_ptr, app::Nullable_1_UInt16_ value)
    IL2CPP_REGISTER_METHOD(0x01F01560, void, WriteValue_28, app::JsonWriter* this_ptr, app::Nullable_1_Char_ value)
    IL2CPP_REGISTER_METHOD(0x01F01620, void, WriteValue_29, app::JsonWriter* this_ptr, app::Nullable_1_Byte_ value)
    IL2CPP_REGISTER_METHOD(0x01F016E0, void, WriteValue_30, app::JsonWriter* this_ptr, app::Nullable_1_SByte_ value)
    IL2CPP_REGISTER_METHOD(0x01F017A0, void, WriteValue_31, app::JsonWriter* this_ptr, app::Nullable_1_Decimal_ value)
    IL2CPP_REGISTER_METHOD(0x01F01860, void, WriteValue_32, app::JsonWriter* this_ptr, app::Nullable_1_DateTime_ value)
    IL2CPP_REGISTER_METHOD(0x01F01920, void, WriteValue_33, app::JsonWriter* this_ptr, app::Nullable_1_DateTimeOffset_ value)
    IL2CPP_REGISTER_METHOD(0x01F019E0, void, WriteValue_34, app::JsonWriter* this_ptr, app::Nullable_1_Guid_ value)
    IL2CPP_REGISTER_METHOD(0x01F01AA0, void, WriteValue_35, app::JsonWriter* this_ptr, app::Nullable_1_TimeSpan_ value)
    IL2CPP_REGISTER_METHOD(0x01F01B60, void, WriteValue_36, app::JsonWriter* this_ptr, app::Byte__Array* value)
    IL2CPP_REGISTER_METHOD(0x01F01B90, void, WriteValue_37, app::JsonWriter* this_ptr, app::Uri* value)
    IL2CPP_REGISTER_METHOD(0x01F01C70, void, WriteValue_38, app::JsonWriter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01F01DE0, void, WriteComment, app::JsonWriter* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x01F01DF0, void, IDisposable_Dispose, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F01EA0, void, Dispose, app::JsonWriter* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x01F01ED0, void, WriteValue_39, app::JsonWriter* writer, app::PrimitiveTypeCode__Enum type_code, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x01F02FD0,
        void,
        ResolveConvertibleValue,
        app::IConvertible* convertible,
        app::PrimitiveTypeCode__Enum* type_code,
        app::Object** value
    )
    IL2CPP_REGISTER_METHOD(0x01F03200, app::JsonWriterException*, CreateUnsupportedTypeException, app::JsonWriter* writer, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01F03300, void, SetWriteState, app::JsonWriter* this_ptr, app::JsonToken__Enum_1 token, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01F03570, void, InternalWriteEnd, app::JsonWriter* this_ptr, app::JsonContainerType__Enum container)
    IL2CPP_REGISTER_METHOD(0x01EFF200, void, InternalWritePropertyName, app::JsonWriter* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InternalWriteRaw, app::JsonWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01F03580,
        void,
        InternalWriteStart,
        app::JsonWriter* this_ptr,
        app::JsonToken__Enum_1 token,
        app::JsonContainerType__Enum container
    )
    IL2CPP_REGISTER_METHOD(0x01F035C0, void, InternalWriteValue, app::JsonWriter* this_ptr, app::JsonToken__Enum_1 token)
    IL2CPP_REGISTER_METHOD(0x01F01DE0, void, InternalWriteComment, app::JsonWriter* this_ptr)
} // namespace app::classes::Newtonsoft::Json::JsonWriter
