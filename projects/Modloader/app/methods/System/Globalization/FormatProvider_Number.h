#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FormatProvider_Number_NumberBuffer.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/NumberFormatInfo.h>
#include <Modloader/app/structs/NumberStyles__Enum.h>
#include <Modloader/app/structs/ReadOnlySpan_1_Char_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/char16_t.h>

namespace app::classes::System::Globalization::FormatProvider_Number {
    IL2CPP_REGISTER_METHOD(0x02270570, bool, IsWhite, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x030F5360, char16_t*, MatchChars_1, char16_t* p, app::String* str)
    IL2CPP_REGISTER_METHOD(0x030F5470, char16_t*, MatchChars_2, char16_t* p, char16_t* str)
    IL2CPP_REGISTER_METHOD(
        0x030F54C0,
        bool,
        ParseNumber,
        app::char16_t** str,
        app::NumberStyles__Enum options,
        app::FormatProvider_Number_NumberBuffer* number,
        app::StringBuilder* sb,
        app::NumberFormatInfo* numfmt,
        bool parse_decimal
    )
    IL2CPP_REGISTER_METHOD(0x030F5CF0, bool, TrailingZeros, app::ReadOnlySpan_1_Char_ s, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x030F5DB0,
        bool,
        TryStringToNumber,
        app::ReadOnlySpan_1_Char_ str,
        app::NumberStyles__Enum options,
        app::FormatProvider_Number_NumberBuffer* number,
        app::StringBuilder* sb,
        app::NumberFormatInfo* numfmt,
        bool parse_decimal
    )
    IL2CPP_REGISTER_METHOD(0x030F6050, void, Int32ToDecChars, char16_t* buffer, int32_t* index, uint32_t value, int32_t digits)
    IL2CPP_REGISTER_METHOD(0x030F60B0, char16_t, ParseFormatSpecifier, app::String* format, int32_t* digits)
    IL2CPP_REGISTER_METHOD(
        0x030F6170,
        app::String*,
        NumberToString,
        app::FormatProvider_Number_NumberBuffer number,
        char16_t format,
        int32_t n_max_digits,
        app::NumberFormatInfo* info,
        bool is_decimal
    )
    IL2CPP_REGISTER_METHOD(
        0x030F68A0,
        void,
        FormatCurrency,
        app::StringBuilder* sb,
        app::FormatProvider_Number_NumberBuffer number,
        int32_t n_min_digits,
        int32_t n_max_digits,
        app::NumberFormatInfo* info
    )
    IL2CPP_REGISTER_METHOD(0x030F6BA0, int32_t, wcslen, char16_t* s)
    IL2CPP_REGISTER_METHOD(
        0x030F6BC0,
        void,
        FormatFixed,
        app::StringBuilder* sb,
        app::FormatProvider_Number_NumberBuffer number,
        int32_t n_min_digits,
        int32_t n_max_digits,
        app::NumberFormatInfo* info,
        app::Int32__Array* group_digits,
        app::String* s_decimal,
        app::String* s_group
    )
    IL2CPP_REGISTER_METHOD(
        0x030F7070,
        void,
        FormatNumber,
        app::StringBuilder* sb,
        app::FormatProvider_Number_NumberBuffer number,
        int32_t n_min_digits,
        int32_t n_max_digits,
        app::NumberFormatInfo* info
    )
    IL2CPP_REGISTER_METHOD(
        0x030F7310,
        void,
        FormatScientific,
        app::StringBuilder* sb,
        app::FormatProvider_Number_NumberBuffer number,
        int32_t n_min_digits,
        int32_t n_max_digits,
        app::NumberFormatInfo* info,
        char16_t exp_char
    )
    IL2CPP_REGISTER_METHOD(
        0x030F74C0,
        void,
        FormatExponent,
        app::StringBuilder* sb,
        app::NumberFormatInfo* info,
        int32_t value,
        char16_t exp_char,
        int32_t min_digits,
        bool positive_sign
    )
    IL2CPP_REGISTER_METHOD(
        0x030F77A0,
        void,
        FormatGeneral,
        app::StringBuilder* sb,
        app::FormatProvider_Number_NumberBuffer number,
        int32_t n_min_digits,
        int32_t n_max_digits,
        app::NumberFormatInfo* info,
        char16_t exp_char,
        bool b_suppress_scientific
    )
    IL2CPP_REGISTER_METHOD(
        0x030F7D60,
        void,
        FormatPercent,
        app::StringBuilder* sb,
        app::FormatProvider_Number_NumberBuffer number,
        int32_t n_min_digits,
        int32_t n_max_digits,
        app::NumberFormatInfo* info
    )
    IL2CPP_REGISTER_METHOD(0x030F8060, void, RoundNumber, app::FormatProvider_Number_NumberBuffer* number, int32_t pos)
    IL2CPP_REGISTER_METHOD(0x030F8140, int32_t, FindSection, app::String* format, int32_t section)
    IL2CPP_REGISTER_METHOD(
        0x030F81E0,
        app::String*,
        NumberToStringFormat,
        app::FormatProvider_Number_NumberBuffer number,
        app::String* format,
        app::NumberFormatInfo* info
    )
    IL2CPP_REGISTER_METHOD(0x030F9120, void, cctor, )
} // namespace app::classes::System::Globalization::FormatProvider_Number
