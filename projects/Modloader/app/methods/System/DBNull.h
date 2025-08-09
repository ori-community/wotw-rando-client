#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DBNull.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeCode__Enum.h>

namespace app::classes::System::DBNull {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, app::DBNull* this_ptr)
    IL2CPP_REGISTER_METHOD(0x028A0D90, void, ctor_2, app::DBNull* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x028A0E00, void, GetObjectData, app::DBNull* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x028A0E30, app::String*, ToString_1, app::DBNull* this_ptr)
    IL2CPP_REGISTER_METHOD(0x028A0EB0, app::String*, ToString_2, app::DBNull* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::TypeCode__Enum, GetTypeCode, app::DBNull* this_ptr)
    IL2CPP_REGISTER_METHOD(0x028A0F30, bool, IConvertible_ToBoolean, app::DBNull* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x028A0FA0, char16_t, IConvertible_ToChar, app::DBNull* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x028A1010, int8_t, IConvertible_ToSByte, app::DBNull* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x028A1080, uint8_t, IConvertible_ToByte, app::DBNull* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x028A10F0, int16_t, IConvertible_ToInt16, app::DBNull* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x028A1160, uint16_t, IConvertible_ToUInt16, app::DBNull* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x028A11D0, int32_t, IConvertible_ToInt32, app::DBNull* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x028A1240, uint32_t, IConvertible_ToUInt32, app::DBNull* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x028A12B0, int64_t, IConvertible_ToInt64, app::DBNull* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x028A1320, uint64_t, IConvertible_ToUInt64, app::DBNull* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x028A1390, float, IConvertible_ToSingle, app::DBNull* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x028A1400, double, IConvertible_ToDouble, app::DBNull* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x028A1470, app::Decimal, IConvertible_ToDecimal, app::DBNull* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x028A14E0, app::DateTime, IConvertible_ToDateTime, app::DBNull* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x028A1550, app::Object*, IConvertible_ToType, app::DBNull* this_ptr, app::Type* type, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x028A1610, void, cctor, )
} // namespace app::classes::System::DBNull
