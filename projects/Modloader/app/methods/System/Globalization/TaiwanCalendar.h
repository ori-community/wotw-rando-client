#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Calendar.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/TaiwanCalendar.h>
#include <Modloader/app/structs/DayOfWeek__Enum.h>
#include <Modloader/app/structs/Int32__Array.h>

namespace app::classes::System::Globalization::TaiwanCalendar {
    IL2CPP_REGISTER_METHOD(0x01DEC880, app::Calendar*, GetDefaultInstance, ())
    IL2CPP_REGISTER_METHOD(0x01DECA70, app::DateTime, get_MinSupportedDateTime, (app::TaiwanCalendar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DECB10, app::DateTime, get_MaxSupportedDateTime, (app::TaiwanCalendar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DECBB0, void, ctor, (app::TaiwanCalendar * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478B0E0, TaiwanCalendar__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00910BD0, int32_t, get_ID, (app::TaiwanCalendar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DECE80, int32_t, GetDaysInMonth, (app::TaiwanCalendar * this_ptr, int32_t year, int32_t month, int32_t era))
    IL2CPP_REGISTER_METHOD(0x01DECEB0, int32_t, GetDayOfMonth, (app::TaiwanCalendar * this_ptr, app::DateTime time))
    IL2CPP_REGISTER_METHOD(0x01DECEF0, app::DayOfWeek__Enum, GetDayOfWeek, (app::TaiwanCalendar * this_ptr, app::DateTime time))
    IL2CPP_REGISTER_METHOD(0x01DECF60, int32_t, GetMonthsInYear, (app::TaiwanCalendar * this_ptr, int32_t year, int32_t era))
    IL2CPP_REGISTER_METHOD(0x01DECF90, int32_t, GetEra, (app::TaiwanCalendar * this_ptr, app::DateTime time))
    IL2CPP_REGISTER_METHOD(0x01DECFB0, int32_t, GetMonth, (app::TaiwanCalendar * this_ptr, app::DateTime time))
    IL2CPP_REGISTER_METHOD(0x01DECFF0, int32_t, GetYear, (app::TaiwanCalendar * this_ptr, app::DateTime time))
    IL2CPP_REGISTER_METHOD(0x01DED010, bool, IsLeapYear, (app::TaiwanCalendar * this_ptr, int32_t year, int32_t era))
    IL2CPP_REGISTER_METHOD(0x01DED030, app::DateTime, ToDateTime, (app::TaiwanCalendar * this_ptr, int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era))
    IL2CPP_REGISTER_METHOD(0x01DED060, app::Int32__Array*, get_Eras, (app::TaiwanCalendar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DED080, int32_t, get_TwoDigitYearMax, (app::TaiwanCalendar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DED0C0, int32_t, ToFourDigitYear, (app::TaiwanCalendar * this_ptr, int32_t year))
    IL2CPP_REGISTER_METHODINFO(0x04786B78, TaiwanCalendar_ToFourDigitYear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DED290, void, cctor, ())
} // namespace app::classes::System::Globalization::TaiwanCalendar
