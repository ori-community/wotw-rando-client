#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Decimal {
    IL2CPP_REGISTER_METHOD(0x0013D300, void, ctor_1, (app::Decimal__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0013D330, void, ctor_2, (app::Decimal__Boxed * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x0013D340, void, ctor_3, (app::Decimal__Boxed * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x0013D370, void, ctor_4, (app::Decimal__Boxed * this_ptr, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x0013D390, void, ctor_5, (app::Decimal__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0013D3C0, void, ctor_6, (app::Decimal__Boxed * this_ptr, double value))
    IL2CPP_REGISTER_METHOD(0x0013D3F0, void, ctor_7, (app::Decimal__Boxed * this_ptr, app::Int32__Array * bits))
    IL2CPP_REGISTER_METHODINFO(0x0476D778, Decimal__ctor_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0013D400, void, SetBits, (app::Decimal__Boxed * this_ptr, app::Int32__Array * bits))
    IL2CPP_REGISTER_METHODINFO(0x0474CC00, Decimal_SetBits__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0013D410, void, ctor_8, (app::Decimal__Boxed * this_ptr, int32_t lo, int32_t mid, int32_t hi, bool is_negative, uint8_t scale))
    IL2CPP_REGISTER_METHODINFO(0x04734858, Decimal__ctor_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0013D430, void, OnSerializing, (app::Decimal__Boxed * this_ptr, app::StreamingContext ctx))
    IL2CPP_REGISTER_METHODINFO(0x0471C118, Decimal_OnSerializing__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0013D450, void, IDeserializationCallback_OnDeserialization, (app::Decimal__Boxed * this_ptr, app::Object * sender))
    IL2CPP_REGISTER_METHODINFO(0x0470EE30, Decimal_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0013D460, void, ctor_9, (app::Decimal__Boxed * this_ptr, int32_t lo, int32_t mid, int32_t hi, int32_t flags))
    IL2CPP_REGISTER_METHODINFO(0x0475C698, Decimal__ctor_8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01732A00, app::Decimal, Abs, (app::Decimal d))
    IL2CPP_REGISTER_METHOD(0x01732A50, app::Decimal, Add, (app::Decimal d1, app::Decimal d2))
    IL2CPP_REGISTER_METHOD(0x01732B10, void, FCallAddSub, (app::Decimal * d1, app::Decimal * d2, uint8_t b_sign))
    IL2CPP_REGISTER_METHOD(0x01732B20, int32_t, Compare, (app::Decimal d1, app::Decimal d2))
    IL2CPP_REGISTER_METHOD(0x01732C70, int32_t, FCallCompare, (app::Decimal * d1, app::Decimal * d2))
    IL2CPP_REGISTER_METHOD(0x0013D470, int32_t, CompareTo_1, (app::Decimal__Boxed * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x047235E8, Decimal_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0013D480, int32_t, CompareTo_2, (app::Decimal__Boxed * this_ptr, app::Decimal value))
    IL2CPP_REGISTER_METHOD(0x01733040, app::Decimal, Divide, (app::Decimal d1, app::Decimal d2))
    IL2CPP_REGISTER_METHOD(0x01733100, void, FCallDivide, (app::Decimal * d1, app::Decimal * d2))
    IL2CPP_REGISTER_METHOD(0x0013D4A0, bool, Equals_1, (app::Decimal__Boxed * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x0013D4B0, bool, Equals_2, (app::Decimal__Boxed * this_ptr, app::Decimal value))
    IL2CPP_REGISTER_METHOD(0x0013D4D0, int32_t, GetHashCode, (app::Decimal__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013D520, app::String *, ToString_1, (app::Decimal__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013D560, app::String *, ToString_2, (app::Decimal__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHOD(0x0013D5A0, app::String *, ToString_3, (app::Decimal__Boxed * this_ptr, app::String * format, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHOD(0x01733420, app::Decimal, Parse_1, (app::String * s, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHOD(0x01733470, app::Decimal, Parse_2, (app::String * s, app::NumberStyles__Enum style, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHOD(0x017334E0, bool, TryParse, (app::String * s, app::NumberStyles__Enum style, app::IFormatProvider * provider, app::Decimal * result))
    IL2CPP_REGISTER_METHOD(0x01733540, app::Int32__Array *, GetBits, (app::Decimal d))
    IL2CPP_REGISTER_METHOD(0x01733670, app::Decimal, ToDecimal, (app::Byte__Array * buffer))
    IL2CPP_REGISTER_METHOD(0x01733960, app::Decimal, Max, (app::Decimal d1, app::Decimal d2))
    IL2CPP_REGISTER_METHOD(0x01733A90, app::Decimal, Min, (app::Decimal d1, app::Decimal d2))
    IL2CPP_REGISTER_METHOD(0x01733BC0, app::Decimal, Multiply, (app::Decimal d1, app::Decimal d2))
    IL2CPP_REGISTER_METHOD(0x01733CC0, void, FCallMultiply, (app::Decimal * d1, app::Decimal * d2))
    IL2CPP_REGISTER_METHOD(0x01733D10, app::Decimal, Negate, (app::Decimal d))
    IL2CPP_REGISTER_METHOD(0x01733D70, app::Decimal, Round, (app::Decimal d, int32_t decimals))
    IL2CPP_REGISTER_METHOD(0x01733E70, void, FCallRound, (app::Decimal * d, int32_t decimals))
    IL2CPP_REGISTER_METHOD(0x01733EC0, uint8_t, ToByte, (app::Decimal value))
    IL2CPP_REGISTER_METHODINFO(0x0471EBE8, Decimal_ToByte__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01734010, int8_t, ToSByte, (app::Decimal value))
    IL2CPP_REGISTER_METHODINFO(0x0477D708, Decimal_ToSByte__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01734160, int16_t, ToInt16, (app::Decimal value))
    IL2CPP_REGISTER_METHODINFO(0x0471BD50, Decimal_ToInt16__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017342B0, double, ToDouble, (app::Decimal d))
    IL2CPP_REGISTER_METHOD(0x01734300, int32_t, FCallToInt32, (app::Decimal d))
    IL2CPP_REGISTER_METHOD(0x01734380, int32_t, ToInt32, (app::Decimal d))
    IL2CPP_REGISTER_METHODINFO(0x0474FBB8, Decimal_ToInt32__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017344D0, int64_t, ToInt64, (app::Decimal d))
    IL2CPP_REGISTER_METHODINFO(0x04723848, Decimal_ToInt64__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01734630, uint16_t, ToUInt16, (app::Decimal value))
    IL2CPP_REGISTER_METHODINFO(0x04724C90, Decimal_ToUInt16__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01734780, uint32_t, ToUInt32, (app::Decimal d))
    IL2CPP_REGISTER_METHODINFO(0x047490E8, Decimal_ToUInt32__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017348D0, uint64_t, ToUInt64, (app::Decimal d))
    IL2CPP_REGISTER_METHODINFO(0x0474FA90, Decimal_ToUInt64__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01734A20, float, ToSingle, (app::Decimal d))
    IL2CPP_REGISTER_METHOD(0x01734A70, app::Decimal, Truncate, (app::Decimal d))
    IL2CPP_REGISTER_METHOD(0x01734B50, void, FCallTruncate, (app::Decimal * d))
    IL2CPP_REGISTER_METHOD(0x01734B90, app::Decimal, op_Implicit_1, (uint8_t value))
    IL2CPP_REGISTER_METHOD(0x01734BB0, app::Decimal, op_Implicit_2, (int8_t value))
    IL2CPP_REGISTER_METHOD(0x01734BE0, app::Decimal, op_Implicit_3, (int16_t value))
    IL2CPP_REGISTER_METHOD(0x01734C10, app::Decimal, op_Implicit_4, (uint16_t value))
    IL2CPP_REGISTER_METHOD(0x01734C10, app::Decimal, op_Implicit_5, (uint16_t value))
    IL2CPP_REGISTER_METHOD(0x01734C30, app::Decimal, op_Implicit_6, (int32_t value))
    IL2CPP_REGISTER_METHOD(0x01734C60, app::Decimal, op_Implicit_7, (uint32_t value))
    IL2CPP_REGISTER_METHOD(0x01734C70, app::Decimal, op_Implicit_8, (int64_t value))
    IL2CPP_REGISTER_METHOD(0x01734CB0, app::Decimal, op_Implicit_9, (uint64_t value))
    IL2CPP_REGISTER_METHOD(0x01734CD0, app::Decimal, op_Explicit_1, (float value))
    IL2CPP_REGISTER_METHOD(0x01734D10, app::Decimal, op_Explicit_2, (double value))
    IL2CPP_REGISTER_METHOD(0x01734D50, int32_t, op_Explicit_3, (app::Decimal value))
    IL2CPP_REGISTER_METHOD(0x01734E00, int64_t, op_Explicit_4, (app::Decimal value))
    IL2CPP_REGISTER_METHOD(0x01734EB0, uint64_t, op_Explicit_5, (app::Decimal value))
    IL2CPP_REGISTER_METHOD(0x01734F60, float, op_Explicit_6, (app::Decimal value))
    IL2CPP_REGISTER_METHOD(0x01735040, double, op_Explicit_7, (app::Decimal value))
    IL2CPP_REGISTER_METHOD(0x01735110, app::Decimal, op_UnaryNegation, (app::Decimal d))
    IL2CPP_REGISTER_METHOD(0x01735200, app::Decimal, op_Increment, (app::Decimal d))
    IL2CPP_REGISTER_METHOD(0x01735360, app::Decimal, op_Addition, (app::Decimal d1, app::Decimal d2))
    IL2CPP_REGISTER_METHOD(0x01735420, app::Decimal, op_Subtraction, (app::Decimal d1, app::Decimal d2))
    IL2CPP_REGISTER_METHOD(0x017354E0, app::Decimal, op_Multiply, (app::Decimal d1, app::Decimal d2))
    IL2CPP_REGISTER_METHOD(0x017355E0, app::Decimal, op_Division, (app::Decimal d1, app::Decimal d2))
    IL2CPP_REGISTER_METHOD(0x017356A0, bool, op_Equality, (app::Decimal d1, app::Decimal d2))
    IL2CPP_REGISTER_METHOD(0x017357D0, bool, op_Inequality, (app::Decimal d1, app::Decimal d2))
    IL2CPP_REGISTER_METHOD(0x01735900, bool, op_LessThan, (app::Decimal d1, app::Decimal d2))
    IL2CPP_REGISTER_METHOD(0x01735A30, bool, op_LessThanOrEqual, (app::Decimal d1, app::Decimal d2))
    IL2CPP_REGISTER_METHOD(0x01735B60, bool, op_GreaterThan, (app::Decimal d1, app::Decimal d2))
    IL2CPP_REGISTER_METHOD(0x01735C90, bool, op_GreaterThanOrEqual, (app::Decimal d1, app::Decimal d2))
    IL2CPP_REGISTER_METHOD(0x0013D5E0, app::TypeCode__Enum, GetTypeCode, (app::Decimal__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013D5F0, bool, IConvertible_ToBoolean, (app::Decimal__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHOD(0x0013D740, uint16_t, IConvertible_ToChar, (app::Decimal__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHODINFO(0x04726410, Decimal_System_IConvertible_ToChar__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0013D750, int8_t, IConvertible_ToSByte, (app::Decimal__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHOD(0x0013D760, uint8_t, IConvertible_ToByte, (app::Decimal__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHOD(0x0013D770, int16_t, IConvertible_ToInt16, (app::Decimal__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHOD(0x0013D780, uint16_t, IConvertible_ToUInt16, (app::Decimal__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHOD(0x0013D790, int32_t, IConvertible_ToInt32, (app::Decimal__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHOD(0x0013D920, uint32_t, IConvertible_ToUInt32, (app::Decimal__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHOD(0x0013D930, int64_t, IConvertible_ToInt64, (app::Decimal__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHOD(0x0013D940, uint64_t, IConvertible_ToUInt64, (app::Decimal__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHOD(0x0013D950, float, IConvertible_ToSingle, (app::Decimal__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHOD(0x0013D960, double, IConvertible_ToDouble, (app::Decimal__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHOD(0x0010A980, app::Decimal, IConvertible_ToDecimal, (app::Decimal__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHOD(0x0013DA90, app::DateTime, IConvertible_ToDateTime, (app::Decimal__Boxed * this_ptr, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHODINFO(0x04719958, Decimal_System_IConvertible_ToDateTime__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0013DAA0, app::Object *, IConvertible_ToType, (app::Decimal__Boxed * this_ptr, app::Type * type, app::IFormatProvider * provider))
    IL2CPP_REGISTER_METHOD(0x01736E80, void, cctor, ())
    inline app::Decimal operator - (app::Decimal d) {
        return op_UnaryNegation(d);
    }
    inline app::Decimal operator ++ (app::Decimal d) {
        return op_Increment(d);
    }
    inline app::Decimal operator + (app::Decimal d1, app::Decimal d2) {
        return op_Addition(d1, d2);
    }
    inline app::Decimal operator - (app::Decimal d1, app::Decimal d2) {
        return op_Subtraction(d1, d2);
    }
    inline app::Decimal operator * (app::Decimal d1, app::Decimal d2) {
        return op_Multiply(d1, d2);
    }
    inline app::Decimal operator / (app::Decimal d1, app::Decimal d2) {
        return op_Division(d1, d2);
    }
    inline bool operator == (app::Decimal d1, app::Decimal d2) {
        return op_Equality(d1, d2);
    }
    inline bool operator != (app::Decimal d1, app::Decimal d2) {
        return op_Inequality(d1, d2);
    }
    inline bool operator < (app::Decimal d1, app::Decimal d2) {
        return op_LessThan(d1, d2);
    }
    inline bool operator <= (app::Decimal d1, app::Decimal d2) {
        return op_LessThanOrEqual(d1, d2);
    }
    inline bool operator > (app::Decimal d1, app::Decimal d2) {
        return op_GreaterThan(d1, d2);
    }
    inline bool operator >= (app::Decimal d1, app::Decimal d2) {
        return op_GreaterThanOrEqual(d1, d2);
    }
}
