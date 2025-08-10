#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Calendar.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/DateTimeKind__Enum.h>
#include <Modloader/app/structs/DateTimeStyles__Enum.h>
#include <Modloader/app/structs/DateTime__Boxed.h>
#include <Modloader/app/structs/DayOfWeek__Enum.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeCode__Enum.h>

namespace app::classes::System::DateTime {
    IL2CPP_REGISTER_METHOD(0x00213D60, void, ctor_1, app::DateTime__Boxed* this_ptr, int64_t ticks)
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor_2, app::DateTime__Boxed* this_ptr, uint64_t date_data)
    IL2CPP_REGISTER_METHOD(0x00213D70, void, ctor_3, app::DateTime__Boxed* this_ptr, int64_t ticks, app::DateTimeKind__Enum kind)
    IL2CPP_REGISTER_METHOD(0x00213D80, void, ctor_4, app::DateTime__Boxed* this_ptr, int64_t ticks, app::DateTimeKind__Enum kind, bool is_ambiguous_dst)
    IL2CPP_REGISTER_METHOD(0x00213D90, void, ctor_5, app::DateTime__Boxed* this_ptr, int32_t year, int32_t month, int32_t day)
    IL2CPP_REGISTER_METHOD(0x00213DA0, void, ctor_6, app::DateTime__Boxed* this_ptr, int32_t year, int32_t month, int32_t day, app::Calendar* calendar)
    IL2CPP_REGISTER_METHOD(
        0x00213DD0,
        void,
        ctor_7,
        app::DateTime__Boxed* this_ptr,
        int32_t year,
        int32_t month,
        int32_t day,
        int32_t hour,
        int32_t minute,
        int32_t second
    )
    IL2CPP_REGISTER_METHOD(
        0x00213DE0,
        void,
        ctor_8,
        app::DateTime__Boxed* this_ptr,
        int32_t year,
        int32_t month,
        int32_t day,
        int32_t hour,
        int32_t minute,
        int32_t second,
        app::DateTimeKind__Enum kind
    )
    IL2CPP_REGISTER_METHOD(
        0x00213DF0,
        void,
        ctor_9,
        app::DateTime__Boxed* this_ptr,
        int32_t year,
        int32_t month,
        int32_t day,
        int32_t hour,
        int32_t minute,
        int32_t second,
        app::Calendar* calendar
    )
    IL2CPP_REGISTER_METHOD(
        0x00213E00,
        void,
        ctor_10,
        app::DateTime__Boxed* this_ptr,
        int32_t year,
        int32_t month,
        int32_t day,
        int32_t hour,
        int32_t minute,
        int32_t second,
        int32_t millisecond
    )
    IL2CPP_REGISTER_METHOD(
        0x00213E10,
        void,
        ctor_11,
        app::DateTime__Boxed* this_ptr,
        int32_t year,
        int32_t month,
        int32_t day,
        int32_t hour,
        int32_t minute,
        int32_t second,
        int32_t millisecond,
        app::DateTimeKind__Enum kind
    )
    IL2CPP_REGISTER_METHOD(
        0x00213E20,
        void,
        ctor_12,
        app::DateTime__Boxed* this_ptr,
        int32_t year,
        int32_t month,
        int32_t day,
        int32_t hour,
        int32_t minute,
        int32_t second,
        int32_t millisecond,
        app::Calendar* calendar
    )
    IL2CPP_REGISTER_METHOD(
        0x00213E30,
        void,
        ctor_13,
        app::DateTime__Boxed* this_ptr,
        int32_t year,
        int32_t month,
        int32_t day,
        int32_t hour,
        int32_t minute,
        int32_t second,
        int32_t millisecond,
        app::Calendar* calendar,
        app::DateTimeKind__Enum kind
    )
    IL2CPP_REGISTER_METHOD(0x00213E40, void, ctor_14, app::DateTime__Boxed* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x00213E60, int64_t, get_InternalTicks, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00213E80, uint64_t, get_InternalKind, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00213EA0, app::DateTime, Add_1, app::DateTime__Boxed* this_ptr, app::TimeSpan value)
    IL2CPP_REGISTER_METHOD(0x00213EB0, app::DateTime, Add_2, app::DateTime__Boxed* this_ptr, double value, int32_t scale)
    IL2CPP_REGISTER_METHOD(0x00213EC0, app::DateTime, AddDays, app::DateTime__Boxed* this_ptr, double value)
    IL2CPP_REGISTER_METHOD(0x00213ED0, app::DateTime, AddHours, app::DateTime__Boxed* this_ptr, double value)
    IL2CPP_REGISTER_METHOD(0x00213EE0, app::DateTime, AddMilliseconds, app::DateTime__Boxed* this_ptr, double value)
    IL2CPP_REGISTER_METHOD(0x00213EF0, app::DateTime, AddMonths, app::DateTime__Boxed* this_ptr, int32_t months)
    IL2CPP_REGISTER_METHOD(0x00213F00, app::DateTime, AddSeconds, app::DateTime__Boxed* this_ptr, double value)
    IL2CPP_REGISTER_METHOD(0x00213EA0, app::DateTime, AddTicks, app::DateTime__Boxed* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x00213F10, app::DateTime, AddYears, app::DateTime__Boxed* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x028A3200, int32_t, Compare, app::DateTime t1, app::DateTime t2)
    IL2CPP_REGISTER_METHOD(0x00213F20, int32_t, CompareTo_1, app::DateTime__Boxed* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x00214050, int32_t, CompareTo_2, app::DateTime__Boxed* this_ptr, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x028A3220, int64_t, DateToTicks, int32_t year, int32_t month, int32_t day)
    IL2CPP_REGISTER_METHOD(0x028A3460, int64_t, TimeToTicks, int32_t hour, int32_t minute, int32_t second)
    IL2CPP_REGISTER_METHOD(0x028A3560, int32_t, DaysInMonth, int32_t year, int32_t month)
    IL2CPP_REGISTER_METHOD(0x00214080, bool, Equals_1, app::DateTime__Boxed* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x00214090, bool, Equals_2, app::DateTime__Boxed* this_ptr, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x028A37F0, app::DateTime, FromBinary, int64_t date_data)
    IL2CPP_REGISTER_METHOD(0x028A3AB0, app::DateTime, FromBinaryRaw, int64_t date_data)
    IL2CPP_REGISTER_METHOD(0x028A3BA0, app::DateTime, FromFileTime, int64_t file_time)
    IL2CPP_REGISTER_METHOD(0x028A3C50, app::DateTime, FromFileTimeUtc, int64_t file_time)
    IL2CPP_REGISTER_METHOD(
        0x002140B0,
        void,
        ISerializable_GetObjectData,
        app::DateTime__Boxed* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(0x002141A0, bool, IsDaylightSavingTime, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x028A3D50, app::DateTime, SpecifyKind, app::DateTime value, app::DateTimeKind__Enum kind)
    IL2CPP_REGISTER_METHOD(0x00214300, int64_t, ToBinary, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00107C00, int64_t, ToBinaryRaw, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002143A0, app::DateTime, get_Date, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002143E0, int32_t, GetDatePart, app::DateTime__Boxed* this_ptr, int32_t part)
    IL2CPP_REGISTER_METHOD(0x001C5E10, int32_t, get_Day, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002143F0, app::DayOfWeek__Enum, get_DayOfWeek, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00214440, int32_t, get_DayOfYear, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00214450, int32_t, GetHashCode, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001C5E20, int32_t, get_Hour, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00214470, bool, IsAmbiguousDaylightSavingTime, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00214490, app::DateTimeKind__Enum, get_Kind, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002144C0, int32_t, get_Millisecond, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001C5E70, int32_t, get_Minute, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001C5E00, int32_t, get_Month, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x028A4000, app::DateTime, get_Now, )
    IL2CPP_REGISTER_METHOD(0x028A4150, app::DateTime, get_UtcNow, )
    IL2CPP_REGISTER_METHOD(0x028A4210, int64_t, GetSystemTimeAsFileTime, )
    IL2CPP_REGISTER_METHOD(0x001C5EC0, int32_t, get_Second, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00213E60, int64_t, get_Ticks, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00214510, app::TimeSpan, get_TimeOfDay, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001C5DF0, int32_t, get_Year, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x028A4230, bool, IsLeapYear, int32_t year)
    IL2CPP_REGISTER_METHOD(0x028A4360, app::DateTime, Parse_1, app::String* s, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x028A4440, app::DateTime, Parse_2, app::String* s, app::IFormatProvider* provider, app::DateTimeStyles__Enum styles)
    IL2CPP_REGISTER_METHOD(0x028A4540, app::DateTime, ParseExact_1, app::String* s, app::String* format, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(
        0x028A4630,
        app::DateTime,
        ParseExact_2,
        app::String* s,
        app::String* format,
        app::IFormatProvider* provider,
        app::DateTimeStyles__Enum style
    )
    IL2CPP_REGISTER_METHOD(
        0x028A4750,
        app::DateTime,
        ParseExact_3,
        app::String* s,
        app::String__Array* formats,
        app::IFormatProvider* provider,
        app::DateTimeStyles__Enum style
    )
    IL2CPP_REGISTER_METHOD(0x00214540, app::TimeSpan, Subtract, app::DateTime__Boxed* this_ptr, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x028A4970, double, TicksToOADate, int64_t value)
    IL2CPP_REGISTER_METHOD(0x00214560, double, ToOADate, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00214570, int64_t, ToFileTime, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002145B0, int64_t, ToFileTimeUtc, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002145C0, app::DateTime, ToLocalTime_1, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002145D0, app::DateTime, ToLocalTime_2, app::DateTime__Boxed* this_ptr, bool throw_on_overflow)
    IL2CPP_REGISTER_METHOD(0x002145E0, app::String*, ToLongDateString, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002146C0, app::String*, ToLongTimeString, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002146D0, app::String*, ToShortDateString, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002147B0, app::String*, ToShortTimeString, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00214890, app::String*, ToString_1, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002148A0, app::String*, ToString_2, app::DateTime__Boxed* this_ptr, app::String* format)
    IL2CPP_REGISTER_METHOD(0x002148B0, app::String*, ToString_3, app::DateTime__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x002148C0, app::String*, ToString_4, app::DateTime__Boxed* this_ptr, app::String* format, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x002148D0, app::DateTime, ToUniversalTime, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x028A5480, bool, TryParse_1, app::String* s, app::DateTime* result)
    IL2CPP_REGISTER_METHOD(
        0x028A5570,
        bool,
        TryParse_2,
        app::String* s,
        app::IFormatProvider* provider,
        app::DateTimeStyles__Enum styles,
        app::DateTime* result
    )
    IL2CPP_REGISTER_METHOD(
        0x028A5690,
        bool,
        TryParseExact_1,
        app::String* s,
        app::String* format,
        app::IFormatProvider* provider,
        app::DateTimeStyles__Enum style,
        app::DateTime* result
    )
    IL2CPP_REGISTER_METHOD(
        0x028A58B0,
        bool,
        TryParseExact_2,
        app::String* s,
        app::String__Array* formats,
        app::IFormatProvider* provider,
        app::DateTimeStyles__Enum style,
        app::DateTime* result
    )
    IL2CPP_REGISTER_METHOD(0x028A5AD0, app::DateTime, op_Addition, app::DateTime d, app::TimeSpan t)
    IL2CPP_REGISTER_METHOD(0x028A5BE0, app::DateTime, op_Subtraction_1, app::DateTime d, app::TimeSpan t)
    IL2CPP_REGISTER_METHOD(0x028A5CE0, app::TimeSpan, op_Subtraction_2, app::DateTime d1, app::DateTime d2)
    IL2CPP_REGISTER_METHOD(0x028A5D00, bool, op_Equality, app::DateTime d1, app::DateTime d2)
    IL2CPP_REGISTER_METHOD(0x028A5D20, bool, op_Inequality, app::DateTime d1, app::DateTime d2)
    IL2CPP_REGISTER_METHOD(0x028A5D40, bool, op_LessThan, app::DateTime t1, app::DateTime t2)
    IL2CPP_REGISTER_METHOD(0x028A5D60, bool, op_LessThanOrEqual, app::DateTime t1, app::DateTime t2)
    IL2CPP_REGISTER_METHOD(0x028A5D80, bool, op_GreaterThan, app::DateTime t1, app::DateTime t2)
    IL2CPP_REGISTER_METHOD(0x028A5DA0, bool, op_GreaterThanOrEqual, app::DateTime t1, app::DateTime t2)
    IL2CPP_REGISTER_METHOD(0x00214900, app::String__Array*, GetDateTimeFormats_1, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002149C0, app::String__Array*, GetDateTimeFormats_2, app::DateTime__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x002149D0, app::TypeCode__Enum, GetTypeCode, app::DateTime__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002149E0, bool, IConvertible_ToBoolean, app::DateTime__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x002149F0, char16_t, IConvertible_ToChar, app::DateTime__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x00214A00, int8_t, IConvertible_ToSByte, app::DateTime__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x00214A10, uint8_t, IConvertible_ToByte, app::DateTime__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x00214A20, int16_t, IConvertible_ToInt16, app::DateTime__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x00214A30, uint16_t, IConvertible_ToUInt16, app::DateTime__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x00214A40, int32_t, IConvertible_ToInt32, app::DateTime__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x00214A50, uint32_t, IConvertible_ToUInt32, app::DateTime__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x00214A60, int64_t, IConvertible_ToInt64, app::DateTime__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x00214A70, uint64_t, IConvertible_ToUInt64, app::DateTime__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x00214A80, float, IConvertible_ToSingle, app::DateTime__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x00214A90, double, IConvertible_ToDouble, app::DateTime__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x00214AA0, app::Decimal, IConvertible_ToDecimal, app::DateTime__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x00107C00, app::DateTime, IConvertible_ToDateTime, app::DateTime__Boxed* this_ptr, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x00214AB0, app::Object*, IConvertible_ToType, app::DateTime__Boxed* this_ptr, app::Type* type, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(
        0x028A6930,
        bool,
        TryCreate,
        int32_t year,
        int32_t month,
        int32_t day,
        int32_t hour,
        int32_t minute,
        int32_t second,
        int32_t millisecond,
        app::DateTime* result
    )
    IL2CPP_REGISTER_METHOD(0x028A6BD0, void, cctor, )
    inline app::DateTime operator+(app::DateTime d, app::TimeSpan t) { return op_Addition(d, t); }
    inline app::DateTime operator-(app::DateTime d, app::TimeSpan t) { return op_Subtraction_1(d, t); }
    inline app::TimeSpan operator-(app::DateTime d1, app::DateTime d2) { return op_Subtraction_2(d1, d2); }
    inline bool operator==(app::DateTime d1, app::DateTime d2) { return op_Equality(d1, d2); }
    inline bool operator!=(app::DateTime d1, app::DateTime d2) { return op_Inequality(d1, d2); }
    inline bool operator<(app::DateTime t1, app::DateTime t2) { return op_LessThan(t1, t2); }
    inline bool operator<=(app::DateTime t1, app::DateTime t2) { return op_LessThanOrEqual(t1, t2); }
    inline bool operator>(app::DateTime t1, app::DateTime t2) { return op_GreaterThan(t1, t2); }
    inline bool operator>=(app::DateTime t1, app::DateTime t2) { return op_GreaterThanOrEqual(t1, t2); }
} // namespace app::classes::System::DateTime
