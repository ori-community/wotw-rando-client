#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/NumberFormatInfo.h>
#include <Modloader/app/structs/NumberStyles__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SByte__Boxed.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeCode__Enum.h>

namespace app::classes::System::SByte {
    IL2CPP_REGISTER_METHOD(0x001D8570, int32_t, CompareTo_1, app::SByte__Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x001D8580, int32_t, CompareTo_2, app::SByte__Boxed* this_ptr, int8_t value)
    IL2CPP_REGISTER_METHOD(0x001D8590, bool, Equals_1, app::SByte__Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x001D85A0, bool, Equals_2, app::SByte__Boxed* this_ptr, int8_t obj)
    IL2CPP_REGISTER_METHOD(0x001D85B0, int32_t, GetHashCode, app::SByte__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001D85C0, app::String*, ToString_1, app::SByte__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001D85F0, app::String*, ToString_2, app::SByte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D8620, app::String*, ToString_3, app::SByte__Boxed* this_ptr, app::String* format, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D8660, app::String*, ToString_4, app::SByte__Boxed* this_ptr, app::String* format, app::NumberFormatInfo* info)
    IL2CPP_REGISTER_METHOD(0x01EF0A50, int8_t, Parse_1, app::String* s, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x01EF0A80, int8_t, Parse_2, app::String* s, app::NumberStyles__Enum style, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x01EF0AD0, int8_t, Parse_3, app::String* s, app::NumberStyles__Enum style, app::NumberFormatInfo* info)
    IL2CPP_REGISTER_METHOD(0x01EF0C60, bool, TryParse_1, app::String* s, app::NumberStyles__Enum style, app::IFormatProvider* provider, int8_t* result)
    IL2CPP_REGISTER_METHOD(0x01EF0D00, bool, TryParse_2, app::String* s, app::NumberStyles__Enum style, app::NumberFormatInfo* info, int8_t* result)
    IL2CPP_REGISTER_METHOD(0x001D8670, app::TypeCode__Enum, GetTypeCode, app::SByte__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001D8680, bool, IConvertible_ToBoolean, app::SByte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D8720, char16_t, IConvertible_ToChar, app::SByte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0010E100, int8_t, IConvertible_ToSByte, app::SByte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D8860, uint8_t, IConvertible_ToByte, app::SByte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D89A0, int16_t, IConvertible_ToInt16, app::SByte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D8A40, uint16_t, IConvertible_ToUInt16, app::SByte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D8B80, int32_t, IConvertible_ToInt32, app::SByte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D8B90, uint32_t, IConvertible_ToUInt32, app::SByte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D8CD0, int64_t, IConvertible_ToInt64, app::SByte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D8D70, uint64_t, IConvertible_ToUInt64, app::SByte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D8EB0, float, IConvertible_ToSingle, app::SByte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D8F50, double, IConvertible_ToDouble, app::SByte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D8FF0, app::Decimal, IConvertible_ToDecimal, app::SByte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D9140, app::DateTime, IConvertible_ToDateTime, app::SByte__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001D9150, app::Object*, IConvertible_ToType, app::SByte__Boxed* this_ptr, app::Type* type, app::IFormatProvider* provider)
} // namespace app::classes::System::SByte
