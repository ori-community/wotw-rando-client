#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Calendar.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/DayOfWeek__Enum.h>
#include <Modloader/app/structs/GregorianCalendar.h>
#include <Modloader/app/structs/GregorianCalendarTypes__Enum.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Globalization::GregorianCalendar {
    IL2CPP_REGISTER_METHOD(0x02610650, void, OnDeserialized, app::GregorianCalendar* this_ptr, app::StreamingContext ctx)
    IL2CPP_REGISTER_METHOD(0x02610770, app::DateTime, get_MinSupportedDateTime, app::GregorianCalendar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02610810, app::DateTime, get_MaxSupportedDateTime, app::GregorianCalendar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026108B0, app::Calendar*, GetDefaultInstance, )
    IL2CPP_REGISTER_METHOD(0x02610AA0, void, ctor_1, app::GregorianCalendar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02610AB0, void, ctor_2, app::GregorianCalendar* this_ptr, app::GregorianCalendarTypes__Enum type)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_ID, app::GregorianCalendar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02610C20, int32_t, GetDatePart, app::GregorianCalendar* this_ptr, int64_t ticks, int32_t part)
    IL2CPP_REGISTER_METHOD(0x02610E50, int32_t, GetDayOfMonth, app::GregorianCalendar* this_ptr, app::DateTime time)
    IL2CPP_REGISTER_METHOD(0x02610E80, app::DayOfWeek__Enum, GetDayOfWeek, app::GregorianCalendar* this_ptr, app::DateTime time)
    IL2CPP_REGISTER_METHOD(0x02610ED0, int32_t, GetDaysInMonth, app::GregorianCalendar* this_ptr, int32_t year, int32_t month, int32_t era)
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, GetEra, app::GregorianCalendar* this_ptr, app::DateTime time)
    IL2CPP_REGISTER_METHOD(0x026111E0, app::Int32__Array*, get_Eras, app::GregorianCalendar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02611290, int32_t, GetMonth, app::GregorianCalendar* this_ptr, app::DateTime time)
    IL2CPP_REGISTER_METHOD(0x026112C0, int32_t, GetMonthsInYear, app::GregorianCalendar* this_ptr, int32_t year, int32_t era)
    IL2CPP_REGISTER_METHOD(0x02611470, int32_t, GetYear, app::GregorianCalendar* this_ptr, app::DateTime time)
    IL2CPP_REGISTER_METHOD(0x026114A0, bool, IsLeapYear, app::GregorianCalendar* this_ptr, int32_t year, int32_t era)
    IL2CPP_REGISTER_METHOD(
        0x026116A0,
        app::DateTime,
        ToDateTime,
        app::GregorianCalendar* this_ptr,
        int32_t year,
        int32_t month,
        int32_t day,
        int32_t hour,
        int32_t minute,
        int32_t second,
        int32_t millisecond,
        int32_t era
    )
    IL2CPP_REGISTER_METHOD(
        0x026117E0,
        bool,
        TryToDateTime,
        app::GregorianCalendar* this_ptr,
        int32_t year,
        int32_t month,
        int32_t day,
        int32_t hour,
        int32_t minute,
        int32_t second,
        int32_t millisecond,
        int32_t era,
        app::DateTime* result
    )
    IL2CPP_REGISTER_METHOD(0x02611930, int32_t, get_TwoDigitYearMax, app::GregorianCalendar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02611970, int32_t, ToFourDigitYear, app::GregorianCalendar* this_ptr, int32_t year)
    IL2CPP_REGISTER_METHOD(0x02611BE0, void, cctor, )
} // namespace app::classes::System::Globalization::GregorianCalendar
