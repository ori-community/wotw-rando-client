#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Boolean__Boxed.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeCode__Enum.h>

namespace app::classes::System::Boolean {
    IL2CPP_REGISTER_METHOD(0x001E1560, int32_t, GetHashCode, app::Boolean__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001E1570, app::String*, ToString_1, app::Boolean__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001E1580, app::String*, ToString_2, app::Boolean__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E1590, bool, Equals_1, app::Boolean__Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x001D85A0, bool, Equals_2, app::Boolean__Boxed* this_ptr, bool obj)
    IL2CPP_REGISTER_METHOD(0x001E15A0, int32_t, CompareTo_1, app::Boolean__Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x001E15B0, int32_t, CompareTo_2, app::Boolean__Boxed* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0229DDD0, bool, Parse, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0229DF00, bool, TryParse, app::String* value, bool* result)
    IL2CPP_REGISTER_METHOD(0x0229E3D0, app::String*, TrimWhiteSpaceAndNull, app::String* value)
    IL2CPP_REGISTER_METHOD(0x001E15D0, app::TypeCode__Enum, GetTypeCode, app::Boolean__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001E15E0, bool, IConvertible_ToBoolean, app::Boolean__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E15F0, char16_t, IConvertible_ToChar, app::Boolean__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E1600, int8_t, IConvertible_ToSByte, app::Boolean__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E16A0, uint8_t, IConvertible_ToByte, app::Boolean__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E1740, int16_t, IConvertible_ToInt16, app::Boolean__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E17F0, uint16_t, IConvertible_ToUInt16, app::Boolean__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E18A0, int32_t, IConvertible_ToInt32, app::Boolean__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E1950, uint32_t, IConvertible_ToUInt32, app::Boolean__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E1A00, int64_t, IConvertible_ToInt64, app::Boolean__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E1AB0, uint64_t, IConvertible_ToUInt64, app::Boolean__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E1B60, float, IConvertible_ToSingle, app::Boolean__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E1C10, double, IConvertible_ToDouble, app::Boolean__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E1CC0, app::Decimal, IConvertible_ToDecimal, app::Boolean__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E1E10, app::DateTime, IConvertible_ToDateTime, app::Boolean__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x001E1E20, app::Object*, IConvertible_ToType, app::Boolean__Boxed* this_ptr, app::Type* type, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0229E6E0, void, cctor, )
} // namespace app::classes::System::Boolean
