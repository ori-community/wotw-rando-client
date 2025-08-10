#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/NumberFormatInfo.h>
#include <Modloader/app/structs/NumberStyles__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Single__Boxed.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeCode__Enum.h>

namespace app::classes::System::Single {
    IL2CPP_REGISTER_METHOD(0x01E26010, bool, IsInfinity, float f)
    IL2CPP_REGISTER_METHOD(0x01E26030, bool, IsPositiveInfinity, float f)
    IL2CPP_REGISTER_METHOD(0x01E26050, bool, IsNegativeInfinity, float f)
    IL2CPP_REGISTER_METHOD(0x01E26070, bool, IsNaN, float f)
    IL2CPP_REGISTER_METHOD(0x01E26090, bool, IsFinite, float f)
    IL2CPP_REGISTER_METHOD(0x001D4970, int32_t, CompareTo_1, app::Single__Boxed* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x001D4980, int32_t, CompareTo_2, app::Single__Boxed* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x001D49E0, bool, Equals_1, app::Single__Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x001D49F0, bool, Equals_2, app::Single__Boxed* this_ptr, float obj)
    IL2CPP_REGISTER_METHOD(0x0014A500, int32_t, GetHashCode, app::Single__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001D4A30, app::String*, ToString_1, app::Single__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001D4A60, app::String*, ToString_2, app::Single__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D4AA0, app::String*, ToString_3, app::Single__Boxed* this_ptr, app::String* format)
    IL2CPP_REGISTER_METHOD(0x001D4AE0, app::String*, ToString_4, app::Single__Boxed* this_ptr, app::String* format, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x01E263B0, float, Parse_1, app::String* s)
    IL2CPP_REGISTER_METHOD(0x01E263E0, float, Parse_2, app::String* s, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x01E26410, float, Parse_3, app::String* s, app::NumberStyles__Enum style, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x01E26460, float, Parse_4, app::String* s, app::NumberStyles__Enum style, app::NumberFormatInfo* info)
    IL2CPP_REGISTER_METHOD(0x01E26470, bool, TryParse_1, app::String* s, float* result)
    IL2CPP_REGISTER_METHOD(0x01E264B0, bool, TryParse_2, app::String* s, app::NumberStyles__Enum style, app::IFormatProvider* provider, float* result)
    IL2CPP_REGISTER_METHOD(0x01E26510, bool, TryParse_3, app::String* s, app::NumberStyles__Enum style, app::NumberFormatInfo* info, float* result)
    IL2CPP_REGISTER_METHOD(0x001D4B20, app::TypeCode__Enum, GetTypeCode, app::Single__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001D4B30, bool, IConvertible_ToBoolean, app::Single__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D4BF0, char16_t, IConvertible_ToChar, app::Single__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D4C00, int8_t, IConvertible_ToSByte, app::Single__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D4D30, uint8_t, IConvertible_ToByte, app::Single__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D4E60, int16_t, IConvertible_ToInt16, app::Single__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D4F90, uint16_t, IConvertible_ToUInt16, app::Single__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D50C0, int32_t, IConvertible_ToInt32, app::Single__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D51F0, uint32_t, IConvertible_ToUInt32, app::Single__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D5320, int64_t, IConvertible_ToInt64, app::Single__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D5450, uint64_t, IConvertible_ToUInt64, app::Single__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0010FDD0, float, IConvertible_ToSingle, app::Single__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D5580, double, IConvertible_ToDouble, app::Single__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D5630, app::Decimal, IConvertible_ToDecimal, app::Single__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D5790, app::DateTime, IConvertible_ToDateTime, app::Single__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D57A0, app::Object*, IConvertible_ToType, app::Single__Boxed* this_ptr, app::Type* type, app::IFormatProvider* provider)
} // namespace app::classes::System::Single
