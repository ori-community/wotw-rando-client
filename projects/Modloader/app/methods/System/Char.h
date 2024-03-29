#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnicodeCategory__Enum.h>
#include <Modloader/app/structs/Char__Boxed.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeCode__Enum.h>

namespace app::classes::System::Char {
    IL2CPP_REGISTER_METHOD(0x022A0120, bool, IsLatin1, (char16_t ch))
    IL2CPP_REGISTER_METHOD(0x022A0130, bool, IsAscii, (char16_t ch))
    IL2CPP_REGISTER_METHOD(0x022A0140, app::UnicodeCategory__Enum, GetLatin1UnicodeCategory, (char16_t ch))
    IL2CPP_REGISTER_METHOD(0x001E29D0, int32_t, GetHashCode, (app::Char__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E29E0, bool, Equals_1, (app::Char__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x001303C0, bool, Equals_2, (app::Char__Boxed * this_ptr, char16_t obj))
    IL2CPP_REGISTER_METHOD(0x001E29F0, int32_t, CompareTo_1, (app::Char__Boxed * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x001E2A00, int32_t, CompareTo_2, (app::Char__Boxed * this_ptr, char16_t value))
    IL2CPP_REGISTER_METHOD(0x00123DF0, app::String*, ToString_1, (app::Char__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E2A10, app::String*, ToString_2, (app::Char__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x022A0550, app::String*, ToString_3, (char16_t c))
    IL2CPP_REGISTER_METHOD(0x022A0570, char16_t, Parse, (app::String * s))
    IL2CPP_REGISTER_METHOD(0x022A0680, bool, TryParse, (app::String * s, char16_t* result))
    IL2CPP_REGISTER_METHOD(0x022A06B0, bool, IsDigit, (char16_t c))
    IL2CPP_REGISTER_METHOD(0x022A07A0, bool, CheckLetter, (app::UnicodeCategory__Enum uc))
    IL2CPP_REGISTER_METHOD(0x022A07B0, bool, IsLetter, (char16_t c))
    IL2CPP_REGISTER_METHOD(0x022A0910, bool, IsWhiteSpaceLatin1, (char16_t c))
    IL2CPP_REGISTER_METHOD(0x022A0940, bool, IsWhiteSpace_1, (char16_t c))
    IL2CPP_REGISTER_METHOD(0x022A0AF0, bool, IsUpper, (char16_t c))
    IL2CPP_REGISTER_METHOD(0x022A0C30, bool, IsLower_1, (char16_t c))
    IL2CPP_REGISTER_METHOD(0x022A0D70, bool, CheckPunctuation, (app::UnicodeCategory__Enum uc))
    IL2CPP_REGISTER_METHOD(0x022A0D80, bool, IsPunctuation, (char16_t c))
    IL2CPP_REGISTER_METHOD(0x022A0EB0, bool, CheckLetterOrDigit, (app::UnicodeCategory__Enum uc))
    IL2CPP_REGISTER_METHOD(0x022A0EC0, bool, IsLetterOrDigit_1, (char16_t c))
    IL2CPP_REGISTER_METHOD(0x022A0FF0, char16_t, ToUpper_1, (char16_t c, app::CultureInfo* culture))
    IL2CPP_REGISTER_METHOD(0x022A10E0, char16_t, ToUpper_2, (char16_t c))
    IL2CPP_REGISTER_METHOD(0x022A11D0, char16_t, ToUpperInvariant, (char16_t c))
    IL2CPP_REGISTER_METHOD(0x022A12A0, char16_t, ToLower_1, (char16_t c, app::CultureInfo* culture))
    IL2CPP_REGISTER_METHOD(0x022A1390, char16_t, ToLower_2, (char16_t c))
    IL2CPP_REGISTER_METHOD(0x022A1480, char16_t, ToLowerInvariant, (char16_t c))
    IL2CPP_REGISTER_METHOD(0x001E2A20, app::TypeCode__Enum, GetTypeCode, (app::Char__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E2A30, bool, IConvertible_ToBoolean, (app::Char__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x00113CC0, char16_t, IConvertible_ToChar, (app::Char__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x001E2A40, int8_t, IConvertible_ToSByte, (app::Char__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x001E2B80, uint8_t, IConvertible_ToByte, (app::Char__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x001E2CC0, int16_t, IConvertible_ToInt16, (app::Char__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x001E2E00, uint16_t, IConvertible_ToUInt16, (app::Char__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x001E2EA0, int32_t, IConvertible_ToInt32, (app::Char__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x001E2F40, uint32_t, IConvertible_ToUInt32, (app::Char__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x001E2FE0, int64_t, IConvertible_ToInt64, (app::Char__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x001E3080, uint64_t, IConvertible_ToUInt64, (app::Char__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x001E3120, float, IConvertible_ToSingle, (app::Char__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x001E3130, double, IConvertible_ToDouble, (app::Char__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x001E3140, app::Decimal, IConvertible_ToDecimal, (app::Char__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x001E3150, app::DateTime, IConvertible_ToDateTime, (app::Char__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x001E3160, app::Object*, IConvertible_ToType, (app::Char__Boxed * this_ptr, app::Type* type, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x022A1960, bool, IsControl, (app::String * s, int32_t index))
    IL2CPP_REGISTER_METHOD(0x022A1AF0, bool, IsLetterOrDigit_2, (app::String * s, int32_t index))
    IL2CPP_REGISTER_METHOD(0x022A1CC0, bool, IsLower_2, (app::String * s, int32_t index))
    IL2CPP_REGISTER_METHOD(0x022A1EA0, bool, CheckNumber, (app::UnicodeCategory__Enum uc))
    IL2CPP_REGISTER_METHOD(0x022A1EB0, bool, IsNumber_1, (char16_t c))
    IL2CPP_REGISTER_METHOD(0x022A2010, bool, IsNumber_2, (app::String * s, int32_t index))
    IL2CPP_REGISTER_METHOD(0x022A2220, bool, CheckSeparator, (app::UnicodeCategory__Enum uc))
    IL2CPP_REGISTER_METHOD(0x022A2230, bool, IsSeparatorLatin1, (char16_t c))
    IL2CPP_REGISTER_METHOD(0x022A2250, bool, IsSeparator, (char16_t c))
    IL2CPP_REGISTER_METHOD(0x022A2380, bool, IsSurrogate_1, (char16_t c))
    IL2CPP_REGISTER_METHOD(0x022A23A0, bool, IsSurrogate_2, (app::String * s, int32_t index))
    IL2CPP_REGISTER_METHOD(0x022A24E0, bool, CheckSymbol, (app::UnicodeCategory__Enum uc))
    IL2CPP_REGISTER_METHOD(0x022A24F0, bool, IsSymbol, (char16_t c))
    IL2CPP_REGISTER_METHOD(0x022A2620, bool, IsWhiteSpace_2, (app::String * s, int32_t index))
    IL2CPP_REGISTER_METHOD(0x022A2870, app::UnicodeCategory__Enum, GetUnicodeCategory_1, (char16_t c))
    IL2CPP_REGISTER_METHOD(0x022A2960, app::UnicodeCategory__Enum, GetUnicodeCategory_2, (app::String * s, int32_t index))
    IL2CPP_REGISTER_METHOD(0x022A2B00, bool, IsHighSurrogate_1, (char16_t c))
    IL2CPP_REGISTER_METHOD(0x022A2B20, bool, IsHighSurrogate_2, (app::String * s, int32_t index))
    IL2CPP_REGISTER_METHOD(0x022A2C70, bool, IsLowSurrogate, (char16_t c))
    IL2CPP_REGISTER_METHOD(0x022A2C90, bool, IsSurrogatePair_1, (app::String * s, int32_t index))
    IL2CPP_REGISTER_METHOD(0x022A2E10, bool, IsSurrogatePair_2, (char16_t high_surrogate, char16_t low_surrogate))
    IL2CPP_REGISTER_METHOD(0x022A2E40, app::String*, ConvertFromUtf32, (int32_t utf32))
    IL2CPP_REGISTER_METHOD(0x022A3000, int32_t, ConvertToUtf32, (char16_t high_surrogate, char16_t low_surrogate))
    IL2CPP_REGISTER_METHOD(0x022A3190, void, cctor, ())
} // namespace app::classes::System::Char
