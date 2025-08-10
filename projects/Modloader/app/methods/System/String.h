#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/CompareOptions__Enum.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerable_1_System_String_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Char_.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/NormalizationForm__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/ParamsArray.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringComparison__Enum.h>
#include <Modloader/app/structs/StringSplitOptions__Enum.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeCode__Enum.h>

namespace app::classes::System::String {
    IL2CPP_REGISTER_METHOD(0x01E26B60, app::String*, Join_1, app::String* separator, app::String__Array* value)
    IL2CPP_REGISTER_METHOD(0x01E26C40, app::String*, Join_2, app::String* separator, app::IEnumerable_1_System_String_* values)
    IL2CPP_REGISTER_METHOD(0x01E26F60, app::String*, Join_3, app::String* separator, app::String__Array* value, int32_t start_index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01E27360, int32_t, CompareOrdinalIgnoreCaseHelper, app::String* str_a, app::String* str_b)
    IL2CPP_REGISTER_METHOD(0x01E274A0, bool, EqualsHelper, app::String* str_a, app::String* str_b)
    IL2CPP_REGISTER_METHOD(0x01E27530, int32_t, CompareOrdinalHelper, app::String* str_a, app::String* str_b)
    IL2CPP_REGISTER_METHOD(0x01E276F0, bool, Equals_1, app::String* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01E27800, bool, Equals_2, app::String* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01E278F0, bool, Equals_3, app::String* this_ptr, app::String* value, app::StringComparison__Enum comparison_type)
    IL2CPP_REGISTER_METHOD(0x01E27CD0, bool, Equals_4, app::String* a, app::String* b)
    IL2CPP_REGISTER_METHOD(0x01E27D00, bool, Equals_5, app::String* a, app::String* b, app::StringComparison__Enum comparison_type)
    IL2CPP_REGISTER_METHOD(0x01E27CD0, bool, op_Equality, app::String* a, app::String* b)
    IL2CPP_REGISTER_METHOD(0x01E280E0, bool, op_Inequality, app::String* a, app::String* b)
    IL2CPP_REGISTER_METHOD(0x01E28120, char16_t, get_Chars, app::String* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x01E281E0,
        void,
        CopyTo,
        app::String* this_ptr,
        int32_t source_index,
        app::Char__Array* destination,
        int32_t destination_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01E28430, app::Char__Array*, ToCharArray, app::String* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E28500, bool, IsNullOrEmpty, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01E28510, bool, IsNullOrWhiteSpace, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01E285F0, int32_t, GetHashCode, app::String* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E285F0, int32_t, GetLegacyNonRandomizedHashCode, app::String* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E28640, app::String__Array*, Split_1, app::String* this_ptr, app::Char__Array* separator)
    IL2CPP_REGISTER_METHOD(0x01E28660, app::String__Array*, Split_2, app::String* this_ptr, app::Char__Array* separator, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01E28680, app::String__Array*, Split_3, app::String* this_ptr, app::Char__Array* separator, app::StringSplitOptions__Enum options)
    IL2CPP_REGISTER_METHOD(
        0x01E286A0,
        app::String__Array*,
        SplitInternal,
        app::String* this_ptr,
        app::Char__Array* separator,
        int32_t count,
        app::StringSplitOptions__Enum options
    )
    IL2CPP_REGISTER_METHOD(
        0x01E288F0,
        app::String__Array*,
        Split_4,
        app::String* this_ptr,
        app::String__Array* separator,
        app::StringSplitOptions__Enum options
    )
    IL2CPP_REGISTER_METHOD(
        0x01E28910,
        app::String__Array*,
        Split_5,
        app::String* this_ptr,
        app::String__Array* separator,
        int32_t count,
        app::StringSplitOptions__Enum options
    )
    IL2CPP_REGISTER_METHOD(
        0x01E28BB0,
        app::String__Array*,
        InternalSplitKeepEmptyEntries,
        app::String* this_ptr,
        app::Int32__Array* sep_list,
        app::Int32__Array* length_list,
        int32_t num_replaces,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x01E28EB0,
        app::String__Array*,
        InternalSplitOmitEmptyEntries,
        app::String* this_ptr,
        app::Int32__Array* sep_list,
        app::Int32__Array* length_list,
        int32_t num_replaces,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01E29260, int32_t, MakeSeparatorList_1, app::String* this_ptr, app::Char__Array* separator, app::Int32__Array** sep_list)
    IL2CPP_REGISTER_METHOD(
        0x01E29460,
        int32_t,
        MakeSeparatorList_2,
        app::String* this_ptr,
        app::String__Array* separators,
        app::Int32__Array** sep_list,
        app::Int32__Array** length_list
    )
    IL2CPP_REGISTER_METHOD(0x01E29620, app::String*, Substring_1, app::String* this_ptr, int32_t start_index)
    IL2CPP_REGISTER_METHOD(0x01E29630, app::String*, Substring_2, app::String* this_ptr, int32_t start_index, int32_t length)
    IL2CPP_REGISTER_METHOD(0x01E29840, app::String*, InternalSubString, app::String* this_ptr, int32_t start_index, int32_t length)
    IL2CPP_REGISTER_METHOD(0x01E298B0, app::String*, Trim_1, app::String* this_ptr, app::Char__Array* trim_chars)
    IL2CPP_REGISTER_METHOD(0x01E298E0, app::String*, TrimStart, app::String* this_ptr, app::Char__Array* trim_chars)
    IL2CPP_REGISTER_METHOD(0x01E299A0, app::String*, TrimEnd, app::String* this_ptr, app::Char__Array* trim_chars)
    IL2CPP_REGISTER_METHOD(0x01E29A50, void, ctor_1, app::String* this_ptr, char16_t* value)
    IL2CPP_REGISTER_METHOD(0x01E29A50, void, ctor_2, app::String* this_ptr, char16_t* value, int32_t start_index, int32_t length)
    IL2CPP_REGISTER_METHOD(0x01E29A50, void, ctor_3, app::String* this_ptr, int8_t* value)
    IL2CPP_REGISTER_METHOD(0x01E29A50, void, ctor_4, app::String* this_ptr, int8_t* value, int32_t start_index, int32_t length)
    IL2CPP_REGISTER_METHOD(0x01E29A60, void, ctor_5, app::String* this_ptr, int8_t* value, int32_t start_index, int32_t length, app::Encoding* enc)
    IL2CPP_REGISTER_METHOD(0x01E29A80, app::String*, CreateStringFromEncoding, uint8_t* bytes, int32_t byte_length, app::Encoding* encoding)
    IL2CPP_REGISTER_METHOD(0x01E29BB0, app::String*, Normalize, app::String* this_ptr, app::NormalizationForm__Enum normalization_form)
    IL2CPP_REGISTER_METHOD(0x01E29E00, app::String*, FastAllocateString, int32_t length)
    IL2CPP_REGISTER_METHOD(0x01E29E10, void, FillStringChecked, app::String* dest, int32_t dest_pos, app::String* src)
    IL2CPP_REGISTER_METHOD(0x01E29A50, void, ctor_6, app::String* this_ptr, app::Char__Array* value, int32_t start_index, int32_t length)
    IL2CPP_REGISTER_METHOD(0x01E29A50, void, ctor_7, app::String* this_ptr, app::Char__Array* value)
    IL2CPP_REGISTER_METHOD(0x01E29F00, void, wstrcpy, char16_t* dmem, char16_t* smem, int32_t char_count)
    IL2CPP_REGISTER_METHOD(0x01E29F10, app::String*, CtorCharArray, app::String* this_ptr, app::Char__Array* value)
    IL2CPP_REGISTER_METHOD(
        0x01E2A000,
        app::String*,
        CtorCharArrayStartLength,
        app::String* this_ptr,
        app::Char__Array* value,
        int32_t start_index,
        int32_t length
    )
    IL2CPP_REGISTER_METHOD(0x01E2A210, int32_t, wcslen, char16_t* ptr)
    IL2CPP_REGISTER_METHOD(0x01E2A270, app::String*, CtorCharPtr, app::String* this_ptr, char16_t* ptr)
    IL2CPP_REGISTER_METHOD(0x01E2A420, app::String*, CtorCharPtrStartLength, app::String* this_ptr, char16_t* ptr, int32_t start_index, int32_t length)
    IL2CPP_REGISTER_METHOD(0x01E29A50, void, ctor_8, app::String* this_ptr, char16_t c, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01E2A640, int32_t, Compare_1, app::String* str_a, app::String* str_b)
    IL2CPP_REGISTER_METHOD(0x01E2A750, int32_t, Compare_2, app::String* str_a, app::String* str_b, bool ignore_case)
    IL2CPP_REGISTER_METHOD(0x01E2A8E0, int32_t, Compare_3, app::String* str_a, app::String* str_b, app::StringComparison__Enum comparison_type)
    IL2CPP_REGISTER_METHOD(0x01E2ACB0, int32_t, Compare_4, app::String* str_a, app::String* str_b, bool ignore_case, app::CultureInfo* culture)
    IL2CPP_REGISTER_METHOD(0x01E2ADE0, int32_t, Compare_5, app::String* str_a, int32_t index_a, app::String* str_b, int32_t index_b, int32_t length)
    IL2CPP_REGISTER_METHOD(
        0x01E2AF50,
        int32_t,
        Compare_6,
        app::String* str_a,
        int32_t index_a,
        app::String* str_b,
        int32_t index_b,
        int32_t length,
        bool ignore_case,
        app::CultureInfo* culture
    )
    IL2CPP_REGISTER_METHOD(
        0x01E2B0F0,
        int32_t,
        Compare_7,
        app::String* str_a,
        int32_t index_a,
        app::String* str_b,
        int32_t index_b,
        int32_t length,
        app::CultureInfo* culture,
        app::CompareOptions__Enum options
    )
    IL2CPP_REGISTER_METHOD(
        0x01E2B250,
        int32_t,
        Compare_8,
        app::String* str_a,
        int32_t index_a,
        app::String* str_b,
        int32_t index_b,
        int32_t length,
        app::StringComparison__Enum comparison_type
    )
    IL2CPP_REGISTER_METHOD(0x01E2B810, int32_t, CompareTo_1, app::String* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01E2B930, int32_t, CompareTo_2, app::String* this_ptr, app::String* str_b)
    IL2CPP_REGISTER_METHOD(0x01E2BA50, int32_t, CompareOrdinal_1, app::String* str_a, app::String* str_b)
    IL2CPP_REGISTER_METHOD(0x01E2BA90, int32_t, CompareOrdinal_2, app::String* str_a, int32_t index_a, app::String* str_b, int32_t index_b, int32_t length)
    IL2CPP_REGISTER_METHOD(0x01E2BAD0, bool, Contains, app::String* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01E2BB00, bool, EndsWith_1, app::String* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01E2BB10, bool, EndsWith_2, app::String* this_ptr, app::String* value, app::StringComparison__Enum comparison_type)
    IL2CPP_REGISTER_METHOD(0x01E2BED0, bool, EndsWith_3, app::String* this_ptr, char16_t value)
    IL2CPP_REGISTER_METHOD(0x01E2BF00, int32_t, IndexOf_1, app::String* this_ptr, char16_t value)
    IL2CPP_REGISTER_METHOD(0x01E2BF20, int32_t, IndexOf_2, app::String* this_ptr, char16_t value, int32_t start_index)
    IL2CPP_REGISTER_METHOD(0x01E2BF40, int32_t, IndexOfAny_1, app::String* this_ptr, app::Char__Array* any_of)
    IL2CPP_REGISTER_METHOD(0x01E2BF60, int32_t, IndexOfAny_2, app::String* this_ptr, app::Char__Array* any_of, int32_t start_index)
    IL2CPP_REGISTER_METHOD(0x01E2BF80, int32_t, IndexOf_3, app::String* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01E2BFA0, int32_t, IndexOf_4, app::String* this_ptr, app::String* value, int32_t start_index)
    IL2CPP_REGISTER_METHOD(0x01E2BFC0, int32_t, IndexOf_5, app::String* this_ptr, app::String* value, app::StringComparison__Enum comparison_type)
    IL2CPP_REGISTER_METHOD(
        0x01E2BFF0,
        int32_t,
        IndexOf_6,
        app::String* this_ptr,
        app::String* value,
        int32_t start_index,
        app::StringComparison__Enum comparison_type
    )
    IL2CPP_REGISTER_METHOD(
        0x01E2C020,
        int32_t,
        IndexOf_7,
        app::String* this_ptr,
        app::String* value,
        int32_t start_index,
        int32_t count,
        app::StringComparison__Enum comparison_type
    )
    IL2CPP_REGISTER_METHOD(0x01E2C550, int32_t, LastIndexOf_1, app::String* this_ptr, char16_t value)
    IL2CPP_REGISTER_METHOD(0x01E2C570, int32_t, LastIndexOf_2, app::String* this_ptr, char16_t value, int32_t start_index)
    IL2CPP_REGISTER_METHOD(0x01E2C590, int32_t, LastIndexOfAny_1, app::String* this_ptr, app::Char__Array* any_of)
    IL2CPP_REGISTER_METHOD(0x01E2C5B0, int32_t, LastIndexOfAny_2, app::String* this_ptr, app::Char__Array* any_of, int32_t start_index)
    IL2CPP_REGISTER_METHOD(0x01E2C5D0, int32_t, LastIndexOf_3, app::String* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01E2C600, int32_t, LastIndexOf_4, app::String* this_ptr, app::String* value, app::StringComparison__Enum comparison_type)
    IL2CPP_REGISTER_METHOD(
        0x01E2C630,
        int32_t,
        LastIndexOf_5,
        app::String* this_ptr,
        app::String* value,
        int32_t start_index,
        int32_t count,
        app::StringComparison__Enum comparison_type
    )
    IL2CPP_REGISTER_METHOD(0x01E2CBA0, app::String*, PadLeft, app::String* this_ptr, int32_t total_width, char16_t padding_char)
    IL2CPP_REGISTER_METHOD(0x01E2CBC0, app::String*, PadRight_1, app::String* this_ptr, int32_t total_width)
    IL2CPP_REGISTER_METHOD(0x01E2CBE0, app::String*, PadRight_2, app::String* this_ptr, int32_t total_width, char16_t padding_char)
    IL2CPP_REGISTER_METHOD(0x01E2CC00, bool, StartsWith_1, app::String* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01E2CCD0, bool, StartsWith_2, app::String* this_ptr, app::String* value, app::StringComparison__Enum comparison_type)
    IL2CPP_REGISTER_METHOD(0x01E2D090, app::String*, ToLower_1, app::String* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E2D150, app::String*, ToLower_2, app::String* this_ptr, app::CultureInfo* culture)
    IL2CPP_REGISTER_METHOD(0x01E2D240, app::String*, ToLowerInvariant, app::String* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E2D2F0, app::String*, ToUpper_1, app::String* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E2D3B0, app::String*, ToUpper_2, app::String* this_ptr, app::CultureInfo* culture)
    IL2CPP_REGISTER_METHOD(0x01E2D4A0, app::String*, ToUpperInvariant, app::String* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::String*, ToString_1, app::String* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::String*, ToString_2, app::String* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Object*, Clone, app::String* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsBOMWhitespace, char16_t c)
    IL2CPP_REGISTER_METHOD(0x01E2D550, app::String*, Trim_2, app::String* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E2D560, app::String*, TrimHelper_1, app::String* this_ptr, int32_t trim_type)
    IL2CPP_REGISTER_METHOD(0x01E2D6D0, app::String*, TrimHelper_2, app::String* this_ptr, app::Char__Array* trim_chars, int32_t trim_type)
    IL2CPP_REGISTER_METHOD(0x01E2D800, app::String*, CreateTrimmedString, app::String* this_ptr, int32_t start, int32_t end)
    IL2CPP_REGISTER_METHOD(0x01E2D8E0, app::String*, Insert, app::String* this_ptr, int32_t start_index, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01E2DA90, app::String*, Replace_1, app::String* this_ptr, char16_t old_char, char16_t new_char)
    IL2CPP_REGISTER_METHOD(0x01E2DBC0, app::String*, Replace_2, app::String* this_ptr, app::String* old_value, app::String* new_value)
    IL2CPP_REGISTER_METHOD(0x01E2DD50, app::String*, Remove_1, app::String* this_ptr, int32_t start_index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01E2DF40, app::String*, Remove_2, app::String* this_ptr, int32_t start_index)
    IL2CPP_REGISTER_METHOD(0x01E2E060, app::String*, Format_1, app::String* format, app::Object* arg0)
    IL2CPP_REGISTER_METHOD(0x01E2E0C0, app::String*, Format_2, app::String* format, app::Object* arg0, app::Object* arg1)
    IL2CPP_REGISTER_METHOD(0x01E2E120, app::String*, Format_3, app::String* format, app::Object* arg0, app::Object* arg1, app::Object* arg2)
    IL2CPP_REGISTER_METHOD(0x01E2E180, app::String*, Format_4, app::String* format, app::Object__Array* args)
    IL2CPP_REGISTER_METHOD(0x01E2E2F0, app::String*, Format_5, app::IFormatProvider* provider, app::String* format, app::Object* arg0)
    IL2CPP_REGISTER_METHOD(0x01E2E360, app::String*, Format_6, app::IFormatProvider* provider, app::String* format, app::Object* arg0, app::Object* arg1)
    IL2CPP_REGISTER_METHOD(
        0x01E2E3D0,
        app::String*,
        Format_7,
        app::IFormatProvider* provider,
        app::String* format,
        app::Object* arg0,
        app::Object* arg1,
        app::Object* arg2
    )
    IL2CPP_REGISTER_METHOD(0x01E2E450, app::String*, Format_8, app::IFormatProvider* provider, app::String* format, app::Object__Array* args)
    IL2CPP_REGISTER_METHOD(0x01E2E5D0, app::String*, FormatHelper, app::IFormatProvider* provider, app::String* format, app::ParamsArray args)
    IL2CPP_REGISTER_METHOD(0x01E2E730, app::String*, Copy, app::String* str)
    IL2CPP_REGISTER_METHOD(0x01E2E820, app::String*, Concat_1, app::Object* arg0)
    IL2CPP_REGISTER_METHOD(0x01E2E8C0, app::String*, Concat_2, app::Object* arg0, app::Object* arg1)
    IL2CPP_REGISTER_METHOD(0x01E2E9C0, app::String*, Concat_3, app::Object* arg0, app::Object* arg1, app::Object* arg2)
    IL2CPP_REGISTER_METHOD(0x01E2EB00, app::String*, Concat_4, app::Object__Array* args)
    IL2CPP_REGISTER_METHOD(0x01E2ED50, app::String*, Concat_5, app::String* str0, app::String* str1)
    IL2CPP_REGISTER_METHOD(0x01E2EE50, app::String*, Concat_6, app::String* str0, app::String* str1, app::String* str2)
    IL2CPP_REGISTER_METHOD(0x01E2EFA0, app::String*, Concat_7, app::String* str0, app::String* str1, app::String* str2, app::String* str3)
    IL2CPP_REGISTER_METHOD(0x01E2F140, app::String*, ConcatArray, app::String__Array* values, int32_t total_length)
    IL2CPP_REGISTER_METHOD(0x01E2F200, app::String*, Concat_8, app::String__Array* values)
    IL2CPP_REGISTER_METHOD(0x00E3D980, app::TypeCode__Enum, GetTypeCode, app::String* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E2F3C0, bool, IConvertible_ToBoolean, app::String* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x01E2F4F0, char16_t, IConvertible_ToChar, app::String* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x01E2F670, int8_t, IConvertible_ToSByte, app::String* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x01E2F740, uint8_t, IConvertible_ToByte, app::String* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x01E2F820, int16_t, IConvertible_ToInt16, app::String* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x01E2F900, uint16_t, IConvertible_ToUInt16, app::String* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x01E2F9E0, int32_t, IConvertible_ToInt32, app::String* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x01E2FAC0, uint32_t, IConvertible_ToUInt32, app::String* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x01E2FBA0, int64_t, IConvertible_ToInt64, app::String* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x01E2FC80, uint64_t, IConvertible_ToUInt64, app::String* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x01E2FD60, float, IConvertible_ToSingle, app::String* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x01E2FE40, double, IConvertible_ToDouble, app::String* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x01E2FEF0, app::Decimal, IConvertible_ToDecimal, app::String* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x01E2FFC0, app::DateTime, IConvertible_ToDateTime, app::String* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x01E30110, app::Object*, IConvertible_ToType, app::String* this_ptr, app::Type* type, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x01E301D0, app::IEnumerator_1_System_Char_*, IEnumerable_char__GetEnumerator, app::String* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E30320, app::IEnumerator*, IEnumerable_GetEnumerator, app::String* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Length, app::String* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01E30470,
        int32_t,
        CompareOrdinalUnchecked,
        app::String* str_a,
        int32_t index_a,
        int32_t len_a,
        app::String* str_b,
        int32_t index_b,
        int32_t len_b
    )
    IL2CPP_REGISTER_METHOD(0x01E30600, int32_t, IndexOf_8, app::String* this_ptr, char16_t value, int32_t start_index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01E307A0, int32_t, IndexOfUnchecked_1, app::String* this_ptr, char16_t value, int32_t start_index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01E308A0, int32_t, IndexOfUnchecked_2, app::String* this_ptr, app::String* value, int32_t start_index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01E309C0, int32_t, IndexOfAny_3, app::String* this_ptr, app::Char__Array* any_of, int32_t start_index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01E30BF0, int32_t, IndexOfAnyUnchecked, app::String* this_ptr, app::Char__Array* any_of, int32_t start_index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01E30D20, int32_t, LastIndexOf_6, app::String* this_ptr, char16_t value, int32_t start_index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01E30EB0, int32_t, LastIndexOfUnchecked, app::String* this_ptr, char16_t value, int32_t start_index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01E30FC0, int32_t, LastIndexOfAny_3, app::String* this_ptr, app::Char__Array* any_of, int32_t start_index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01E311F0, int32_t, LastIndexOfAnyUnchecked, app::String* this_ptr, app::Char__Array* any_of, int32_t start_index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01E312B0, int32_t, nativeCompareOrdinalEx, app::String* str_a, int32_t index_a, app::String* str_b, int32_t index_b, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01E31490, app::String*, ReplaceInternal_1, app::String* this_ptr, char16_t old_char, char16_t new_char)
    IL2CPP_REGISTER_METHOD(0x01E315A0, app::String*, ReplaceInternal_2, app::String* this_ptr, app::String* old_value, app::String* new_value)
    IL2CPP_REGISTER_METHOD(0x01E316E0, app::String*, ReplaceUnchecked, app::String* this_ptr, app::String* old_value, app::String* new_value)
    IL2CPP_REGISTER_METHOD(
        0x01E31A80,
        app::String*,
        ReplaceFallback,
        app::String* this_ptr,
        app::String* old_value,
        app::String* new_value,
        int32_t tested_count
    )
    IL2CPP_REGISTER_METHOD(0x01E31CE0, app::String*, PadHelper, app::String* this_ptr, int32_t total_width, char16_t padding_char, bool is_right_padded)
    IL2CPP_REGISTER_METHOD(0x01E31EE0, bool, StartsWithOrdinalUnchecked, app::String* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01E31F30, bool, IsAscii, app::String* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E31F60, void, CharCopy, char16_t* dest, char16_t* src, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01E31FB0, void, memset, uint8_t* dest, int32_t val, int32_t len)
    IL2CPP_REGISTER_METHOD(0x01E32090, void, memcpy, uint8_t* dest, uint8_t* src, int32_t size)
    IL2CPP_REGISTER_METHOD(0x01E320A0, void, bzero, uint8_t* dest, int32_t len)
    IL2CPP_REGISTER_METHOD(0x01E32150, void, bzero_aligned_1, uint8_t* dest, int32_t len)
    IL2CPP_REGISTER_METHOD(0x01E32160, void, bzero_aligned_2, uint8_t* dest, int32_t len)
    IL2CPP_REGISTER_METHOD(0x01E32170, void, bzero_aligned_4, uint8_t* dest, int32_t len)
    IL2CPP_REGISTER_METHOD(0x01E32180, void, bzero_aligned_8, uint8_t* dest, int32_t len)
    IL2CPP_REGISTER_METHOD(0x01E32190, void, memcpy_aligned_1, uint8_t* dest, uint8_t* src, int32_t size)
    IL2CPP_REGISTER_METHOD(0x01E321A0, void, memcpy_aligned_2, uint8_t* dest, uint8_t* src, int32_t size)
    IL2CPP_REGISTER_METHOD(0x01E321B0, void, memcpy_aligned_4, uint8_t* dest, uint8_t* src, int32_t size)
    IL2CPP_REGISTER_METHOD(0x01E321C0, void, memcpy_aligned_8, uint8_t* dest, uint8_t* src, int32_t size)
    IL2CPP_REGISTER_METHOD(0x01E321D0, app::String*, CreateString_1, app::String* this_ptr, int8_t* value)
    IL2CPP_REGISTER_METHOD(0x01E322D0, app::String*, CreateString_2, app::String* this_ptr, int8_t* value, int32_t start_index, int32_t length)
    IL2CPP_REGISTER_METHOD(0x01E322F0, app::String*, CreateString_3, app::String* this_ptr, char16_t* value)
    IL2CPP_REGISTER_METHOD(0x01E32300, app::String*, CreateString_4, app::String* this_ptr, char16_t* value, int32_t start_index, int32_t length)
    IL2CPP_REGISTER_METHOD(0x01E32310, app::String*, CreateString_5, app::String* this_ptr, app::Char__Array* val, int32_t start_index, int32_t length)
    IL2CPP_REGISTER_METHOD(0x01E32320, app::String*, CreateString_6, app::String* this_ptr, app::Char__Array* val)
    IL2CPP_REGISTER_METHOD(0x01E32410, app::String*, CreateString_7, app::String* this_ptr, char16_t c, int32_t count)
    IL2CPP_REGISTER_METHOD(
        0x01E32540,
        app::String*,
        CreateString_8,
        app::String* this_ptr,
        int8_t* value,
        int32_t start_index,
        int32_t length,
        app::Encoding* enc
    )
    IL2CPP_REGISTER_METHOD(0x01541DC0, app::String*, Join_4, app::String* separator, app::IEnumerable_1_System_Object_* values)
    inline bool operator==(app::String& a, app::String& b) { return op_Equality(&a, &b); }
    inline bool operator!=(app::String& a, app::String& b) { return op_Inequality(&a, &b); }
} // namespace app::classes::System::String
