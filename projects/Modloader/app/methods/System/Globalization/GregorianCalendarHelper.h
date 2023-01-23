#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GregorianCalendarHelper.h>
#include <Modloader/app/structs/Calendar.h>
#include <Modloader/app/structs/EraInfo__Array.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/DayOfWeek__Enum.h>
#include <Modloader/app/structs/Int32__Array.h>

namespace app::classes::System::Globalization::GregorianCalendarHelper {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_MaxYear, (app::GregorianCalendarHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02611CC0, void, ctor, (app::GregorianCalendarHelper * this_ptr, app::Calendar* cal, app::EraInfo__Array* era_info))
    IL2CPP_REGISTER_METHOD(0x02611D80, int32_t, GetGregorianYear, (app::GregorianCalendarHelper * this_ptr, int32_t year, int32_t era))
    IL2CPP_REGISTER_METHODINFO(0x04754BF8, GregorianCalendarHelper_GetGregorianYear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x026120C0, bool, IsValidYear, (app::GregorianCalendarHelper * this_ptr, int32_t year, int32_t era))
    IL2CPP_REGISTER_METHOD(0x026121B0, int32_t, GetDatePart, (app::GregorianCalendarHelper * this_ptr, int64_t ticks, int32_t part))
    IL2CPP_REGISTER_METHOD(0x02612410, int64_t, GetAbsoluteDate, (int32_t year, int32_t month, int32_t day))
    IL2CPP_REGISTER_METHODINFO(0x04730C38, GregorianCalendarHelper_GetAbsoluteDate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02612660, int64_t, DateToTicks, (int32_t year, int32_t month, int32_t day))
    IL2CPP_REGISTER_METHOD(0x02612720, int64_t, TimeToTicks, (int32_t hour, int32_t minute, int32_t second, int32_t millisecond))
    IL2CPP_REGISTER_METHODINFO(0x04761E28, GregorianCalendarHelper_TimeToTicks__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02612910, void, CheckTicksRange, (app::GregorianCalendarHelper * this_ptr, int64_t ticks))
    IL2CPP_REGISTER_METHODINFO(0x04729448, GregorianCalendarHelper_CheckTicksRange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02612B00, int32_t, GetDayOfMonth, (app::GregorianCalendarHelper * this_ptr, app::DateTime time))
    IL2CPP_REGISTER_METHOD(0x02612B30, app::DayOfWeek__Enum, GetDayOfWeek, (app::GregorianCalendarHelper * this_ptr, app::DateTime time))
    IL2CPP_REGISTER_METHOD(0x02612BA0, int32_t, GetDaysInMonth, (app::GregorianCalendarHelper * this_ptr, int32_t year, int32_t month, int32_t era))
    IL2CPP_REGISTER_METHODINFO(0x04777530, GregorianCalendarHelper_GetDaysInMonth__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02612DA0, int32_t, GetEra, (app::GregorianCalendarHelper * this_ptr, app::DateTime time))
    IL2CPP_REGISTER_METHODINFO(0x04770AF8, GregorianCalendarHelper_GetEra__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02612EF0, app::Int32__Array*, get_Eras, (app::GregorianCalendarHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02613160, int32_t, GetMonth, (app::GregorianCalendarHelper * this_ptr, app::DateTime time))
    IL2CPP_REGISTER_METHOD(0x02613190, int32_t, GetMonthsInYear, (app::GregorianCalendarHelper * this_ptr, int32_t year, int32_t era))
    IL2CPP_REGISTER_METHOD(0x026131B0, int32_t, GetYear, (app::GregorianCalendarHelper * this_ptr, app::DateTime time))
    IL2CPP_REGISTER_METHODINFO(0x04791E78, GregorianCalendarHelper_GetYear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02613320, bool, IsLeapYear, (app::GregorianCalendarHelper * this_ptr, int32_t year, int32_t era))
    IL2CPP_REGISTER_METHOD(0x026133A0, app::DateTime, ToDateTime, (app::GregorianCalendarHelper * this_ptr, int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era))
    IL2CPP_REGISTER_METHOD(0x02613570, void, cctor, ())
} // namespace app::classes::System::Globalization::GregorianCalendarHelper
