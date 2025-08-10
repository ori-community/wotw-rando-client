#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Boxed.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/NumberFormatInfo.h>
#include <Modloader/app/structs/NumberStyles__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeCode__Enum.h>

namespace app::classes::System::Byte {
    IL2CPP_REGISTER_METHOD(0x001E1F00, int32_t, CompareTo_1, app::Byte__Boxed* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x001E1F10, int32_t, CompareTo_2, app::Byte__Boxed* this_ptr, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x001E1F20, bool, Equals_1, app::Byte__Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x001D85A0, bool, Equals_2, app::Byte__Boxed* this_ptr, uint8_t obj)
    IL2CPP_REGISTER_METHOD(0x0010E100, int32_t, GetHashCode, app::Byte__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0229F450, uint8_t, Parse_1, app::String* s, app::NumberStyles__Enum style)
    IL2CPP_REGISTER_METHOD(0x0229F490, uint8_t, Parse_2, app::String* s, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0229F4C0, uint8_t, Parse_3, app::String* s, app::NumberStyles__Enum style, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0229F510, uint8_t, Parse_4, app::String* s, app::NumberStyles__Enum style, app::NumberFormatInfo* info)
    IL2CPP_REGISTER_METHOD(0x0229F650, bool, TryParse_1, app::String* s, uint8_t* result)
    IL2CPP_REGISTER_METHOD(0x0229F6C0, bool, TryParse_2, app::String* s, app::NumberStyles__Enum style, app::IFormatProvider* provider, uint8_t* result)
    IL2CPP_REGISTER_METHOD(0x0229F750, bool, TryParse_3, app::String* s, app::NumberStyles__Enum style, app::NumberFormatInfo* info, uint8_t* result)
    IL2CPP_REGISTER_METHOD(0x001E1F30, app::String*, ToString_1, app::Byte__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001E1F60, app::String*, ToString_2, app::Byte__Boxed* this_ptr, app::String* format)
    IL2CPP_REGISTER_METHOD(0x001E1FA0, app::String*, ToString_3, app::Byte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E1FD0, app::String*, ToString_4, app::Byte__Boxed* this_ptr, app::String* format, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E2010, app::TypeCode__Enum, GetTypeCode, app::Byte__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001E2020, bool, IConvertible_ToBoolean, app::Byte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E20C0, char16_t, IConvertible_ToChar, app::Byte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E2160, int8_t, IConvertible_ToSByte, app::Byte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0010E100, uint8_t, IConvertible_ToByte, app::Byte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E22A0, int16_t, IConvertible_ToInt16, app::Byte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E2340, uint16_t, IConvertible_ToUInt16, app::Byte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E23E0, int32_t, IConvertible_ToInt32, app::Byte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E2480, uint32_t, IConvertible_ToUInt32, app::Byte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E2520, int64_t, IConvertible_ToInt64, app::Byte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E25C0, uint64_t, IConvertible_ToUInt64, app::Byte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E2660, float, IConvertible_ToSingle, app::Byte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E2700, double, IConvertible_ToDouble, app::Byte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E27A0, app::Decimal, IConvertible_ToDecimal, app::Byte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E28E0, app::DateTime, IConvertible_ToDateTime, app::Byte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E28F0, app::Object*, IConvertible_ToType, app::Byte__Boxed* this_ptr, app::Type* type, app::IFormatProvider* provider)
} // namespace app::classes::System::Byte
