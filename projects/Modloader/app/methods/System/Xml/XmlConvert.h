#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArgumentException.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/DateTimeOffset.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/ExceptionType__Enum.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/XmlDateTimeSerializationMode__Enum.h>

namespace app::classes::System::Xml::XmlConvert {
    IL2CPP_REGISTER_METHOD(0x01960BB0, app::String*, EncodeName_1, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01960C50, app::String*, EncodeLocalName, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01960CF0, app::String*, DecodeName, app::String* name)
    IL2CPP_REGISTER_METHOD(0x019616B0, app::String*, EncodeName_2, app::String* name, bool first, bool local)
    IL2CPP_REGISTER_METHOD(0x01962170, int32_t, FromHex, char16_t digit)
    IL2CPP_REGISTER_METHOD(0x019621A0, app::Byte__Array*, FromBinHexString_1, app::String* s)
    IL2CPP_REGISTER_METHOD(0x01962240, app::Byte__Array*, FromBinHexString_2, app::String* s, bool allow_odd_count)
    IL2CPP_REGISTER_METHOD(0x01962310, app::String*, ToBinHexString, app::Byte__Array* in_array)
    IL2CPP_REGISTER_METHOD(0x019623D0, app::String*, VerifyName, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01962550, app::Exception*, TryVerifyName, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01962830, app::String*, VerifyQName, app::String* name, app::ExceptionType__Enum exception_type)
    IL2CPP_REGISTER_METHOD(0x019629E0, app::String*, VerifyNCName_1, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01962BD0, app::String*, VerifyNCName_2, app::String* name, app::ExceptionType__Enum exception_type)
    IL2CPP_REGISTER_METHOD(0x01962D50, app::Exception*, TryVerifyNCName, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01962E50, app::String*, VerifyTOKEN, app::String* token)
    IL2CPP_REGISTER_METHOD(0x01962FC0, app::Exception*, TryVerifyTOKEN, app::String* token)
    IL2CPP_REGISTER_METHOD(0x019631E0, app::Exception*, TryVerifyNMTOKEN, app::String* name)
    IL2CPP_REGISTER_METHOD(0x019635A0, app::Exception*, TryVerifyNormalizedString, app::String* str)
    IL2CPP_REGISTER_METHOD(0x01963760, app::String*, ToString_1, bool value)
    IL2CPP_REGISTER_METHOD(0x019637F0, app::String*, ToString_2, char16_t value)
    IL2CPP_REGISTER_METHOD(0x01963810, app::String*, ToString_3, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x01963850, app::String*, ToString_4, int8_t value)
    IL2CPP_REGISTER_METHOD(0x01963880, app::String*, ToString_5, int16_t value)
    IL2CPP_REGISTER_METHOD(0x019638B0, app::String*, ToString_6, int32_t value)
    IL2CPP_REGISTER_METHOD(0x019638E0, app::String*, ToString_7, int64_t value)
    IL2CPP_REGISTER_METHOD(0x01963910, app::String*, ToString_8, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x01963940, app::String*, ToString_9, uint16_t value)
    IL2CPP_REGISTER_METHOD(0x01963970, app::String*, ToString_10, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x019639A0, app::String*, ToString_11, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x019639D0, app::String*, ToString_12, float value)
    IL2CPP_REGISTER_METHOD(0x01963B00, app::String*, ToString_13, double value)
    IL2CPP_REGISTER_METHOD(0x01963C60, app::String*, ToString_14, app::TimeSpan value)
    IL2CPP_REGISTER_METHOD(0x01963CC0, app::String*, ToString_15, app::DateTime value, app::String* format)
    IL2CPP_REGISTER_METHOD(0x01963D70, app::String*, ToString_16, app::DateTime value, app::XmlDateTimeSerializationMode__Enum date_time_option)
    IL2CPP_REGISTER_METHOD(0x01963F70, app::String*, ToString_17, app::DateTimeOffset value)
    IL2CPP_REGISTER_METHOD(0x01963FB0, app::String*, ToString_18, app::Guid value)
    IL2CPP_REGISTER_METHOD(0x01963FC0, bool, ToBoolean, app::String* s)
    IL2CPP_REGISTER_METHOD(0x019641E0, app::Exception*, TryToBoolean, app::String* s, bool* result)
    IL2CPP_REGISTER_METHOD(0x01964500, char16_t, ToChar, app::String* s)
    IL2CPP_REGISTER_METHOD(0x01964610, app::Exception*, TryToChar, app::String* s, char16_t* result)
    IL2CPP_REGISTER_METHOD(0x019648A0, app::Decimal, ToDecimal, app::String* s)
    IL2CPP_REGISTER_METHOD(0x01964990, app::Exception*, TryToDecimal, app::String* s, app::Decimal* result)
    IL2CPP_REGISTER_METHOD(0x01964C30, app::Decimal, ToInteger, app::String* s)
    IL2CPP_REGISTER_METHOD(0x01964D20, app::Exception*, TryToInteger, app::String* s, app::Decimal* result)
    IL2CPP_REGISTER_METHOD(0x01964FC0, int8_t, ToSByte, app::String* s)
    IL2CPP_REGISTER_METHOD(0x01965010, app::Exception*, TryToSByte, app::String* s, int8_t* result)
    IL2CPP_REGISTER_METHOD(0x019652B0, int16_t, ToInt16, app::String* s)
    IL2CPP_REGISTER_METHOD(0x01965300, app::Exception*, TryToInt16, app::String* s, int16_t* result)
    IL2CPP_REGISTER_METHOD(0x019655A0, int32_t, ToInt32, app::String* s)
    IL2CPP_REGISTER_METHOD(0x019655F0, app::Exception*, TryToInt32, app::String* s, int32_t* result)
    IL2CPP_REGISTER_METHOD(0x01965870, int64_t, ToInt64, app::String* s)
    IL2CPP_REGISTER_METHOD(0x019658C0, app::Exception*, TryToInt64, app::String* s, int64_t* result)
    IL2CPP_REGISTER_METHOD(0x01965B40, uint8_t, ToByte, app::String* s)
    IL2CPP_REGISTER_METHOD(0x01965B90, app::Exception*, TryToByte, app::String* s, uint8_t* result)
    IL2CPP_REGISTER_METHOD(0x01965E00, uint16_t, ToUInt16, app::String* s)
    IL2CPP_REGISTER_METHOD(0x01965E50, app::Exception*, TryToUInt16, app::String* s, uint16_t* result)
    IL2CPP_REGISTER_METHOD(0x019660C0, uint32_t, ToUInt32, app::String* s)
    IL2CPP_REGISTER_METHOD(0x01966110, app::Exception*, TryToUInt32, app::String* s, uint32_t* result)
    IL2CPP_REGISTER_METHOD(0x01966390, uint64_t, ToUInt64, app::String* s)
    IL2CPP_REGISTER_METHOD(0x019663E0, app::Exception*, TryToUInt64, app::String* s, uint64_t* result)
    IL2CPP_REGISTER_METHOD(0x01966660, float, ToSingle, app::String* s)
    IL2CPP_REGISTER_METHOD(0x01966800, app::Exception*, TryToSingle, app::String* s, float* result)
    IL2CPP_REGISTER_METHOD(0x01966B80, double, ToDouble, app::String* s)
    IL2CPP_REGISTER_METHOD(0x01966D30, app::Exception*, TryToDouble, app::String* s, double* result)
    IL2CPP_REGISTER_METHOD(0x019670C0, double, ToXPathDouble, app::Object* o)
    IL2CPP_REGISTER_METHOD(0x01967320, app::TimeSpan, ToTimeSpan, app::String* s)
    IL2CPP_REGISTER_METHOD(0x019674A0, app::Exception*, TryToTimeSpan, app::String* s, app::TimeSpan* result)
    IL2CPP_REGISTER_METHOD(0x019675B0, app::String__Array*, get_AllDateTimeFormats, )
    IL2CPP_REGISTER_METHOD(0x019676C0, void, CreateAllDateTimeFormats, )
    IL2CPP_REGISTER_METHOD(0x01968070, app::DateTime, ToDateTime_1, app::String* s)
    IL2CPP_REGISTER_METHOD(0x019682D0, app::DateTime, ToDateTime_2, app::String* s, app::String__Array* formats)
    IL2CPP_REGISTER_METHOD(0x019683C0, app::DateTime, ToDateTime_3, app::String* s, app::XmlDateTimeSerializationMode__Enum date_time_option)
    IL2CPP_REGISTER_METHOD(0x01968600, app::DateTimeOffset, ToDateTimeOffset, app::String* s)
    IL2CPP_REGISTER_METHOD(0x01968720, app::Guid, ToGuid, app::String* s)
    IL2CPP_REGISTER_METHOD(0x01968740, app::Exception*, TryToGuid, app::String* s, app::Guid* result)
    IL2CPP_REGISTER_METHOD(0x01968A90, app::DateTime, SwitchToLocalTime, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x01968B20, app::DateTime, SwitchToUtcTime, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x01968BC0, app::Uri*, ToUri, app::String* s)
    IL2CPP_REGISTER_METHOD(0x01968E30, app::Exception*, TryToUri, app::String* s, app::Uri** result)
    IL2CPP_REGISTER_METHOD(0x01969260, bool, StrEqual, app::Char__Array* chars, int32_t str_pos1, int32_t str_len1, app::String* str2)
    IL2CPP_REGISTER_METHOD(0x01969310, app::String*, TrimString, app::String* value)
    IL2CPP_REGISTER_METHOD(0x019693F0, app::String*, TrimStringStart, app::String* value)
    IL2CPP_REGISTER_METHOD(0x019694B0, app::String*, TrimStringEnd, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01969570, app::String__Array*, SplitString, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01969650, bool, IsNegativeZero, double value)
    IL2CPP_REGISTER_METHOD(0x01969710, int64_t, DoubleToInt64Bits, double value)
    IL2CPP_REGISTER_METHOD(
        0x01969720,
        void,
        VerifyCharData,
        app::String* data,
        app::ExceptionType__Enum inv_char_exception_type,
        app::ExceptionType__Enum inv_surrogate_exception_type
    )
    IL2CPP_REGISTER_METHOD(0x019699C0, app::String*, EscapeValueForDebuggerDisplay, app::String* value)
    IL2CPP_REGISTER_METHOD(
        0x01969CD0,
        app::Exception*,
        CreateException_1,
        app::String* res,
        app::ExceptionType__Enum exception_type,
        int32_t line_no,
        int32_t line_pos
    )
    IL2CPP_REGISTER_METHOD(
        0x01969F40,
        app::Exception*,
        CreateException_2,
        app::String* res,
        app::String* arg,
        app::ExceptionType__Enum exception_type,
        int32_t line_no,
        int32_t line_pos
    )
    IL2CPP_REGISTER_METHOD(0x0196A220, app::Exception*, CreateException_3, app::String* res, app::String__Array* args, app::ExceptionType__Enum exception_type)
    IL2CPP_REGISTER_METHOD(
        0x0196A2F0,
        app::Exception*,
        CreateException_4,
        app::String* res,
        app::String__Array* args,
        app::ExceptionType__Enum exception_type,
        int32_t line_no,
        int32_t line_pos
    )
    IL2CPP_REGISTER_METHOD(0x0196A560, app::Exception*, CreateInvalidSurrogatePairException_1, char16_t low, char16_t hi)
    IL2CPP_REGISTER_METHOD(
        0x0196A6A0,
        app::Exception*,
        CreateInvalidSurrogatePairException_2,
        char16_t low,
        char16_t hi,
        app::ExceptionType__Enum exception_type
    )
    IL2CPP_REGISTER_METHOD(
        0x0196A770,
        app::Exception*,
        CreateInvalidSurrogatePairException_3,
        char16_t low,
        char16_t hi,
        app::ExceptionType__Enum exception_type,
        int32_t line_no,
        int32_t line_pos
    )
    IL2CPP_REGISTER_METHOD(0x0196A990, app::Exception*, CreateInvalidHighSurrogateCharException_1, char16_t hi)
    IL2CPP_REGISTER_METHOD(0x0196AB90, app::Exception*, CreateInvalidHighSurrogateCharException_2, char16_t hi, app::ExceptionType__Enum exception_type)
    IL2CPP_REGISTER_METHOD(
        0x0196AD20,
        app::Exception*,
        CreateInvalidHighSurrogateCharException_3,
        char16_t hi,
        app::ExceptionType__Enum exception_type,
        int32_t line_no,
        int32_t line_pos
    )
    IL2CPP_REGISTER_METHOD(
        0x0196AE50,
        app::Exception*,
        CreateInvalidCharException_1,
        app::String* data,
        int32_t inv_char_pos,
        app::ExceptionType__Enum exception_type
    )
    IL2CPP_REGISTER_METHOD(0x0196AF70, app::Exception*, CreateInvalidCharException_2, char16_t inv_char, char16_t next_char)
    IL2CPP_REGISTER_METHOD(
        0x0196B020,
        app::Exception*,
        CreateInvalidCharException_3,
        char16_t inv_char,
        char16_t next_char,
        app::ExceptionType__Enum exception_type
    )
    IL2CPP_REGISTER_METHOD(
        0x0196B180,
        app::Exception*,
        CreateInvalidNameCharException,
        app::String* name,
        int32_t index,
        app::ExceptionType__Enum exception_type
    )
    IL2CPP_REGISTER_METHOD(0x0196B2B0, app::ArgumentException*, CreateInvalidNameArgumentException, app::String* name, app::String* argument_name)
    IL2CPP_REGISTER_METHOD(0x0196B500, void, cctor, )
} // namespace app::classes::System::Xml::XmlConvert
