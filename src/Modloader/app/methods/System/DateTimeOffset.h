#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Calendar.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/DateTimeOffset.h>
#include <Modloader/app/structs/DateTimeOffset__Boxed.h>
#include <Modloader/app/structs/DateTimeStyles__Enum.h>
#include <Modloader/app/structs/DayOfWeek__Enum.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/TimeSpan.h>

namespace app::classes::System::DateTimeOffset {
    IL2CPP_REGISTER_METHOD(0x00214B90, void, ctor_1, app::DateTimeOffset__Boxed* this_ptr, int64_t ticks, app::TimeSpan offset)
    IL2CPP_REGISTER_METHOD(0x00214BA0, void, ctor_2, app::DateTimeOffset__Boxed* this_ptr, app::DateTime date_time)
    IL2CPP_REGISTER_METHOD(0x00214BB0, void, ctor_3, app::DateTimeOffset__Boxed* this_ptr, app::DateTime date_time, app::TimeSpan offset)
    IL2CPP_REGISTER_METHOD(
        0x00214BC0,
        void,
        ctor_4,
        app::DateTimeOffset__Boxed* this_ptr,
        int32_t year,
        int32_t month,
        int32_t day,
        int32_t hour,
        int32_t minute,
        int32_t second,
        app::TimeSpan offset
    )
    IL2CPP_REGISTER_METHOD(
        0x00214CF0,
        void,
        ctor_5,
        app::DateTimeOffset__Boxed* this_ptr,
        int32_t year,
        int32_t month,
        int32_t day,
        int32_t hour,
        int32_t minute,
        int32_t second,
        int32_t millisecond,
        app::TimeSpan offset
    )
    IL2CPP_REGISTER_METHOD(
        0x00214E20,
        void,
        ctor_6,
        app::DateTimeOffset__Boxed* this_ptr,
        int32_t year,
        int32_t month,
        int32_t day,
        int32_t hour,
        int32_t minute,
        int32_t second,
        int32_t millisecond,
        app::Calendar* calendar,
        app::TimeSpan offset
    )
    IL2CPP_REGISTER_METHOD(0x028AAE10, app::DateTimeOffset, get_Now, )
    IL2CPP_REGISTER_METHOD(0x00214F60, app::DateTime, get_DateTime, app::DateTimeOffset__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00214F70, app::DateTime, get_UtcDateTime, app::DateTimeOffset__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00214F80, app::DateTime, get_LocalDateTime, app::DateTimeOffset__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00214F60, app::DateTime, get_ClockDateTime, app::DateTimeOffset__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00214FB0, app::DateTime, get_Date, app::DateTimeOffset__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00215000, int32_t, get_Day, app::DateTimeOffset__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00215030, app::DayOfWeek__Enum, get_DayOfWeek, app::DateTimeOffset__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00215090, int32_t, get_DayOfYear, app::DateTimeOffset__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002150C0, int32_t, get_Hour, app::DateTimeOffset__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00215120, int32_t, get_Millisecond, app::DateTimeOffset__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00215180, int32_t, get_Minute, app::DateTimeOffset__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002151E0, int32_t, get_Month, app::DateTimeOffset__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00215210, app::TimeSpan, get_Offset, app::DateTimeOffset__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00215240, int32_t, get_Second, app::DateTimeOffset__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002152A0, int64_t, get_Ticks, app::DateTimeOffset__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002152C0, int64_t, get_UtcTicks, app::DateTimeOffset__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002152E0, app::TimeSpan, get_TimeOfDay, app::DateTimeOffset__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00215320, int32_t, get_Year, app::DateTimeOffset__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x028AB0C0, int32_t, Compare, app::DateTimeOffset first, app::DateTimeOffset second)
    IL2CPP_REGISTER_METHOD(0x00215350, int32_t, IComparable_CompareTo, app::DateTimeOffset__Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x002154E0, int32_t, CompareTo, app::DateTimeOffset__Boxed* this_ptr, app::DateTimeOffset other)
    IL2CPP_REGISTER_METHOD(0x00215500, bool, Equals_1, app::DateTimeOffset__Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x00215510, bool, Equals_2, app::DateTimeOffset__Boxed* this_ptr, app::DateTimeOffset other)
    IL2CPP_REGISTER_METHOD(0x00215550, void, IDeserializationCallback_OnDeserialization, app::DateTimeOffset__Boxed* this_ptr, app::Object* sender)
    IL2CPP_REGISTER_METHOD(
        0x00215560,
        void,
        ISerializable_GetObjectData,
        app::DateTimeOffset__Boxed* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(0x00215710, void, ctor_7, app::DateTimeOffset__Boxed* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x002158A0, int32_t, GetHashCode, app::DateTimeOffset__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x028AB4F0, app::DateTimeOffset, Parse_1, app::String* input, app::IFormatProvider* format_provider)
    IL2CPP_REGISTER_METHOD(
        0x028AB5C0,
        app::DateTimeOffset,
        Parse_2,
        app::String* input,
        app::IFormatProvider* format_provider,
        app::DateTimeStyles__Enum styles
    )
    IL2CPP_REGISTER_METHOD(
        0x028AB830,
        app::DateTimeOffset,
        ParseExact,
        app::String* input,
        app::String__Array* formats,
        app::IFormatProvider* format_provider,
        app::DateTimeStyles__Enum styles
    )
    IL2CPP_REGISTER_METHOD(0x002158D0, int64_t, ToFileTime, app::DateTimeOffset__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00215910, int64_t, ToUnixTimeSeconds, app::DateTimeOffset__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00215960, int64_t, ToUnixTimeMilliseconds, app::DateTimeOffset__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002159B0, app::DateTimeOffset, ToLocalTime_1, app::DateTimeOffset__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00215A00, app::DateTimeOffset, ToLocalTime_2, app::DateTimeOffset__Boxed* this_ptr, bool throw_on_overflow)
    IL2CPP_REGISTER_METHOD(0x00215A60, app::String*, ToString_1, app::DateTimeOffset__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00215A70, app::String*, ToString_2, app::DateTimeOffset__Boxed* this_ptr, app::String* format)
    IL2CPP_REGISTER_METHOD(0x00215A80, app::String*, ToString_3, app::DateTimeOffset__Boxed* this_ptr, app::IFormatProvider* format_provider)
    IL2CPP_REGISTER_METHOD(
        0x00215A90,
        app::String*,
        ToString_4,
        app::DateTimeOffset__Boxed* this_ptr,
        app::String* format,
        app::IFormatProvider* format_provider
    )
    IL2CPP_REGISTER_METHOD(0x00215AA0, app::DateTimeOffset, ToUniversalTime, app::DateTimeOffset__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x028ABF50,
        bool,
        TryParse,
        app::String* input,
        app::IFormatProvider* format_provider,
        app::DateTimeStyles__Enum styles,
        app::DateTimeOffset* result
    )
    IL2CPP_REGISTER_METHOD(
        0x028AC220,
        bool,
        TryParseExact_1,
        app::String* input,
        app::String* format,
        app::IFormatProvider* format_provider,
        app::DateTimeStyles__Enum styles,
        app::DateTimeOffset* result
    )
    IL2CPP_REGISTER_METHOD(
        0x028AC500,
        bool,
        TryParseExact_2,
        app::String* input,
        app::String__Array* formats,
        app::IFormatProvider* format_provider,
        app::DateTimeStyles__Enum styles,
        app::DateTimeOffset* result
    )
    IL2CPP_REGISTER_METHOD(0x028AC7E0, int16_t, ValidateOffset, app::TimeSpan offset)
    IL2CPP_REGISTER_METHOD(0x028AC930, app::DateTime, ValidateDate, app::DateTime date_time, app::TimeSpan offset)
    IL2CPP_REGISTER_METHOD(0x028ACA30, app::DateTimeStyles__Enum, ValidateStyles, app::DateTimeStyles__Enum style, app::String* parameter_name)
    IL2CPP_REGISTER_METHOD(0x028ACBA0, app::DateTimeOffset, op_Implicit, app::DateTime date_time)
    IL2CPP_REGISTER_METHOD(0x028ACBC0, bool, op_Equality, app::DateTimeOffset left, app::DateTimeOffset right)
    IL2CPP_REGISTER_METHOD(0x028ACC90, bool, op_Inequality, app::DateTimeOffset left, app::DateTimeOffset right)
    IL2CPP_REGISTER_METHOD(0x028ACD60, void, cctor, )
    inline bool operator==(app::DateTimeOffset left, app::DateTimeOffset right) { return op_Equality(left, right); }
    inline bool operator!=(app::DateTimeOffset left, app::DateTimeOffset right) { return op_Inequality(left, right); }
} // namespace app::classes::System::DateTimeOffset
