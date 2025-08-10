#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/Int32__Boxed.h>
#include <Modloader/app/structs/NumberStyles__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeCode__Enum.h>

namespace app::classes::System::Int32 {
    IL2CPP_REGISTER_METHOD(0x001E7F80, int32_t, CompareTo_1, app::Int32__Boxed* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x001312E0, int32_t, CompareTo_2, app::Int32__Boxed* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x001E7F90, bool, Equals_1, app::Int32__Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals_2, app::Int32__Boxed* this_ptr, int32_t obj)
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, app::Int32__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001311C0, app::String*, ToString_1, app::Int32__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001E7FA0, app::String*, ToString_2, app::Int32__Boxed* this_ptr, app::String* format)
    IL2CPP_REGISTER_METHOD(0x001E7FE0, app::String*, ToString_3, app::Int32__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E8010, app::String*, ToString_4, app::Int32__Boxed* this_ptr, app::String* format, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0238CD20, int32_t, Parse_1, app::String* s)
    IL2CPP_REGISTER_METHOD(0x0238CD50, int32_t, Parse_2, app::String* s, app::NumberStyles__Enum style)
    IL2CPP_REGISTER_METHOD(0x0238CD90, int32_t, Parse_3, app::String* s, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0238CDC0, int32_t, Parse_4, app::String* s, app::NumberStyles__Enum style, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0238CE10, bool, TryParse_1, app::String* s, int32_t* result)
    IL2CPP_REGISTER_METHOD(0x0238CE50, bool, TryParse_2, app::String* s, app::NumberStyles__Enum style, app::IFormatProvider* provider, int32_t* result)
    IL2CPP_REGISTER_METHOD(0x001E8050, app::TypeCode__Enum, GetTypeCode, app::Int32__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001E8060, bool, IConvertible_ToBoolean, app::Int32__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E8100, char16_t, IConvertible_ToChar, app::Int32__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E81A0, int8_t, IConvertible_ToSByte, app::Int32__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E8240, uint8_t, IConvertible_ToByte, app::Int32__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E82E0, int16_t, IConvertible_ToInt16, app::Int32__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E8380, uint16_t, IConvertible_ToUInt16, app::Int32__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, IConvertible_ToInt32, app::Int32__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E8420, uint32_t, IConvertible_ToUInt32, app::Int32__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E84C0, int64_t, IConvertible_ToInt64, app::Int32__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E8560, uint64_t, IConvertible_ToUInt64, app::Int32__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E8600, float, IConvertible_ToSingle, app::Int32__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E86A0, double, IConvertible_ToDouble, app::Int32__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E8740, app::Decimal, IConvertible_ToDecimal, app::Int32__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E8890, app::DateTime, IConvertible_ToDateTime, app::Int32__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E88A0, app::Object*, IConvertible_ToType, app::Int32__Boxed* this_ptr, app::Type* type, app::IFormatProvider* provider)
} // namespace app::classes::System::Int32
