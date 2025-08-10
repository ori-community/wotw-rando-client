#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/JsonNameTable.h>
#include <Modloader/app/structs/JsonReaderException.h>
#include <Modloader/app/structs/JsonTextReader.h>
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/Nullable_1_DateTimeOffset_.h>
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#include <Modloader/app/structs/Nullable_1_Decimal_.h>
#include <Modloader/app/structs/Nullable_1_Double_.h>
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ReadType__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Newtonsoft::Json::JsonTextReader {
    IL2CPP_REGISTER_METHOD(0x002FBD20, app::JsonNameTable*, get_PropertyNameTable, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD30, void, set_PropertyNameTable, app::JsonTextReader* this_ptr, app::JsonNameTable* value)
    IL2CPP_REGISTER_METHOD(0x01EF15A0, void, EnsureBufferNotEmpty, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF15F0, void, SetNewLine, app::JsonTextReader* this_ptr, bool has_next_char)
    IL2CPP_REGISTER_METHOD(0x01EF1660, void, OnNewLine, app::JsonTextReader* this_ptr, int32_t pos)
    IL2CPP_REGISTER_METHOD(0x01EF1670, void, ParseString, app::JsonTextReader* this_ptr, char16_t quote, app::ReadType__Enum read_type)
    IL2CPP_REGISTER_METHOD(0x01EF16D0, void, ParseReadString, app::JsonTextReader* this_ptr, char16_t quote, app::ReadType__Enum read_type)
    IL2CPP_REGISTER_METHOD(
        0x017322C0,
        void,
        BlockCopyChars,
        app::Char__Array* src,
        int32_t src_offset,
        app::Char__Array* dst,
        int32_t dst_offset,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01EF1C90, void, ShiftBufferIfNeeded, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF1D80, int32_t, ReadData_1, app::JsonTextReader* this_ptr, bool append)
    IL2CPP_REGISTER_METHOD(0x01EF1D90, void, PrepareBufferForReadData, app::JsonTextReader* this_ptr, bool append, int32_t chars_required)
    IL2CPP_REGISTER_METHOD(0x01EF1FD0, int32_t, ReadData_2, app::JsonTextReader* this_ptr, bool append, int32_t chars_required)
    IL2CPP_REGISTER_METHOD(0x01EF20A0, bool, EnsureChars, app::JsonTextReader* this_ptr, int32_t relative_position, bool append)
    IL2CPP_REGISTER_METHOD(0x01EF2140, bool, ReadChars, app::JsonTextReader* this_ptr, int32_t relative_position, bool append)
    IL2CPP_REGISTER_METHOD(0x01EF21D0, bool, Read, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF24F0, app::Nullable_1_Int32_, ReadAsInt32, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF25A0, app::Nullable_1_DateTime_, ReadAsDateTime, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF2660, app::String*, ReadAsString, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF2710, app::Byte__Array*, ReadAsBytes, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF2D80, app::Object*, ReadStringValue, app::JsonTextReader* this_ptr, app::ReadType__Enum read_type)
    IL2CPP_REGISTER_METHOD(0x01EF3490, app::Object*, FinishReadQuotedStringValue, app::JsonTextReader* this_ptr, app::ReadType__Enum read_type)
    IL2CPP_REGISTER_METHOD(0x01EF3760, app::JsonReaderException*, CreateUnexpectedCharacterException, app::JsonTextReader* this_ptr, char16_t c)
    IL2CPP_REGISTER_METHOD(0x01EF3850, app::Nullable_1_Boolean_, ReadAsBoolean, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF4020, void, ProcessValueComma, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF4100, app::Object*, ReadNumberValue, app::JsonTextReader* this_ptr, app::ReadType__Enum read_type)
    IL2CPP_REGISTER_METHOD(0x01EF4680, app::Object*, FinishReadQuotedNumber, app::JsonTextReader* this_ptr, app::ReadType__Enum read_type)
    IL2CPP_REGISTER_METHOD(0x01EF4830, app::Nullable_1_DateTimeOffset_, ReadAsDateTimeOffset, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF4900, app::Nullable_1_Decimal_, ReadAsDecimal, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF49D0, app::Nullable_1_Double_, ReadAsDouble, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF4A90, void, HandleNull, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF4C10, void, ReadFinished, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF4DC0, bool, ReadNullChar, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF4E10, void, EnsureBuffer, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF4E70, void, ReadStringIntoBuffer, app::JsonTextReader* this_ptr, char16_t quote)
    IL2CPP_REGISTER_METHOD(
        0x01EF5550,
        void,
        FinishReadStringIntoBuffer,
        app::JsonTextReader* this_ptr,
        int32_t char_pos,
        int32_t initial_position,
        int32_t last_write_position
    )
    IL2CPP_REGISTER_METHOD(
        0x01EF5660,
        void,
        WriteCharToBuffer,
        app::JsonTextReader* this_ptr,
        char16_t write_char,
        int32_t last_write_position,
        int32_t write_to_position
    )
    IL2CPP_REGISTER_METHOD(0x01EF56D0, char16_t, ConvertUnicode, app::JsonTextReader* this_ptr, bool enough_chars)
    IL2CPP_REGISTER_METHOD(0x01EF5900, char16_t, ParseUnicode, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF5930, void, ReadNumberIntoBuffer, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF5B80, bool, ReadNumberCharIntoBuffer, app::JsonTextReader* this_ptr, char16_t current_char, int32_t char_pos)
    IL2CPP_REGISTER_METHOD(0x01EF5D80, void, ClearRecentString, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF5DA0, bool, ParsePostValue, app::JsonTextReader* this_ptr, bool ignore_comments)
    IL2CPP_REGISTER_METHOD(0x01EF60D0, bool, ParseObject, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF62E0, bool, ParseProperty, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF6620, bool, ValidIdentifierChar, app::JsonTextReader* this_ptr, char16_t value)
    IL2CPP_REGISTER_METHOD(0x01EF66E0, void, ParseUnquotedProperty, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF6950, bool, ReadUnquotedPropertyReportIfDone, app::JsonTextReader* this_ptr, char16_t current_char, int32_t initial_position)
    IL2CPP_REGISTER_METHOD(0x01EF6AD0, bool, ParseValue, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF7240, void, ProcessLineFeed, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF7260, void, ProcessCarriageReturn, app::JsonTextReader* this_ptr, bool append)
    IL2CPP_REGISTER_METHOD(0x01EF72E0, void, EatWhitespace, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF7450, void, ParseConstructor, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF78C0, void, ParseNumber, app::JsonTextReader* this_ptr, app::ReadType__Enum read_type)
    IL2CPP_REGISTER_METHOD(
        0x01EF7950,
        void,
        ParseReadNumber,
        app::JsonTextReader* this_ptr,
        app::ReadType__Enum read_type,
        char16_t first_char,
        int32_t initial_position
    )
    IL2CPP_REGISTER_METHOD(0x01EF8DB0, app::JsonReaderException*, ThrowReaderError, app::JsonTextReader* this_ptr, app::String* message, app::Exception* ex)
    IL2CPP_REGISTER_METHOD(0x01EF8E80, app::Object*, BigIntegerParse, app::String* number, app::CultureInfo* culture)
    IL2CPP_REGISTER_METHOD(0x01EF8F50, void, ParseComment, app::JsonTextReader* this_ptr, bool set_token)
    IL2CPP_REGISTER_METHOD(0x01EF9370, void, EndComment, app::JsonTextReader* this_ptr, bool set_token, int32_t initial_position, int32_t end_position)
    IL2CPP_REGISTER_METHOD(0x01EF93C0, bool, MatchValue_1, app::JsonTextReader* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01EF9510, bool, MatchValue_2, app::JsonTextReader* this_ptr, bool enough_chars, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01EF9650, bool, MatchValueWithTrailingSeparator, app::JsonTextReader* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01EF9850, bool, IsSeparator, app::JsonTextReader* this_ptr, char16_t c)
    IL2CPP_REGISTER_METHOD(0x01EF9A00, void, ParseTrue, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF9B10, void, ParseNull, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF9C00, void, ParseUndefined, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF9CF0, void, ParseFalse, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EF9E00, app::Object*, ParseNumberNegativeInfinity_1, app::JsonTextReader* this_ptr, app::ReadType__Enum read_type)
    IL2CPP_REGISTER_METHOD(0x01EFA050, app::Object*, ParseNumberNegativeInfinity_2, app::JsonTextReader* this_ptr, app::ReadType__Enum read_type, bool matched)
    IL2CPP_REGISTER_METHOD(0x01EFA200, app::Object*, ParseNumberPositiveInfinity_1, app::JsonTextReader* this_ptr, app::ReadType__Enum read_type)
    IL2CPP_REGISTER_METHOD(0x01EFA450, app::Object*, ParseNumberPositiveInfinity_2, app::JsonTextReader* this_ptr, app::ReadType__Enum read_type, bool matched)
    IL2CPP_REGISTER_METHOD(0x01EFA600, app::Object*, ParseNumberNaN_1, app::JsonTextReader* this_ptr, app::ReadType__Enum read_type)
    IL2CPP_REGISTER_METHOD(0x01EFA850, app::Object*, ParseNumberNaN_2, app::JsonTextReader* this_ptr, app::ReadType__Enum read_type, bool matched)
    IL2CPP_REGISTER_METHOD(0x01EFAA00, void, Close, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, HasLineInfo, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFAAA0, int32_t, get_LineNumber, app::JsonTextReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EFAAF0, int32_t, get_LinePosition, app::JsonTextReader* this_ptr)
} // namespace app::classes::Newtonsoft::Json::JsonTextReader
