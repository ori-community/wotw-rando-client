#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Globalization::Calendar {
    IL2CPP_REGISTER_METHOD(0x01A1E410, app::DateTime, get_MinSupportedDateTime, (app::Calendar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A1E4B0, app::DateTime, get_MaxSupportedDateTime, (app::Calendar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A1E550, void, ctor, (app::Calendar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, get_ID, (app::Calendar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0173D7B0, int32_t, get_BaseCalendarID, (app::Calendar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724AE0, bool, get_IsReadOnly, (app::Calendar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A1E560, app::Object *, Clone, (app::Calendar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A1E700, app::Calendar *, ReadOnly, (app::Calendar * calendar))
    IL2CPP_REGISTER_METHODINFO(0x04731AC8, Calendar_ReadOnly__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x007EA280, void, SetReadOnlyState, (app::Calendar * this_ptr, bool read_only))
    IL2CPP_REGISTER_METHOD(0x01A1E880, int32_t, get_CurrentEraValue, (app::Calendar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A1E960, bool, IsLeapYear, (app::Calendar * this_ptr, int32_t year))
    IL2CPP_REGISTER_METHOD(0x01A1E980, app::DateTime, ToDateTime, (app::Calendar * this_ptr, int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond))
    IL2CPP_REGISTER_METHOD(0x01A1E9E0, bool, TryToDateTime, (app::Calendar * this_ptr, int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era, app::DateTime * result))
    IL2CPP_REGISTER_METHOD(0x01A1EB20, bool, IsValidYear, (app::Calendar * this_ptr, int32_t year, int32_t era))
    IL2CPP_REGISTER_METHOD(0x01A1EBB0, bool, IsValidMonth, (app::Calendar * this_ptr, int32_t year, int32_t month, int32_t era))
    IL2CPP_REGISTER_METHOD(0x01A1EC30, bool, IsValidDay, (app::Calendar * this_ptr, int32_t year, int32_t month, int32_t day, int32_t era))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_TwoDigitYearMax, (app::Calendar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A1ECC0, int32_t, ToFourDigitYear, (app::Calendar * this_ptr, int32_t year))
    IL2CPP_REGISTER_METHODINFO(0x0477ACF8, Calendar_ToFourDigitYear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A1EE10, int32_t, GetSystemTwoDigitYearSetting, (int32_t cal_i_d, int32_t default_year_value))
}
