#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/DateTimeFormatInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/TimeSpan.h>

namespace app::classes::System::DateTimeFormat {
    IL2CPP_REGISTER_METHOD(0x028A6D20, void, FormatDigits_1, (app::StringBuilder * output_buffer, int32_t value, int32_t len))
    IL2CPP_REGISTER_METHOD(0x028A6DF0, void, FormatDigits_2, (app::StringBuilder * output_buffer, int32_t value, int32_t len, bool override_length_limit))
    IL2CPP_REGISTER_METHOD(0x028A6EF0, void, HebrewFormatDigits, (app::StringBuilder * output_buffer, int32_t digits))
    IL2CPP_REGISTER_METHOD(0x028A6FB0, int32_t, ParseRepeatPattern, (app::String * format, int32_t pos, char16_t pattern_char))
    IL2CPP_REGISTER_METHOD(0x028A7030, app::String*, FormatDayOfWeek, (int32_t day_of_week, int32_t repeat, app::DateTimeFormatInfo* dtfi))
    IL2CPP_REGISTER_METHOD(0x028A7080, app::String*, FormatMonth, (int32_t month, int32_t repeat_count, app::DateTimeFormatInfo* dtfi))
    IL2CPP_REGISTER_METHOD(0x028A70D0, app::String*, FormatHebrewMonthName, (app::DateTime time, int32_t month, int32_t repeat_count, app::DateTimeFormatInfo* dtfi))
    IL2CPP_REGISTER_METHOD(0x028A71A0, int32_t, ParseQuoteString, (app::String * format, int32_t pos, app::StringBuilder* result))
    IL2CPP_REGISTER_METHOD(0x028A73B0, int32_t, ParseNextChar, (app::String * format, int32_t pos))
    IL2CPP_REGISTER_METHOD(0x028A73F0, bool, IsUseGenitiveForm, (app::String * format, int32_t index, int32_t token_len, char16_t pattern_to_match))
    IL2CPP_REGISTER_METHOD(0x028A7510, app::String*, FormatCustomized, (app::DateTime date_time, app::String* format, app::DateTimeFormatInfo* dtfi, app::TimeSpan offset))
    IL2CPP_REGISTER_METHOD(0x028A8890, void, FormatCustomizedTimeZone, (app::DateTime date_time, app::TimeSpan offset, app::String* format, int32_t token_len, bool time_only, app::StringBuilder* result))
    IL2CPP_REGISTER_METHOD(0x028A8D20, void, FormatCustomizedRoundripTimeZone, (app::DateTime date_time, app::TimeSpan offset, app::StringBuilder* result))
    IL2CPP_REGISTER_METHOD(0x028A9060, app::String*, GetRealFormat, (app::String * format, app::DateTimeFormatInfo* dtfi))
    IL2CPP_REGISTER_METHOD(0x028A9700, app::String*, ExpandPredefinedFormat, (app::String * format, app::DateTime* date_time, app::DateTimeFormatInfo** dtfi, app::TimeSpan* offset))
    IL2CPP_REGISTER_METHOD(0x028A9B30, app::String*, Format_1, (app::DateTime date_time, app::String* format, app::DateTimeFormatInfo* dtfi))
    IL2CPP_REGISTER_METHOD(0x028A9C10, app::String*, Format_2, (app::DateTime date_time, app::String* format, app::DateTimeFormatInfo* dtfi, app::TimeSpan offset))
    IL2CPP_REGISTER_METHOD(0x028A9EE0, app::String__Array*, GetAllDateTimes_1, (app::DateTime date_time, char16_t format, app::DateTimeFormatInfo* dtfi))
    IL2CPP_REGISTER_METHOD(0x028AA370, app::String__Array*, GetAllDateTimes_2, (app::DateTime date_time, app::DateTimeFormatInfo* dtfi))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InvalidFormatForLocal, (app::String * format, app::DateTime date_time))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InvalidFormatForUtc, (app::String * format, app::DateTime date_time))
    IL2CPP_REGISTER_METHOD(0x028AA650, void, cctor, ())
} // namespace app::classes::System::DateTimeFormat
