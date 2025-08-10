#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Base64FormattingOptions__Enum.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/IConvertible.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeCode__Enum.h>

namespace app::classes::System::Convert {
    IL2CPP_REGISTER_METHOD(0x02035400, app::TypeCode__Enum, GetTypeCode, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x020354B0, app::Object*, ChangeType_1, app::Object* value, app::TypeCode__Enum type_code, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x02035950, app::Object*, DefaultToType, app::IConvertible* value, app::Type* target_type, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x02036940, app::Object*, ChangeType_2, app::Object* value, app::Type* conversion_type)
    IL2CPP_REGISTER_METHOD(0x02036A20, app::Object*, ChangeType_3, app::Object* value, app::Type* conversion_type, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x02037790, bool, ToBoolean_1, app::Object* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x02037890, bool, ToBoolean_2, int8_t value)
    IL2CPP_REGISTER_METHOD(0x02037890, bool, ToBoolean_3, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x020378A0, bool, ToBoolean_4, int16_t value)
    IL2CPP_REGISTER_METHOD(0x020378A0, bool, ToBoolean_5, uint16_t value)
    IL2CPP_REGISTER_METHOD(0x020378B0, bool, ToBoolean_6, int32_t value)
    IL2CPP_REGISTER_METHOD(0x020378B0, bool, ToBoolean_7, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x020378C0, bool, ToBoolean_8, int64_t value)
    IL2CPP_REGISTER_METHOD(0x020378C0, bool, ToBoolean_9, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x020378D0, bool, ToBoolean_10, app::String* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x02037980, bool, ToBoolean_11, float value)
    IL2CPP_REGISTER_METHOD(0x02037990, bool, ToBoolean_12, double value)
    IL2CPP_REGISTER_METHOD(0x020379B0, bool, ToBoolean_13, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x02037A80, char16_t, ToChar_1, app::Object* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x02037B80, char16_t, ToChar_2, int8_t value)
    IL2CPP_REGISTER_METHOD(0x018F0F30, char16_t, ToChar_3, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x02037C40, char16_t, ToChar_4, int16_t value)
    IL2CPP_REGISTER_METHOD(0x015FAE60, char16_t, ToChar_5, uint16_t value)
    IL2CPP_REGISTER_METHOD(0x02037D10, char16_t, ToChar_6, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02037DE0, char16_t, ToChar_7, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x02037EB0, char16_t, ToChar_8, int64_t value)
    IL2CPP_REGISTER_METHOD(0x02037F80, char16_t, ToChar_9, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x02038050, char16_t, ToChar_10, app::String* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x02038160, int8_t, ToSByte_1, app::Object* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x02037890, int8_t, ToSByte_2, bool value)
    IL2CPP_REGISTER_METHOD(0x02038260, int8_t, ToSByte_3, char16_t value)
    IL2CPP_REGISTER_METHOD(0x02038330, int8_t, ToSByte_4, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x02038400, int8_t, ToSByte_5, int16_t value)
    IL2CPP_REGISTER_METHOD(0x020384D0, int8_t, ToSByte_6, uint16_t value)
    IL2CPP_REGISTER_METHOD(0x020385A0, int8_t, ToSByte_7, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02038670, int8_t, ToSByte_8, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x02038730, int8_t, ToSByte_9, int64_t value)
    IL2CPP_REGISTER_METHOD(0x02038800, int8_t, ToSByte_10, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x020388D0, int8_t, ToSByte_11, float value)
    IL2CPP_REGISTER_METHOD(0x02038980, int8_t, ToSByte_12, double value)
    IL2CPP_REGISTER_METHOD(0x02038A30, int8_t, ToSByte_13, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x02038BA0, int8_t, ToSByte_14, app::String* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x02038BE0, uint8_t, ToByte_1, app::Object* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x02037890, uint8_t, ToByte_2, bool value)
    IL2CPP_REGISTER_METHOD(0x02038CE0, uint8_t, ToByte_3, char16_t value)
    IL2CPP_REGISTER_METHOD(0x02038DB0, uint8_t, ToByte_4, int8_t value)
    IL2CPP_REGISTER_METHOD(0x02038E70, uint8_t, ToByte_5, int16_t value)
    IL2CPP_REGISTER_METHOD(0x02038F40, uint8_t, ToByte_6, uint16_t value)
    IL2CPP_REGISTER_METHOD(0x02039010, uint8_t, ToByte_7, int32_t value)
    IL2CPP_REGISTER_METHOD(0x020390E0, uint8_t, ToByte_8, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x020391B0, uint8_t, ToByte_9, int64_t value)
    IL2CPP_REGISTER_METHOD(0x02039280, uint8_t, ToByte_10, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x02039350, uint8_t, ToByte_11, float value)
    IL2CPP_REGISTER_METHOD(0x02039400, uint8_t, ToByte_12, double value)
    IL2CPP_REGISTER_METHOD(0x020394B0, uint8_t, ToByte_13, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x02039620, uint8_t, ToByte_14, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02039700, uint8_t, ToByte_15, app::String* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x02039760, int16_t, ToInt16_1, app::Object* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x02039860, int16_t, ToInt16_2, bool value)
    IL2CPP_REGISTER_METHOD(0x02039870, int16_t, ToInt16_3, char16_t value)
    IL2CPP_REGISTER_METHOD(0x02039940, int16_t, ToInt16_4, int8_t value)
    IL2CPP_REGISTER_METHOD(0x018F0F30, int16_t, ToInt16_5, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x02039950, int16_t, ToInt16_6, uint16_t value)
    IL2CPP_REGISTER_METHOD(0x02039A20, int16_t, ToInt16_7, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02039AF0, int16_t, ToInt16_8, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x02039BC0, int16_t, ToInt16_9, int64_t value)
    IL2CPP_REGISTER_METHOD(0x02039C90, int16_t, ToInt16_10, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x02039D60, int16_t, ToInt16_11, float value)
    IL2CPP_REGISTER_METHOD(0x02039E10, int16_t, ToInt16_12, double value)
    IL2CPP_REGISTER_METHOD(0x02039EC0, int16_t, ToInt16_13, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x0203A030, int16_t, ToInt16_14, app::String* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0203A090, uint16_t, ToUInt16_1, app::Object* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x02039860, uint16_t, ToUInt16_2, bool value)
    IL2CPP_REGISTER_METHOD(0x015FAE60, uint16_t, ToUInt16_3, char16_t value)
    IL2CPP_REGISTER_METHOD(0x0203A190, uint16_t, ToUInt16_4, int8_t value)
    IL2CPP_REGISTER_METHOD(0x018F0F30, uint16_t, ToUInt16_5, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x0203A250, uint16_t, ToUInt16_6, int16_t value)
    IL2CPP_REGISTER_METHOD(0x0203A320, uint16_t, ToUInt16_7, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0203A3F0, uint16_t, ToUInt16_8, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x0203A4C0, uint16_t, ToUInt16_9, int64_t value)
    IL2CPP_REGISTER_METHOD(0x0203A590, uint16_t, ToUInt16_10, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x0203A660, uint16_t, ToUInt16_11, float value)
    IL2CPP_REGISTER_METHOD(0x0203A710, uint16_t, ToUInt16_12, double value)
    IL2CPP_REGISTER_METHOD(0x0203A7C0, uint16_t, ToUInt16_13, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x0203A930, uint16_t, ToUInt16_14, app::String* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0203A990, int32_t, ToInt32_1, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0203AA80, int32_t, ToInt32_2, app::Object* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0203AB80, int32_t, ToInt32_3, bool value)
    IL2CPP_REGISTER_METHOD(0x015FAE60, int32_t, ToInt32_4, char16_t value)
    IL2CPP_REGISTER_METHOD(0x018F0F30, int32_t, ToInt32_5, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x0203AB90, int32_t, ToInt32_6, int16_t value)
    IL2CPP_REGISTER_METHOD(0x015FAE60, int32_t, ToInt32_7, uint16_t value)
    IL2CPP_REGISTER_METHOD(0x0203ABA0, int32_t, ToInt32_8, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x0203AC70, int32_t, ToInt32_9, int64_t value)
    IL2CPP_REGISTER_METHOD(0x0203AD40, int32_t, ToInt32_10, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x0203AE10, int32_t, ToInt32_11, float value)
    IL2CPP_REGISTER_METHOD(0x0203AEC0, int32_t, ToInt32_12, double value)
    IL2CPP_REGISTER_METHOD(0x0203B010, int32_t, ToInt32_13, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x0203B110, int32_t, ToInt32_14, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0203B1F0, int32_t, ToInt32_15, app::String* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0203B250, uint32_t, ToUInt32_1, app::Object* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0203AB80, uint32_t, ToUInt32_2, bool value)
    IL2CPP_REGISTER_METHOD(0x015FAE60, uint32_t, ToUInt32_3, char16_t value)
    IL2CPP_REGISTER_METHOD(0x0203B350, uint32_t, ToUInt32_4, int8_t value)
    IL2CPP_REGISTER_METHOD(0x018F0F30, uint32_t, ToUInt32_5, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x0203B410, uint32_t, ToUInt32_6, int16_t value)
    IL2CPP_REGISTER_METHOD(0x015FAE60, uint32_t, ToUInt32_7, uint16_t value)
    IL2CPP_REGISTER_METHOD(0x0203B4E0, uint32_t, ToUInt32_8, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0203B5A0, uint32_t, ToUInt32_9, int64_t value)
    IL2CPP_REGISTER_METHOD(0x0203B670, uint32_t, ToUInt32_10, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x0203B740, uint32_t, ToUInt32_11, float value)
    IL2CPP_REGISTER_METHOD(0x0203B7F0, uint32_t, ToUInt32_12, double value)
    IL2CPP_REGISTER_METHOD(0x0203B900, uint32_t, ToUInt32_13, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x0203BA70, uint32_t, ToUInt32_14, app::String* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0203BAD0, int64_t, ToInt64_1, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0203BBC0, int64_t, ToInt64_2, app::Object* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0203BCC0, int64_t, ToInt64_3, bool value)
    IL2CPP_REGISTER_METHOD(0x015FAE60, int64_t, ToInt64_4, char16_t value)
    IL2CPP_REGISTER_METHOD(0x0203BCD0, int64_t, ToInt64_5, int8_t value)
    IL2CPP_REGISTER_METHOD(0x018F0F30, int64_t, ToInt64_6, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x0203BCE0, int64_t, ToInt64_7, int16_t value)
    IL2CPP_REGISTER_METHOD(0x015FAE60, int64_t, ToInt64_8, uint16_t value)
    IL2CPP_REGISTER_METHOD(0x01A948E0, int64_t, ToInt64_9, int32_t value)
    IL2CPP_REGISTER_METHOD(0x006CE970, int64_t, ToInt64_10, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x0203BCF0, int64_t, ToInt64_11, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x0203BDC0, int64_t, ToInt64_12, float value)
    IL2CPP_REGISTER_METHOD(0x0203BE70, int64_t, ToInt64_13, double value)
    IL2CPP_REGISTER_METHOD(0x0203BF40, int64_t, ToInt64_14, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x0203C0B0, int64_t, ToInt64_15, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0203C190, int64_t, ToInt64_16, app::String* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0203C1F0, uint64_t, ToUInt64_1, app::Object* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0203AB80, uint64_t, ToUInt64_2, bool value)
    IL2CPP_REGISTER_METHOD(0x015FAE60, uint64_t, ToUInt64_3, char16_t value)
    IL2CPP_REGISTER_METHOD(0x0203C2F0, uint64_t, ToUInt64_4, int8_t value)
    IL2CPP_REGISTER_METHOD(0x018F0F30, uint64_t, ToUInt64_5, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x0203C3C0, uint64_t, ToUInt64_6, int16_t value)
    IL2CPP_REGISTER_METHOD(0x015FAE60, uint64_t, ToUInt64_7, uint16_t value)
    IL2CPP_REGISTER_METHOD(0x0203C490, uint64_t, ToUInt64_8, int32_t value)
    IL2CPP_REGISTER_METHOD(0x006CE970, uint64_t, ToUInt64_9, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x0203C550, uint64_t, ToUInt64_10, int64_t value)
    IL2CPP_REGISTER_METHOD(0x0203C620, uint64_t, ToUInt64_11, float value)
    IL2CPP_REGISTER_METHOD(0x0203C6D0, uint64_t, ToUInt64_12, double value)
    IL2CPP_REGISTER_METHOD(0x0203C7D0, uint64_t, ToUInt64_13, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x0203C940, uint64_t, ToUInt64_14, app::String* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0203C9A0, float, ToSingle_1, app::Object* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0203CAA0, float, ToSingle_2, int8_t value)
    IL2CPP_REGISTER_METHOD(0x0203CAB0, float, ToSingle_3, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x0203CAC0, float, ToSingle_4, int16_t value)
    IL2CPP_REGISTER_METHOD(0x0203CAD0, float, ToSingle_5, uint16_t value)
    IL2CPP_REGISTER_METHOD(0x0203CAE0, float, ToSingle_6, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0203CAF0, float, ToSingle_7, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x0203CB00, float, ToSingle_8, int64_t value)
    IL2CPP_REGISTER_METHOD(0x0203CB10, float, ToSingle_9, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x0203CB30, float, ToSingle_10, double value)
    IL2CPP_REGISTER_METHOD(0x0203CB40, float, ToSingle_11, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x0203CCA0, float, ToSingle_12, app::String* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0203CD00, float, ToSingle_13, bool value)
    IL2CPP_REGISTER_METHOD(0x0203CD10, double, ToDouble_1, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0203CE00, double, ToDouble_2, app::Object* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0203CF00, double, ToDouble_3, int8_t value)
    IL2CPP_REGISTER_METHOD(0x0203CF10, double, ToDouble_4, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x0203CF20, double, ToDouble_5, int16_t value)
    IL2CPP_REGISTER_METHOD(0x0203CF30, double, ToDouble_6, uint16_t value)
    IL2CPP_REGISTER_METHOD(0x0203CF40, double, ToDouble_7, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0203CF50, double, ToDouble_8, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x0203CF60, double, ToDouble_9, int64_t value)
    IL2CPP_REGISTER_METHOD(0x0203CF70, double, ToDouble_10, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x0203CF90, double, ToDouble_11, float value)
    IL2CPP_REGISTER_METHOD(0x0203CFA0, double, ToDouble_12, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x0203D050, double, ToDouble_13, app::String* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0203D120, double, ToDouble_14, bool value)
    IL2CPP_REGISTER_METHOD(0x0203D130, app::Decimal, ToDecimal_1, app::Object* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0203D260, app::Decimal, ToDecimal_2, int8_t value)
    IL2CPP_REGISTER_METHOD(0x0203D340, app::Decimal, ToDecimal_3, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x0203D400, app::Decimal, ToDecimal_4, int16_t value)
    IL2CPP_REGISTER_METHOD(0x0203D4E0, app::Decimal, ToDecimal_5, uint16_t value)
    IL2CPP_REGISTER_METHOD(0x0203D5A0, app::Decimal, ToDecimal_6, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0203D670, app::Decimal, ToDecimal_7, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x0203D730, app::Decimal, ToDecimal_8, int64_t value)
    IL2CPP_REGISTER_METHOD(0x0203D810, app::Decimal, ToDecimal_9, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x0203D8D0, app::Decimal, ToDecimal_10, float value)
    IL2CPP_REGISTER_METHOD(0x0203D9B0, app::Decimal, ToDecimal_11, double value)
    IL2CPP_REGISTER_METHOD(0x0203DA90, app::Decimal, ToDecimal_12, app::String* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0203DBB0, app::Decimal, ToDecimal_13, bool value)
    IL2CPP_REGISTER_METHOD(0x0203DC70, app::DateTime, ToDateTime_1, app::Object* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0203DDA0, app::DateTime, ToDateTime_2, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0203DEB0, app::DateTime, ToDateTime_3, app::String* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0203DF90, app::String*, ToString_1, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0203E030, app::String*, ToString_2, app::Object* value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x019637F0, app::String*, ToString_3, char16_t value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0203E150, app::String*, ToString_4, int32_t value, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0203E180, app::String*, ToString_5, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x0203E250, uint8_t, ToByte_16, app::String* value, int32_t from_base)
    IL2CPP_REGISTER_METHOD(0x0203E380, int8_t, ToSByte_15, app::String* value, int32_t from_base)
    IL2CPP_REGISTER_METHOD(0x0203E4D0, int16_t, ToInt16_15, app::String* value, int32_t from_base)
    IL2CPP_REGISTER_METHOD(0x0203E620, uint16_t, ToUInt16_15, app::String* value, int32_t from_base)
    IL2CPP_REGISTER_METHOD(0x0203E750, int32_t, ToInt32_16, app::String* value, int32_t from_base)
    IL2CPP_REGISTER_METHOD(0x0203E840, uint32_t, ToUInt32_15, app::String* value, int32_t from_base)
    IL2CPP_REGISTER_METHOD(0x0203E930, int64_t, ToInt64_17, app::String* value, int32_t from_base)
    IL2CPP_REGISTER_METHOD(0x0203EA20, uint64_t, ToUInt64_15, app::String* value, int32_t from_base)
    IL2CPP_REGISTER_METHOD(0x0203EB10, app::String*, ToBase64String_1, app::Byte__Array* in_array)
    IL2CPP_REGISTER_METHOD(0x0203EC00, app::String*, ToBase64String_2, app::Byte__Array* in_array, int32_t offset, int32_t length)
    IL2CPP_REGISTER_METHOD(
        0x0203ECD0,
        app::String*,
        ToBase64String_3,
        app::Byte__Array* in_array,
        int32_t offset,
        int32_t length,
        app::Base64FormattingOptions__Enum options
    )
    IL2CPP_REGISTER_METHOD(
        0x0203EFE0,
        int32_t,
        ToBase64CharArray_1,
        app::Byte__Array* in_array,
        int32_t offset_in,
        int32_t length,
        app::Char__Array* out_array,
        int32_t offset_out
    )
    IL2CPP_REGISTER_METHOD(
        0x0203F0D0,
        int32_t,
        ToBase64CharArray_2,
        app::Byte__Array* in_array,
        int32_t offset_in,
        int32_t length,
        app::Char__Array* out_array,
        int32_t offset_out,
        app::Base64FormattingOptions__Enum options
    )
    IL2CPP_REGISTER_METHOD(
        0x0203F4E0,
        int32_t,
        ConvertToBase64Array,
        char16_t* out_chars,
        uint8_t* in_data,
        int32_t offset,
        int32_t length,
        bool insert_line_breaks
    )
    IL2CPP_REGISTER_METHOD(0x0203F7D0, int32_t, ToBase64_CalculateAndValidateOutputLength, int32_t input_length, bool insert_line_breaks)
    IL2CPP_REGISTER_METHOD(0x0203F910, app::Byte__Array*, FromBase64String, app::String* s)
    IL2CPP_REGISTER_METHOD(0x0203FA00, app::Byte__Array*, FromBase64CharArray, app::Char__Array* in_array, int32_t offset, int32_t length)
    IL2CPP_REGISTER_METHOD(0x0203FBF0, app::Byte__Array*, FromBase64CharPtr, char16_t* input_ptr, int32_t input_length)
    IL2CPP_REGISTER_METHOD(
        0x0203FE40,
        int32_t,
        FromBase64_Decode,
        char16_t* start_input_ptr,
        int32_t input_length,
        uint8_t* start_dest_ptr,
        int32_t dest_length
    )
    IL2CPP_REGISTER_METHOD(0x02040180, int32_t, FromBase64_ComputeResultLength, char16_t* input_ptr, int32_t input_length)
    IL2CPP_REGISTER_METHOD(0x020402A0, void, cctor, )
} // namespace app::classes::System::Convert
