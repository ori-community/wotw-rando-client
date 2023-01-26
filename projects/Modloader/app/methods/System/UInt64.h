#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UInt64__Boxed.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/NumberStyles__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeCode__Enum.h>

namespace app::classes::System::UInt64 {
    IL2CPP_REGISTER_METHOD(0x00205980, int32_t, CompareTo_1, (app::UInt64__Boxed * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo_2, (app::UInt64__Boxed * this_ptr, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x00205990, bool, Equals_1, (app::UInt64__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals_2, (app::UInt64__Boxed * this_ptr, uint64_t obj))
    IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (app::UInt64__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012F1B0, app::String*, ToString_1, (app::UInt64__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002059A0, app::String*, ToString_2, (app::UInt64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x002059D0, app::String*, ToString_3, (app::UInt64__Boxed * this_ptr, app::String* format))
    IL2CPP_REGISTER_METHOD(0x00205A10, app::String*, ToString_4, (app::UInt64__Boxed * this_ptr, app::String* format, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x027C5670, uint64_t, Parse_1, (app::String * s))
    IL2CPP_REGISTER_METHOD(0x027C56A0, uint64_t, Parse_2, (app::String * s, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x027C56D0, uint64_t, Parse_3, (app::String * s, app::NumberStyles__Enum style, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x027C5720, bool, TryParse, (app::String * s, app::NumberStyles__Enum style, app::IFormatProvider* provider, uint64_t* result))
    IL2CPP_REGISTER_METHOD(0x00205A50, app::TypeCode__Enum, GetTypeCode, (app::UInt64__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00205A60, bool, IConvertible_ToBoolean, (app::UInt64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x00205B00, char16_t, IConvertible_ToChar, (app::UInt64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x00205C40, int8_t, IConvertible_ToSByte, (app::UInt64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x00205D80, uint8_t, IConvertible_ToByte, (app::UInt64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x00205EC0, int16_t, IConvertible_ToInt16, (app::UInt64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x00206000, uint16_t, IConvertible_ToUInt16, (app::UInt64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x00206140, int32_t, IConvertible_ToInt32, (app::UInt64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x002061E0, uint32_t, IConvertible_ToUInt32, (app::UInt64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x00206280, int64_t, IConvertible_ToInt64, (app::UInt64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x00107C00, uint64_t, IConvertible_ToUInt64, (app::UInt64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x002063D0, float, IConvertible_ToSingle, (app::UInt64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x00206480, double, IConvertible_ToDouble, (app::UInt64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x00206530, app::Decimal, IConvertible_ToDecimal, (app::UInt64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x00206670, app::DateTime, IConvertible_ToDateTime, (app::UInt64__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x00206680, app::Object*, IConvertible_ToType, (app::UInt64__Boxed * this_ptr, app::Type* type, app::IFormatProvider* provider))
} // namespace app::classes::System::UInt64
