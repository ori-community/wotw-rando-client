#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Enum_ValuesAndNames.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/Enum.h>
#include <Modloader/app/structs/Enum_EnumResult.h>
#include <Modloader/app/structs/Enum__Boxed.h>
#include <Modloader/app/structs/GameController_ProfilingConfiguration__Enum.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>
#include <Modloader/app/structs/KeyCode__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RuntimeType.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeCode__Enum.h>
#include <Modloader/app/structs/UInt64__Array.h>
#include <Modloader/app/structs/UberGCLogic_ResourceCollectPriorityMode__Enum.h>

namespace app::classes::System::Enum {
    IL2CPP_REGISTER_METHOD(0x01A10D70, app::Enum_ValuesAndNames*, GetCachedValuesAndNames, (app::RuntimeType * enum_type, bool get_names))
    IL2CPP_REGISTER_METHOD(0x01A11140, app::String*, InternalFormattedHexString, (app::Object * value))
    IL2CPP_REGISTER_METHOD(0x01A11560, app::String*, InternalFormat, (app::RuntimeType * e_t, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01A116D0, app::String*, InternalFlagsFormat, (app::RuntimeType * e_t, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01A11A70, uint64_t, ToUInt64, (app::Object * value))
    IL2CPP_REGISTER_METHOD(0x01A11C50, int32_t, InternalCompareTo, (app::Object * o1, app::Object* o2))
    IL2CPP_REGISTER_METHOD(0x01A11D70, app::RuntimeType*, InternalGetUnderlyingType, (app::RuntimeType * enum_type))
    IL2CPP_REGISTER_METHOD(0x01A11DC0, bool, GetEnumValuesAndNames, (app::RuntimeType * enum_type, app::UInt64__Array** values, app::String__Array** names))
    IL2CPP_REGISTER_METHOD(0x01A11E00, app::Object*, InternalBoxEnum, (app::RuntimeType * enum_type, int64_t value))
    IL2CPP_REGISTER_METHOD(0x01A11E30, app::Object*, Parse_1, (app::Type * enum_type, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01A11EE0, app::Object*, Parse_2, (app::Type * enum_type, app::String* value, bool ignore_case))
    IL2CPP_REGISTER_METHOD(0x01A12070, bool, TryParseEnum, (app::Type * enum_type, app::String* value, bool ignore_case, app::Enum_EnumResult* parse_result))
    IL2CPP_REGISTER_METHOD(0x01A12800, app::Type*, GetUnderlyingType, (app::Type * enum_type))
    IL2CPP_REGISTER_METHOD(0x01A128E0, app::Array*, GetValues, (app::Type * enum_type))
    IL2CPP_REGISTER_METHOD(0x01A129C0, app::UInt64__Array*, InternalGetValues, (app::RuntimeType * enum_type))
    IL2CPP_REGISTER_METHOD(0x01A12A70, app::String*, GetName, (app::Type * enum_type, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01A12B60, app::String__Array*, GetNames, (app::Type * enum_type))
    IL2CPP_REGISTER_METHOD(0x01A12C40, app::String__Array*, InternalGetNames, (app::RuntimeType * enum_type))
    IL2CPP_REGISTER_METHOD(0x01A12CF0, app::Object*, ToObject_1, (app::Type * enum_type, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01A13280, bool, IsDefined, (app::Type * enum_type, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01A13370, app::String*, Format, (app::Type * enum_type, app::Object* value, app::String* format))
    IL2CPP_REGISTER_METHOD(0x01A13AD0, app::Object*, get_value, (app::Enum__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A13AD0, app::Object*, GetValue, (app::Enum__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A13C10, bool, InternalHasFlag, (app::Enum__Boxed * this_ptr, app::Enum flags))
    IL2CPP_REGISTER_METHOD(0x01A13CC0, int32_t, get_hashcode, (app::Enum__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A13D40, bool, Equals, (app::Enum__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01A13CC0, int32_t, GetHashCode, (app::Enum__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A13D50, app::String*, ToString_1, (app::Enum__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A13F60, app::String*, ToString_2, (app::Enum__Boxed * this_ptr, app::String* format, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x01A13F70, int32_t, CompareTo, (app::Enum__Boxed * this_ptr, app::Object* target))
    IL2CPP_REGISTER_METHOD(0x01A14270, app::String*, ToString_3, (app::Enum__Boxed * this_ptr, app::String* format))
    IL2CPP_REGISTER_METHOD(0x01742A00, app::String*, ToString_4, (app::Enum__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x01A14AC0, bool, HasFlag, (app::Enum__Boxed * this_ptr, app::Enum flag))
    IL2CPP_REGISTER_METHOD(0x01A14D00, app::TypeCode__Enum, GetTypeCode, (app::Enum__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A150C0, bool, IConvertible_ToBoolean, (app::Enum__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x01A152B0, char16_t, IConvertible_ToChar, (app::Enum__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x01A154A0, int8_t, IConvertible_ToSByte, (app::Enum__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x01A15690, uint8_t, IConvertible_ToByte, (app::Enum__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x01A15880, int16_t, IConvertible_ToInt16, (app::Enum__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x01A15A70, uint16_t, IConvertible_ToUInt16, (app::Enum__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x01A15C60, int32_t, IConvertible_ToInt32, (app::Enum__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x01A15E50, uint32_t, IConvertible_ToUInt32, (app::Enum__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x01A16040, int64_t, IConvertible_ToInt64, (app::Enum__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x01A16230, uint64_t, IConvertible_ToUInt64, (app::Enum__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x01A16420, float, IConvertible_ToSingle, (app::Enum__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x01A16610, double, IConvertible_ToDouble, (app::Enum__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x01A16800, app::Decimal, IConvertible_ToDecimal, (app::Enum__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x01A16A10, app::DateTime, IConvertible_ToDateTime, (app::Enum__Boxed * this_ptr, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x01A16AE0, app::Object*, IConvertible_ToType, (app::Enum__Boxed * this_ptr, app::Type* type, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHOD(0x01A16BA0, app::Object*, ToObject_2, (app::Type * enum_type, int8_t value))
    IL2CPP_REGISTER_METHOD(0x01A16DC0, app::Object*, ToObject_3, (app::Type * enum_type, int16_t value))
    IL2CPP_REGISTER_METHOD(0x01A16FE0, app::Object*, ToObject_4, (app::Type * enum_type, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01A17200, app::Object*, ToObject_5, (app::Type * enum_type, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x01A17420, app::Object*, ToObject_6, (app::Type * enum_type, uint16_t value))
    IL2CPP_REGISTER_METHOD(0x01A17640, app::Object*, ToObject_7, (app::Type * enum_type, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x01A17860, app::Object*, ToObject_8, (app::Type * enum_type, int64_t value))
    IL2CPP_REGISTER_METHOD(0x01A17A80, app::Object*, ToObject_9, (app::Type * enum_type, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x01A17CA0, app::Object*, ToObject_10, (app::Type * enum_type, char16_t value))
    IL2CPP_REGISTER_METHOD(0x01A17EC0, app::Object*, ToObject_11, (app::Type * enum_type, bool value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Enum__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A180E0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01565B00, bool, TryParse_1, (app::String * value, app::UberGCLogic_ResourceCollectPriorityMode__Enum* result))
    IL2CPP_REGISTER_METHOD(0x01565B00, bool, TryParse_2, (app::String * value, app::KeyCode__Enum* result))
    IL2CPP_REGISTER_METHOD(0x01565B00, bool, TryParse_3, (app::String * value, app::GameController_ProfilingConfiguration__Enum* result))
    IL2CPP_REGISTER_METHOD(0x01565900, bool, TryParse_4, (app::String * value, bool ignore_case, app::Int32Enum__Enum* result))
    IL2CPP_REGISTER_METHOD(0x01565B00, bool, TryParse_5, (app::String * value, app::Int32Enum__Enum* result))
} // namespace app::classes::System::Enum
