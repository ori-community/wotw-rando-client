#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/NumberFormatInfo.h>
#include <Modloader/app/structs/NumberFormatter.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/Thread.h>
#include <Modloader/app/structs/char16_t.h>
#include <Modloader/app/structs/int32_t.h>
#include <Modloader/app/structs/int64_t.h>
#include <Modloader/app/structs/uint64_t.h>

namespace app::classes::System::NumberFormatter {
    IL2CPP_REGISTER_METHOD(
        0x02273730,
        void,
        GetFormatterTables,
        app::uint64_t** mantissa_bits_table,
        app::int32_t** tens_exponent_table,
        app::char16_t** digit_lower_table,
        app::char16_t** digit_upper_table,
        app::int64_t** ten_powers_list,
        app::int32_t** dec_hex_digits
    )
    IL2CPP_REGISTER_METHOD(0x02273780, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x02273840, int64_t, GetTenPowerOf, int32_t i)
    IL2CPP_REGISTER_METHOD(0x022738F0, void, InitDecHexDigits_1, app::NumberFormatter* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x022739F0, void, InitDecHexDigits_2, app::NumberFormatter* this_ptr, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x02273B70, void, InitDecHexDigits_3, app::NumberFormatter* this_ptr, uint32_t hi, uint64_t lo)
    IL2CPP_REGISTER_METHOD(0x02273DB0, uint32_t, FastToDecHex, int32_t val)
    IL2CPP_REGISTER_METHOD(0x02273EC0, uint32_t, ToDecHex, int32_t val)
    IL2CPP_REGISTER_METHOD(0x02273FC0, int32_t, FastDecHexLen, int32_t val)
    IL2CPP_REGISTER_METHOD(0x02273FF0, int32_t, DecHexLen_1, uint32_t val)
    IL2CPP_REGISTER_METHOD(0x02274110, int32_t, DecHexLen_2, app::NumberFormatter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02274290, int32_t, ScaleOrder, int64_t hi)
    IL2CPP_REGISTER_METHOD(0x02274360, int32_t, InitialFloatingPrecision, app::NumberFormatter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02274480, int32_t, ParsePrecision, app::String* format)
    IL2CPP_REGISTER_METHOD(0x02274500, void, ctor, app::NumberFormatter* this_ptr, app::Thread* current)
    IL2CPP_REGISTER_METHOD(0x02274600, void, Init_1, app::NumberFormatter* this_ptr, app::String* format)
    IL2CPP_REGISTER_METHOD(0x02274780, void, InitHex, app::NumberFormatter* this_ptr, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x022747D0, void, Init_2, app::NumberFormatter* this_ptr, app::String* format, int32_t value, int32_t def_precision)
    IL2CPP_REGISTER_METHOD(0x02274880, void, Init_3, app::NumberFormatter* this_ptr, app::String* format, uint32_t value, int32_t def_precision)
    IL2CPP_REGISTER_METHOD(0x02274920, void, Init_4, app::NumberFormatter* this_ptr, app::String* format, int64_t value)
    IL2CPP_REGISTER_METHOD(0x022749C0, void, Init_5, app::NumberFormatter* this_ptr, app::String* format, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x02274A50, void, Init_6, app::NumberFormatter* this_ptr, app::String* format, double value, int32_t def_precision)
    IL2CPP_REGISTER_METHOD(0x02274F00, void, Init_7, app::NumberFormatter* this_ptr, app::String* format, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x022750F0, void, ResetCharBuf, app::NumberFormatter* this_ptr, int32_t size)
    IL2CPP_REGISTER_METHOD(0x022751A0, void, Resize, app::NumberFormatter* this_ptr, int32_t len)
    IL2CPP_REGISTER_METHOD(0x02275360, void, Append_1, app::NumberFormatter* this_ptr, char16_t c)
    IL2CPP_REGISTER_METHOD(0x022753E0, void, Append_2, app::NumberFormatter* this_ptr, char16_t c, int32_t cnt)
    IL2CPP_REGISTER_METHOD(0x02275480, void, Append_3, app::NumberFormatter* this_ptr, app::String* s)
    IL2CPP_REGISTER_METHOD(0x02275550, app::NumberFormatInfo*, GetNumberFormatInstance, app::NumberFormatter* this_ptr, app::IFormatProvider* fp)
    IL2CPP_REGISTER_METHOD(0x02275570, void, set_CurrentCulture, app::NumberFormatter* this_ptr, app::CultureInfo* value)
    IL2CPP_REGISTER_METHOD(0x022755C0, int32_t, get_IntegerDigits, app::NumberFormatter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022755D0, int32_t, get_DecimalDigits, app::NumberFormatter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022755E0, bool, get_IsFloatingSource, app::NumberFormatter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AEDE10, bool, get_IsZero, app::NumberFormatter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02275600, bool, get_IsZeroInteger, app::NumberFormatter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02275620, void, RoundPos, app::NumberFormatter* this_ptr, int32_t pos)
    IL2CPP_REGISTER_METHOD(0x02275630, bool, RoundDecimal, app::NumberFormatter* this_ptr, int32_t decimals)
    IL2CPP_REGISTER_METHOD(0x02275650, bool, RoundBits, app::NumberFormatter* this_ptr, int32_t shift)
    IL2CPP_REGISTER_METHOD(0x02275970, void, RemoveTrailingZeros, app::NumberFormatter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022759A0, void, AddOneToDecHex_1, app::NumberFormatter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02275B30, uint32_t, AddOneToDecHex_2, uint32_t val)
    IL2CPP_REGISTER_METHOD(0x02275BB0, int32_t, CountTrailingZeros_1, app::NumberFormatter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02275E10, int32_t, CountTrailingZeros_2, uint32_t val)
    IL2CPP_REGISTER_METHOD(0x02275E60, app::NumberFormatter*, GetInstance, app::IFormatProvider* fp)
    IL2CPP_REGISTER_METHOD(0x022762B0, void, Release, app::NumberFormatter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022763F0, app::String*, NumberToString_1, app::String* format, uint32_t value, app::IFormatProvider* fp)
    IL2CPP_REGISTER_METHOD(0x02276550, app::String*, NumberToString_2, app::String* format, int32_t value, app::IFormatProvider* fp)
    IL2CPP_REGISTER_METHOD(0x022766C0, app::String*, NumberToString_3, app::String* format, uint64_t value, app::IFormatProvider* fp)
    IL2CPP_REGISTER_METHOD(0x02276820, app::String*, NumberToString_4, app::String* format, int64_t value, app::IFormatProvider* fp)
    IL2CPP_REGISTER_METHOD(0x02276990, app::String*, NumberToString_5, app::String* format, float value, app::IFormatProvider* fp)
    IL2CPP_REGISTER_METHOD(0x02276B80, app::String*, NumberToString_6, app::String* format, double value, app::IFormatProvider* fp)
    IL2CPP_REGISTER_METHOD(0x02276E00, app::String*, NumberToString_7, app::String* format, app::Decimal value, app::IFormatProvider* fp)
    IL2CPP_REGISTER_METHOD(0x02276F20, app::String*, IntegerToString, app::NumberFormatter* this_ptr, app::String* format, app::IFormatProvider* fp)
    IL2CPP_REGISTER_METHOD(0x02277170, app::String*, NumberToString_8, app::NumberFormatter* this_ptr, app::String* format, app::NumberFormatInfo* nfi)
    IL2CPP_REGISTER_METHOD(0x02277360, app::String*, FormatCurrency, app::NumberFormatter* this_ptr, int32_t precision, app::NumberFormatInfo* nfi)
    IL2CPP_REGISTER_METHOD(0x022776F0, app::String*, FormatDecimal, app::NumberFormatter* this_ptr, int32_t precision, app::NumberFormatInfo* nfi)
    IL2CPP_REGISTER_METHOD(0x022777F0, app::String*, FormatHexadecimal, app::NumberFormatter* this_ptr, int32_t precision)
    IL2CPP_REGISTER_METHOD(0x02277990, app::String*, FormatFixedPoint, app::NumberFormatter* this_ptr, int32_t precision, app::NumberFormatInfo* nfi)
    IL2CPP_REGISTER_METHOD(0x02277B40, app::String*, FormatRoundtrip_1, app::NumberFormatter* this_ptr, double origval, app::NumberFormatInfo* nfi)
    IL2CPP_REGISTER_METHOD(0x02277C70, app::String*, FormatRoundtrip_2, app::NumberFormatter* this_ptr, float origval, app::NumberFormatInfo* nfi)
    IL2CPP_REGISTER_METHOD(0x02277D20, app::String*, FormatGeneral, app::NumberFormatter* this_ptr, int32_t precision, app::NumberFormatInfo* nfi)
    IL2CPP_REGISTER_METHOD(0x02277E90, app::String*, FormatNumber, app::NumberFormatter* this_ptr, int32_t precision, app::NumberFormatInfo* nfi)
    IL2CPP_REGISTER_METHOD(0x02278030, app::String*, FormatPercent, app::NumberFormatter* this_ptr, int32_t precision, app::NumberFormatInfo* nfi)
    IL2CPP_REGISTER_METHOD(0x022781C0, app::String*, FormatExponential_1, app::NumberFormatter* this_ptr, int32_t precision, app::NumberFormatInfo* nfi)
    IL2CPP_REGISTER_METHOD(
        0x02278220,
        app::String*,
        FormatExponential_2,
        app::NumberFormatter* this_ptr,
        int32_t precision,
        app::NumberFormatInfo* nfi,
        int32_t exp_digits
    )
    IL2CPP_REGISTER_METHOD(0x022783C0, app::String*, FormatCustom, app::NumberFormatter* this_ptr, app::String* format, app::NumberFormatInfo* nfi)
    IL2CPP_REGISTER_METHOD(0x02278D90, void, ZeroTrimEnd, app::StringBuilder* sb, bool can_empty)
    IL2CPP_REGISTER_METHOD(0x02278E30, bool, IsZeroOnly, app::StringBuilder* sb)
    IL2CPP_REGISTER_METHOD(0x02278F40, void, AppendNonNegativeNumber, app::StringBuilder* sb, int32_t v)
    IL2CPP_REGISTER_METHOD(0x022791E0, void, AppendIntegerString_1, app::NumberFormatter* this_ptr, int32_t min_length, app::StringBuilder* sb)
    IL2CPP_REGISTER_METHOD(0x02279270, void, AppendIntegerString_2, app::NumberFormatter* this_ptr, int32_t min_length)
    IL2CPP_REGISTER_METHOD(0x02279340, void, AppendDecimalString_1, app::NumberFormatter* this_ptr, int32_t precision, app::StringBuilder* sb)
    IL2CPP_REGISTER_METHOD(0x02279370, void, AppendDecimalString_2, app::NumberFormatter* this_ptr, int32_t precision)
    IL2CPP_REGISTER_METHOD(
        0x02279390,
        void,
        AppendIntegerStringWithGroupSeparator,
        app::NumberFormatter* this_ptr,
        app::Int32__Array* groups,
        app::String* group_separator
    )
    IL2CPP_REGISTER_METHOD(0x02279600, void, AppendExponent, app::NumberFormatter* this_ptr, app::NumberFormatInfo* nfi, int32_t exponent, int32_t min_digits)
    IL2CPP_REGISTER_METHOD(0x02279830, void, AppendOneDigit, app::NumberFormatter* this_ptr, int32_t start)
    IL2CPP_REGISTER_METHOD(0x022798F0, void, AppendDigits_1, app::NumberFormatter* this_ptr, int32_t start, int32_t end)
    IL2CPP_REGISTER_METHOD(0x02279C40, void, AppendDigits_2, app::NumberFormatter* this_ptr, int32_t start, int32_t end, app::StringBuilder* sb)
    IL2CPP_REGISTER_METHOD(0x02279E70, void, Multiply10, app::NumberFormatter* this_ptr, int32_t count)
    IL2CPP_REGISTER_METHOD(0x02279E80, void, Divide10, app::NumberFormatter* this_ptr, int32_t count)
    IL2CPP_REGISTER_METHOD(0x02279E90, app::NumberFormatter*, GetClone, app::NumberFormatter* this_ptr)
} // namespace app::classes::System::NumberFormatter
