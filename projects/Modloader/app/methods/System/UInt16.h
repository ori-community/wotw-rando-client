#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UInt16__Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/NumberStyles__Enum.h>
#include <Modloader/app/structs/NumberFormatInfo.h>
#include <Modloader/app/structs/TypeCode__Enum.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::UInt16 {
    IL2CPP_REGISTER_METHOD(0x00204100, int32_t, CompareTo_1, (app::UInt16__Boxed * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04712150, UInt16_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E2A00, int32_t, CompareTo_2, (app::UInt16__Boxed * this_ptr, uint16_t value))
    IL2CPP_REGISTER_METHOD(0x00204110, bool, Equals_1, (app::UInt16__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x001303C0, bool, Equals_2, (app::UInt16__Boxed * this_ptr, uint16_t obj))
    IL2CPP_REGISTER_METHOD(0x00113CC0, int32_t, GetHashCode, (app::UInt16__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00204120, app::String*, ToString_1, (app::UInt16__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00204150, app::String*, ToString_2, (app::UInt16__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x00204180, app::String*, ToString_3, (app::UInt16__Boxed * this_ptr, app::String* format, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x027C4C80, uint16_t, Parse_1, (app::String * s))
    IL2CPP_REGISTER_METHOD(0x027C4CB0, uint16_t, Parse_2, (app::String * s, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x027C4CE0, uint16_t, Parse_3, (app::String * s, app::NumberStyles__Enum style, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x027C4D30, uint16_t, Parse_4, (app::String * s, app::NumberStyles__Enum style, app::NumberFormatInfo* info))
    IL2CPP_REGISTER_METHODINFO(0x04758B28, UInt16_Parse_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027C4E70, bool, TryParse_1, (app::String * s, app::NumberStyles__Enum style, app::IFormatProvider* provider, uint16_t* result))
    IL2CPP_REGISTER_METHOD(0x027C4F00, bool, TryParse_2, (app::String * s, app::NumberStyles__Enum style, app::NumberFormatInfo* info, uint16_t* result))
    IL2CPP_REGISTER_METHOD(0x002041C0, app::TypeCode__Enum, GetTypeCode, (app::UInt16__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002041D0, bool, IConvertible_ToBoolean, (app::UInt16__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x00204270, uint16_t, IConvertible_ToChar, (app::UInt16__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x00204310, int8_t, IConvertible_ToSByte, (app::UInt16__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x00204450, uint8_t, IConvertible_ToByte, (app::UInt16__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x00204590, int16_t, IConvertible_ToInt16, (app::UInt16__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x00113CC0, uint16_t, IConvertible_ToUInt16, (app::UInt16__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x002046D0, int32_t, IConvertible_ToInt32, (app::UInt16__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x00204770, uint32_t, IConvertible_ToUInt32, (app::UInt16__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x00204810, int64_t, IConvertible_ToInt64, (app::UInt16__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x002048B0, uint64_t, IConvertible_ToUInt64, (app::UInt16__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x00204950, float, IConvertible_ToSingle, (app::UInt16__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x002049F0, double, IConvertible_ToDouble, (app::UInt16__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x00204A90, app::Decimal, IConvertible_ToDecimal, (app::UInt16__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x00204BD0, app::DateTime, IConvertible_ToDateTime, (app::UInt16__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHODINFO(0x047682D0, UInt16_System_IConvertible_ToDateTime__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00204BE0, app::Object*, IConvertible_ToType, (app::UInt16__Boxed * this_ptr, app::Type* type, app::IFormatProvider* provider))
} // namespace app::classes::System::UInt16
