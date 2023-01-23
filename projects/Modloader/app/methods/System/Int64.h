#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Int64__Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/NumberStyles__Enum.h>
#include <Modloader/app/structs/TypeCode__Enum.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Int64 {
    IL2CPP_REGISTER_METHOD(0x001E8970, int32_t, CompareTo_1, (app::Int64__Boxed * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04760138, Int64_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E8980, int32_t, CompareTo_2, (app::Int64__Boxed * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x001E89A0, bool, Equals_1, (app::Int64__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals_2, (app::Int64__Boxed * this_ptr, int64_t obj))
    IL2CPP_REGISTER_METHOD(0x00154D60, int32_t, GetHashCode, (app::Int64__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E89B0, app::String*, ToString_1, (app::Int64__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E89E0, app::String*, ToString_2, (app::Int64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x001E8A10, app::String*, ToString_3, (app::Int64__Boxed * this_ptr, app::String* format, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x0238D1C0, int64_t, Parse_1, (app::String * s))
    IL2CPP_REGISTER_METHOD(0x0238D1F0, int64_t, Parse_2, (app::String * s, app::NumberStyles__Enum style))
    IL2CPP_REGISTER_METHOD(0x0238D230, int64_t, Parse_3, (app::String * s, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x0238D260, int64_t, Parse_4, (app::String * s, app::NumberStyles__Enum style, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x0238D2B0, bool, TryParse_1, (app::String * s, int64_t* result))
    IL2CPP_REGISTER_METHOD(0x0238D2F0, bool, TryParse_2, (app::String * s, app::NumberStyles__Enum style, app::IFormatProvider* provider, int64_t* result))
    IL2CPP_REGISTER_METHOD(0x001E8A50, app::TypeCode__Enum, GetTypeCode, (app::Int64__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001E8A60, bool, IConvertible_ToBoolean, (app::Int64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x001E8B00, uint16_t, IConvertible_ToChar, (app::Int64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x001E8C40, int8_t, IConvertible_ToSByte, (app::Int64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x001E8D90, uint8_t, IConvertible_ToByte, (app::Int64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x001E8E30, int16_t, IConvertible_ToInt16, (app::Int64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x001E8F80, uint16_t, IConvertible_ToUInt16, (app::Int64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x001E90C0, int32_t, IConvertible_ToInt32, (app::Int64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x001E9160, uint32_t, IConvertible_ToUInt32, (app::Int64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x00107C00, int64_t, IConvertible_ToInt64, (app::Int64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x001E92A0, uint64_t, IConvertible_ToUInt64, (app::Int64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x001E93E0, float, IConvertible_ToSingle, (app::Int64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x001E9480, double, IConvertible_ToDouble, (app::Int64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x001E9520, app::Decimal, IConvertible_ToDecimal, (app::Int64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x001E9680, app::DateTime, IConvertible_ToDateTime, (app::Int64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHODINFO(0x04746248, Int64_System_IConvertible_ToDateTime__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E9690, app::Object*, IConvertible_ToType, (app::Int64__Boxed * this_ptr, app::Type* type, app::IFormatProvider* provider))
} // namespace app::classes::System::Int64
