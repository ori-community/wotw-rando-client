#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/Int16__Boxed.h>
#include <Modloader/app/structs/NumberFormatInfo.h>
#include <Modloader/app/structs/NumberStyles__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeCode__Enum.h>

namespace app::classes::System::Int16 {
    IL2CPP_REGISTER_METHOD(0x001E71E0, int32_t, CompareTo_1, app::Int16__Boxed* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x001303D0, int32_t, CompareTo_2, app::Int16__Boxed* this_ptr, int16_t value)
    IL2CPP_REGISTER_METHOD(0x001E71F0, bool, Equals_1, app::Int16__Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x001303C0, bool, Equals_2, app::Int16__Boxed* this_ptr, int16_t obj)
    IL2CPP_REGISTER_METHOD(0x001303B0, int32_t, GetHashCode, app::Int16__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00130280, app::String*, ToString_1, app::Int16__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001E7200, app::String*, ToString_2, app::Int16__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E7230, app::String*, ToString_3, app::Int16__Boxed* this_ptr, app::String* format, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E7270, app::String*, ToString_4, app::Int16__Boxed* this_ptr, app::String* format, app::NumberFormatInfo* info)
    IL2CPP_REGISTER_METHOD(0x0238C680, int16_t, Parse_1, app::String* s, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0238C6B0, int16_t, Parse_2, app::String* s, app::NumberStyles__Enum style, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0238C700, int16_t, Parse_3, app::String* s, app::NumberStyles__Enum style, app::NumberFormatInfo* info)
    IL2CPP_REGISTER_METHOD(0x0238C890, bool, TryParse_1, app::String* s, app::NumberStyles__Enum style, app::IFormatProvider* provider, int16_t* result)
    IL2CPP_REGISTER_METHOD(0x0238C930, bool, TryParse_2, app::String* s, app::NumberStyles__Enum style, app::NumberFormatInfo* info, int16_t* result)
    IL2CPP_REGISTER_METHOD(0x001E7280, app::TypeCode__Enum, GetTypeCode, app::Int16__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001E7290, bool, IConvertible_ToBoolean, app::Int16__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E7330, char16_t, IConvertible_ToChar, app::Int16__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E7470, int8_t, IConvertible_ToSByte, app::Int16__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E75C0, uint8_t, IConvertible_ToByte, app::Int16__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x00113CC0, int16_t, IConvertible_ToInt16, app::Int16__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E7700, uint16_t, IConvertible_ToUInt16, app::Int16__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E7840, int32_t, IConvertible_ToInt32, app::Int16__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E78E0, uint32_t, IConvertible_ToUInt32, app::Int16__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E7A20, int64_t, IConvertible_ToInt64, app::Int16__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E7AC0, uint64_t, IConvertible_ToUInt64, app::Int16__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E7C00, float, IConvertible_ToSingle, app::Int16__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E7CA0, double, IConvertible_ToDouble, app::Int16__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E7D40, app::Decimal, IConvertible_ToDecimal, app::Int16__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E7E90, app::DateTime, IConvertible_ToDateTime, app::Int16__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E7EA0, app::Object*, IConvertible_ToType, app::Int16__Boxed* this_ptr, app::Type* type, app::IFormatProvider* provider)
} // namespace app::classes::System::Int16
