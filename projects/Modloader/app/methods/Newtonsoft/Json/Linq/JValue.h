#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/JValue.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/JTokenType__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/BigInteger_2.h>
#include <Modloader/app/structs/JToken.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_Linq_JTokenType_.h>
#include <Modloader/app/structs/JsonWriter.h>
#include <Modloader/app/structs/JsonConverter__Array.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/DynamicMetaObject.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/TypeCode__Enum.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Newtonsoft::Json::Linq::JValue {
    IL2CPP_REGISTER_METHOD(0x0185A290, void, ctor_1, (app::JValue * this_ptr, app::Object* value, app::JTokenType__Enum type))
    IL2CPP_REGISTER_METHOD(0x0185A340, void, ctor_2, (app::JValue * this_ptr, app::JValue* other))
    IL2CPP_REGISTER_METHOD(0x0185A420, void, ctor_3, (app::JValue * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x0185A4D0, void, ctor_4, (app::JValue * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0185A4E0, void, ctor_5, (app::JValue * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HasValues, (app::JValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0185A520, int32_t, CompareBigInteger, (app::BigInteger_2 i1, app::Object* i2))
    IL2CPP_REGISTER_METHOD(0x0185A9F0, int32_t, Compare, (app::JTokenType__Enum value_type, app::Object* obj_a, app::Object* obj_b))
    IL2CPP_REGISTER_METHODINFO(0x04792DD8, JValue_Compare__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0185B650, int32_t, CompareFloat, (app::Object * obj_a, app::Object* obj_b))
    IL2CPP_REGISTER_METHOD(0x0185B790, app::JToken*, CloneToken, (app::JValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0185B8E0, app::JValue*, CreateComment, (app::String * value))
    IL2CPP_REGISTER_METHOD(0x0185BA30, app::JValue*, CreateNull, ())
    IL2CPP_REGISTER_METHOD(0x0185BB80, app::JValue*, CreateUndefined, ())
    IL2CPP_REGISTER_METHOD(0x0185BCD0, app::JTokenType__Enum, GetValueType, (app::Nullable_1_Newtonsoft_Json_Linq_JTokenType_ current, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04756450, JValue_GetValueType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0185C130, app::JTokenType__Enum, GetStringValueType, (app::Nullable_1_Newtonsoft_Json_Linq_JTokenType_ current))
    IL2CPP_REGISTER_METHOD(0x00654950, app::JTokenType__Enum, get_Type, (app::JValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Object*, get_Value, (app::JValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0185C1D0, void, WriteTo, (app::JValue * this_ptr, app::JsonWriter* writer, app::JsonConverter__Array* converters))
    IL2CPP_REGISTER_METHODINFO(0x04731528, JValue_WriteTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0185CC10, bool, ValuesEquals, (app::JValue * v1, app::JValue* v2))
    IL2CPP_REGISTER_METHOD(0x0185CC70, bool, Equals_1, (app::JValue * this_ptr, app::JValue* other))
    IL2CPP_REGISTER_METHOD(0x0185CCC0, bool, Equals_2, (app::JValue * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0185CDE0, int32_t, GetHashCode, (app::JValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0185CE00, app::String*, ToString_1, (app::JValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0185CEB0, app::String*, ToString_2, (app::JValue * this_ptr, app::IFormatProvider* format_provider))
    IL2CPP_REGISTER_METHOD(0x0185CFA0, app::String*, ToString_3, (app::JValue * this_ptr, app::String* format, app::IFormatProvider* format_provider))
    IL2CPP_REGISTER_METHOD(0x0185D0B0, app::DynamicMetaObject*, GetMetaObject, (app::JValue * this_ptr, app::Expression* parameter))
    IL2CPP_REGISTER_METHOD(0x0185D340, int32_t, IComparable_CompareTo, (app::JValue * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0185D460, int32_t, CompareTo, (app::JValue * this_ptr, app::JValue* obj))
    IL2CPP_REGISTER_METHOD(0x0185D490, app::TypeCode__Enum, IConvertible_GetTypeCode, (app::JValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0185D540, bool, IConvertible_ToBoolean, (app::JValue * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x0185D5E0, uint16_t, IConvertible_ToChar, (app::JValue * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x0185D680, int8_t, IConvertible_ToSByte, (app::JValue * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x0185D720, uint8_t, IConvertible_ToByte, (app::JValue * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x0185D7C0, int16_t, IConvertible_ToInt16, (app::JValue * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x0185D860, uint16_t, IConvertible_ToUInt16, (app::JValue * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x0185D900, int32_t, IConvertible_ToInt32, (app::JValue * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x0185D9A0, uint32_t, IConvertible_ToUInt32, (app::JValue * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x0185DA40, int64_t, IConvertible_ToInt64, (app::JValue * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x0185DAE0, uint64_t, IConvertible_ToUInt64, (app::JValue * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x0185DB80, float, IConvertible_ToSingle, (app::JValue * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x0185DC20, double, IConvertible_ToDouble, (app::JValue * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x0185DCC0, app::Decimal, IConvertible_ToDecimal, (app::JValue * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x0185DD80, app::DateTime, IConvertible_ToDateTime, (app::JValue * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x0185DE20, app::Object*, IConvertible_ToType, (app::JValue * this_ptr, app::Type* conversion_type, app::IFormatProvider* provider))
} // namespace app::classes::Newtonsoft::Json::Linq::JValue
