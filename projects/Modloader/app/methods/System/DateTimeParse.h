#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Calendar.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/DateTimeFormatInfo.h>
#include <Modloader/app/structs/DateTimeParse_DS__Enum.h>
#include <Modloader/app/structs/DateTimeParse_TM__Enum.h>
#include <Modloader/app/structs/DateTimeRawInfo.h>
#include <Modloader/app/structs/DateTimeResult.h>
#include <Modloader/app/structs/DateTimeStyles__Enum.h>
#include <Modloader/app/structs/DateTimeToken.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/ParsingInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/_DTString.h>

namespace app::classes::System::DateTimeParse {
    IL2CPP_REGISTER_METHOD(
        0x028ACE80,
        app::DateTime,
        ParseExact,
        app::String* s,
        app::String* format,
        app::DateTimeFormatInfo* dtfi,
        app::DateTimeStyles__Enum style
    )
    IL2CPP_REGISTER_METHOD(
        0x028ACFF0,
        bool,
        TryParseExact_1,
        app::String* s,
        app::String* format,
        app::DateTimeFormatInfo* dtfi,
        app::DateTimeStyles__Enum style,
        app::DateTime* result
    )
    IL2CPP_REGISTER_METHOD(
        0x028AD160,
        bool,
        TryParseExact_2,
        app::String* s,
        app::String* format,
        app::DateTimeFormatInfo* dtfi,
        app::DateTimeStyles__Enum style,
        app::DateTime* result,
        app::TimeSpan* offset
    )
    IL2CPP_REGISTER_METHOD(
        0x028AD330,
        bool,
        TryParseExact_3,
        app::String* s,
        app::String* format,
        app::DateTimeFormatInfo* dtfi,
        app::DateTimeStyles__Enum style,
        app::DateTimeResult* result
    )
    IL2CPP_REGISTER_METHOD(
        0x028AD490,
        app::DateTime,
        ParseExactMultiple_1,
        app::String* s,
        app::String__Array* formats,
        app::DateTimeFormatInfo* dtfi,
        app::DateTimeStyles__Enum style
    )
    IL2CPP_REGISTER_METHOD(
        0x028AD600,
        app::DateTime,
        ParseExactMultiple_2,
        app::String* s,
        app::String__Array* formats,
        app::DateTimeFormatInfo* dtfi,
        app::DateTimeStyles__Enum style,
        app::TimeSpan* offset
    )
    IL2CPP_REGISTER_METHOD(
        0x028AD7B0,
        bool,
        TryParseExactMultiple_1,
        app::String* s,
        app::String__Array* formats,
        app::DateTimeFormatInfo* dtfi,
        app::DateTimeStyles__Enum style,
        app::DateTime* result,
        app::TimeSpan* offset
    )
    IL2CPP_REGISTER_METHOD(
        0x028AD980,
        bool,
        TryParseExactMultiple_2,
        app::String* s,
        app::String__Array* formats,
        app::DateTimeFormatInfo* dtfi,
        app::DateTimeStyles__Enum style,
        app::DateTime* result
    )
    IL2CPP_REGISTER_METHOD(
        0x028ADAF0,
        bool,
        TryParseExactMultiple_3,
        app::String* s,
        app::String__Array* formats,
        app::DateTimeFormatInfo* dtfi,
        app::DateTimeStyles__Enum style,
        app::DateTimeResult* result
    )
    IL2CPP_REGISTER_METHOD(0x028ADD60, bool, MatchWord, app::_DTString* str, app::String* target)
    IL2CPP_REGISTER_METHOD(0x028ADF00, bool, GetTimeZoneName, app::_DTString* str)
    IL2CPP_REGISTER_METHOD(0x028ADFF0, bool, IsDigit, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x028AE010, bool, ParseFraction, app::_DTString* str, double* result)
    IL2CPP_REGISTER_METHOD(0x028AE150, bool, ParseTimeZone, app::_DTString* str, app::TimeSpan* result)
    IL2CPP_REGISTER_METHOD(0x028AE4E0, bool, HandleTimeZone, app::_DTString* str, app::DateTimeResult* result)
    IL2CPP_REGISTER_METHOD(
        0x028AE680,
        bool,
        Lex,
        app::DateTimeParse_DS__Enum dps,
        app::_DTString* str,
        app::DateTimeToken* dtok,
        app::DateTimeRawInfo* raw,
        app::DateTimeResult* result,
        app::DateTimeFormatInfo** dtfi,
        app::DateTimeStyles__Enum styles
    )
    IL2CPP_REGISTER_METHOD(0x028AF660, bool, VerifyValidPunctuation, app::_DTString* str)
    IL2CPP_REGISTER_METHOD(0x028AF840, bool, GetYearMonthDayOrder, app::String* date_pattern, app::DateTimeFormatInfo* dtfi, int32_t* order)
    IL2CPP_REGISTER_METHOD(0x028AFA70, bool, GetYearMonthOrder, app::String* pattern, app::DateTimeFormatInfo* dtfi, int32_t* order)
    IL2CPP_REGISTER_METHOD(0x028AFBC0, bool, GetMonthDayOrder, app::String* pattern, app::DateTimeFormatInfo* dtfi, int32_t* order)
    IL2CPP_REGISTER_METHOD(0x028AFD50, bool, TryAdjustYear, app::DateTimeResult* result, int32_t year, int32_t* adjusted_year)
    IL2CPP_REGISTER_METHOD(0x028AFE40, bool, SetDateYMD, app::DateTimeResult* result, int32_t year, int32_t month, int32_t day)
    IL2CPP_REGISTER_METHOD(0x028AFEC0, bool, SetDateMDY, app::DateTimeResult* result, int32_t month, int32_t day, int32_t year)
    IL2CPP_REGISTER_METHOD(0x028AFFA0, bool, SetDateDMY, app::DateTimeResult* result, int32_t day, int32_t month, int32_t year)
    IL2CPP_REGISTER_METHOD(0x028B0080, bool, SetDateYDM, app::DateTimeResult* result, int32_t year, int32_t day, int32_t month)
    IL2CPP_REGISTER_METHOD(0x028B0160, void, GetDefaultYear, app::DateTimeResult* result, app::DateTimeStyles__Enum* styles)
    IL2CPP_REGISTER_METHOD(
        0x028B0240,
        bool,
        GetDayOfNN,
        app::DateTimeResult* result,
        app::DateTimeStyles__Enum* styles,
        app::DateTimeRawInfo* raw,
        app::DateTimeFormatInfo* dtfi
    )
    IL2CPP_REGISTER_METHOD(0x028B0400, bool, GetDayOfNNN, app::DateTimeResult* result, app::DateTimeRawInfo* raw, app::DateTimeFormatInfo* dtfi)
    IL2CPP_REGISTER_METHOD(
        0x028B08F0,
        bool,
        GetDayOfMN,
        app::DateTimeResult* result,
        app::DateTimeStyles__Enum* styles,
        app::DateTimeRawInfo* raw,
        app::DateTimeFormatInfo* dtfi
    )
    IL2CPP_REGISTER_METHOD(0x028B0B70, bool, GetHebrewDayOfNM, app::DateTimeResult* result, app::DateTimeRawInfo* raw, app::DateTimeFormatInfo* dtfi)
    IL2CPP_REGISTER_METHOD(
        0x028B0D00,
        bool,
        GetDayOfNM,
        app::DateTimeResult* result,
        app::DateTimeStyles__Enum* styles,
        app::DateTimeRawInfo* raw,
        app::DateTimeFormatInfo* dtfi
    )
    IL2CPP_REGISTER_METHOD(0x028B0F80, bool, GetDayOfMNN, app::DateTimeResult* result, app::DateTimeRawInfo* raw, app::DateTimeFormatInfo* dtfi)
    IL2CPP_REGISTER_METHOD(0x028B1450, bool, GetDayOfYNN, app::DateTimeResult* result, app::DateTimeRawInfo* raw, app::DateTimeFormatInfo* dtfi)
    IL2CPP_REGISTER_METHOD(0x028B1630, bool, GetDayOfNNY, app::DateTimeResult* result, app::DateTimeRawInfo* raw, app::DateTimeFormatInfo* dtfi)
    IL2CPP_REGISTER_METHOD(0x028B1860, bool, GetDayOfYMN, app::DateTimeResult* result, app::DateTimeRawInfo* raw, app::DateTimeFormatInfo* dtfi)
    IL2CPP_REGISTER_METHOD(0x028B1970, bool, GetDayOfYN, app::DateTimeResult* result, app::DateTimeRawInfo* raw, app::DateTimeFormatInfo* dtfi)
    IL2CPP_REGISTER_METHOD(0x028B1A70, bool, GetDayOfYM, app::DateTimeResult* result, app::DateTimeRawInfo* raw, app::DateTimeFormatInfo* dtfi)
    IL2CPP_REGISTER_METHOD(0x028B1B70, void, AdjustTimeMark, app::DateTimeFormatInfo* dtfi, app::DateTimeRawInfo* raw)
    IL2CPP_REGISTER_METHOD(0x028B1BF0, bool, AdjustHour, int32_t* hour, app::DateTimeParse_TM__Enum time_mark)
    IL2CPP_REGISTER_METHOD(0x028B1C30, bool, GetTimeOfN, app::DateTimeFormatInfo* dtfi, app::DateTimeResult* result, app::DateTimeRawInfo* raw)
    IL2CPP_REGISTER_METHOD(0x028B1D00, bool, GetTimeOfNN, app::DateTimeFormatInfo* dtfi, app::DateTimeResult* result, app::DateTimeRawInfo* raw)
    IL2CPP_REGISTER_METHOD(0x028B1DD0, bool, GetTimeOfNNN, app::DateTimeFormatInfo* dtfi, app::DateTimeResult* result, app::DateTimeRawInfo* raw)
    IL2CPP_REGISTER_METHOD(0x028B1EB0, bool, GetDateOfDSN, app::DateTimeResult* result, app::DateTimeRawInfo* raw)
    IL2CPP_REGISTER_METHOD(0x028B1F80, bool, GetDateOfNDS, app::DateTimeResult* result, app::DateTimeRawInfo* raw)
    IL2CPP_REGISTER_METHOD(0x028B2080, bool, GetDateOfNNDS, app::DateTimeResult* result, app::DateTimeRawInfo* raw, app::DateTimeFormatInfo* dtfi)
    IL2CPP_REGISTER_METHOD(0x028B2320, bool, ProcessDateTimeSuffix, app::DateTimeResult* result, app::DateTimeRawInfo* raw, app::DateTimeToken* dtok)
    IL2CPP_REGISTER_METHOD(
        0x028B2400,
        bool,
        ProcessHebrewTerminalState,
        app::DateTimeParse_DS__Enum dps,
        app::DateTimeResult* result,
        app::DateTimeStyles__Enum* styles,
        app::DateTimeRawInfo* raw,
        app::DateTimeFormatInfo* dtfi
    )
    IL2CPP_REGISTER_METHOD(
        0x028B28F0,
        bool,
        ProcessTerminaltState,
        app::DateTimeParse_DS__Enum dps,
        app::DateTimeResult* result,
        app::DateTimeStyles__Enum* styles,
        app::DateTimeRawInfo* raw,
        app::DateTimeFormatInfo* dtfi
    )
    IL2CPP_REGISTER_METHOD(0x028B2F50, app::DateTime, Parse_1, app::String* s, app::DateTimeFormatInfo* dtfi, app::DateTimeStyles__Enum styles)
    IL2CPP_REGISTER_METHOD(
        0x028B30A0,
        app::DateTime,
        Parse_2,
        app::String* s,
        app::DateTimeFormatInfo* dtfi,
        app::DateTimeStyles__Enum styles,
        app::TimeSpan* offset
    )
    IL2CPP_REGISTER_METHOD(0x028B3210, bool, TryParse_1, app::String* s, app::DateTimeFormatInfo* dtfi, app::DateTimeStyles__Enum styles, app::DateTime* result)
    IL2CPP_REGISTER_METHOD(
        0x028B3370,
        bool,
        TryParse_2,
        app::String* s,
        app::DateTimeFormatInfo* dtfi,
        app::DateTimeStyles__Enum styles,
        app::DateTime* result,
        app::TimeSpan* offset
    )
    IL2CPP_REGISTER_METHOD(
        0x028B3520,
        bool,
        TryParse_3,
        app::String* s,
        app::DateTimeFormatInfo* dtfi,
        app::DateTimeStyles__Enum styles,
        app::DateTimeResult* result
    )
    IL2CPP_REGISTER_METHOD(0x028B3EA0, bool, DetermineTimeZoneAdjustments, app::DateTimeResult* result, app::DateTimeStyles__Enum styles, bool b_time_only)
    IL2CPP_REGISTER_METHOD(0x028B4100, bool, DateTimeOffsetTimeZonePostProcessing, app::DateTimeResult* result, app::DateTimeStyles__Enum styles)
    IL2CPP_REGISTER_METHOD(0x028B4350, bool, AdjustTimeZoneToUniversal, app::DateTimeResult* result)
    IL2CPP_REGISTER_METHOD(0x028B4450, bool, AdjustTimeZoneToLocal, app::DateTimeResult* result, bool b_time_only)
    IL2CPP_REGISTER_METHOD(
        0x028B46E0,
        bool,
        ParseISO8601,
        app::DateTimeRawInfo* raw,
        app::_DTString* str,
        app::DateTimeStyles__Enum styles,
        app::DateTimeResult* result
    )
    IL2CPP_REGISTER_METHOD(0x028B4D70, bool, MatchHebrewDigits, app::_DTString* str, int32_t digit_len, int32_t* number)
    IL2CPP_REGISTER_METHOD(0x028B4EA0, bool, ParseDigits_1, app::_DTString* str, int32_t digit_len, int32_t* result)
    IL2CPP_REGISTER_METHOD(0x028B4F90, bool, ParseDigits_2, app::_DTString* str, int32_t min_digit_len, int32_t max_digit_len, int32_t* result)
    IL2CPP_REGISTER_METHOD(0x028B5040, bool, ParseFractionExact, app::_DTString* str, int32_t max_digit_len, double* result)
    IL2CPP_REGISTER_METHOD(0x028B51E0, bool, ParseSign, app::_DTString* str, bool* result)
    IL2CPP_REGISTER_METHOD(0x028B5270, bool, ParseTimeZoneOffset, app::_DTString* str, int32_t len, app::TimeSpan* result)
    IL2CPP_REGISTER_METHOD(0x028B56E0, bool, MatchAbbreviatedMonthName, app::_DTString* str, app::DateTimeFormatInfo* dtfi, int32_t* result)
    IL2CPP_REGISTER_METHOD(0x028B5950, bool, MatchMonthName, app::_DTString* str, app::DateTimeFormatInfo* dtfi, int32_t* result)
    IL2CPP_REGISTER_METHOD(0x028B5C60, bool, MatchAbbreviatedDayName, app::_DTString* str, app::DateTimeFormatInfo* dtfi, int32_t* result)
    IL2CPP_REGISTER_METHOD(0x028B5D60, bool, MatchDayName, app::_DTString* str, app::DateTimeFormatInfo* dtfi, int32_t* result)
    IL2CPP_REGISTER_METHOD(0x028B5E60, bool, MatchEraName, app::_DTString* str, app::DateTimeFormatInfo* dtfi, int32_t* result)
    IL2CPP_REGISTER_METHOD(0x028B6000, bool, MatchTimeMark, app::_DTString* str, app::DateTimeFormatInfo* dtfi, app::DateTimeParse_TM__Enum* result)
    IL2CPP_REGISTER_METHOD(0x028B61E0, bool, MatchAbbreviatedTimeMark, app::_DTString* str, app::DateTimeFormatInfo* dtfi, app::DateTimeParse_TM__Enum* result)
    IL2CPP_REGISTER_METHOD(0x028B62E0, bool, CheckNewValue, int32_t* current_value, int32_t new_value, char16_t pattern_char, app::DateTimeResult* result)
    IL2CPP_REGISTER_METHOD(0x028B63C0, app::DateTime, GetDateTimeNow, app::DateTimeResult* result, app::DateTimeStyles__Enum* styles)
    IL2CPP_REGISTER_METHOD(0x028B6520, bool, CheckDefaultDateTime, app::DateTimeResult* result, app::Calendar** cal, app::DateTimeStyles__Enum styles)
    IL2CPP_REGISTER_METHOD(
        0x028B6780,
        app::String*,
        ExpandPredefinedFormat,
        app::String* format,
        app::DateTimeFormatInfo** dtfi,
        app::ParsingInfo* parse_info,
        app::DateTimeResult* result
    )
    IL2CPP_REGISTER_METHOD(
        0x028B6B90,
        bool,
        ParseByFormat,
        app::_DTString* str,
        app::_DTString* format,
        app::ParsingInfo* parse_info,
        app::DateTimeFormatInfo* dtfi,
        app::DateTimeResult* result
    )
    IL2CPP_REGISTER_METHOD(0x028B7D10, bool, TryParseQuoteString, app::String* format, int32_t pos, app::StringBuilder* result, int32_t* return_value)
    IL2CPP_REGISTER_METHOD(
        0x028B7DF0,
        bool,
        DoStrictParse,
        app::String* s,
        app::String* format_param,
        app::DateTimeStyles__Enum styles,
        app::DateTimeFormatInfo* dtfi,
        app::DateTimeResult* result
    )
    IL2CPP_REGISTER_METHOD(0x028B8410, app::Exception*, GetDateTimeParseException, app::DateTimeResult* result)
    IL2CPP_REGISTER_METHOD(0x028B8850, void, cctor, )
} // namespace app::classes::System::DateTimeParse
