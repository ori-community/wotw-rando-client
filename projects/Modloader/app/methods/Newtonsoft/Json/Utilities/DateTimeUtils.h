#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/XmlDateTimeSerializationMode__Enum.h>
#include <Modloader/app/structs/DateTimeKind__Enum.h>
#include <Modloader/app/structs/DateTimeZoneHandling__Enum.h>
#include <Modloader/app/structs/StringReference.h>
#include <Modloader/app/structs/DateTimeOffset.h>
#include <Modloader/app/structs/DateTimeParser.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/TextWriter.h>
#include <Modloader/app/structs/DateFormatHandling__Enum.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Nullable_1_TimeSpan_.h>

namespace app::classes::Newtonsoft::Json::Utilities::DateTimeUtils {
    IL2CPP_REGISTER_METHOD(0x01C089A0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01C08AA0, app::TimeSpan, GetUtcOffset, (app::DateTime d))
    IL2CPP_REGISTER_METHOD(0x01C08AE0, app::XmlDateTimeSerializationMode__Enum, ToSerializationMode, (app::DateTimeKind__Enum kind))
    IL2CPP_REGISTER_METHODINFO(0x047122E8, DateTimeUtils_ToSerializationMode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01C08BC0, app::DateTime, EnsureDateTime, (app::DateTime value, app::DateTimeZoneHandling__Enum time_zone))
    IL2CPP_REGISTER_METHODINFO(0x0476B010, DateTimeUtils_EnsureDateTime__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01968A90, app::DateTime, SwitchToLocalTime, (app::DateTime value))
    IL2CPP_REGISTER_METHOD(0x01968B20, app::DateTime, SwitchToUtcTime, (app::DateTime value))
    IL2CPP_REGISTER_METHOD(0x01C08E00, int64_t, ToUniversalTicks_1, (app::DateTime date_time))
    IL2CPP_REGISTER_METHOD(0x01C08F00, int64_t, ToUniversalTicks_2, (app::DateTime date_time, app::TimeSpan offset))
    IL2CPP_REGISTER_METHOD(0x01C09070, int64_t, ConvertDateTimeToJavaScriptTicks_1, (app::DateTime date_time, app::TimeSpan offset))
    IL2CPP_REGISTER_METHOD(0x01C09130, int64_t, ConvertDateTimeToJavaScriptTicks_2, (app::DateTime date_time, bool convert_to_utc))
    IL2CPP_REGISTER_METHOD(0x01C092F0, int64_t, UniversialTicksToJavaScriptTicks, (int64_t universial_ticks))
    IL2CPP_REGISTER_METHOD(0x01C093B0, app::DateTime, ConvertJavaScriptTicksToDateTime, (int64_t java_script_ticks))
    IL2CPP_REGISTER_METHOD(0x01C09480, bool, TryParseDateTimeIso, (app::StringReference text, app::DateTimeZoneHandling__Enum date_time_zone_handling, app::DateTime* dt))
    IL2CPP_REGISTER_METHOD(0x01C09880, bool, TryParseDateTimeOffsetIso, (app::StringReference text, app::DateTimeOffset* dt))
    IL2CPP_REGISTER_METHOD(0x01C09A70, app::DateTime, CreateDateTime, (app::DateTimeParser date_time_parser))
    IL2CPP_REGISTER_METHOD(0x01C09B60, bool, TryParseDateTime_1, (app::StringReference s, app::DateTimeZoneHandling__Enum date_time_zone_handling, app::String* date_format_string, app::CultureInfo* culture, app::DateTime* dt))
    IL2CPP_REGISTER_METHOD(0x01C09F50, bool, TryParseDateTime_2, (app::String * s, app::DateTimeZoneHandling__Enum date_time_zone_handling, app::String* date_format_string, app::CultureInfo* culture, app::DateTime* dt))
    IL2CPP_REGISTER_METHOD(0x01C0A3A0, bool, TryParseDateTimeOffset_1, (app::StringReference s, app::String* date_format_string, app::CultureInfo* culture, app::DateTimeOffset* dt))
    IL2CPP_REGISTER_METHOD(0x01C0A750, bool, TryParseDateTimeOffset_2, (app::String * s, app::String* date_format_string, app::CultureInfo* culture, app::DateTimeOffset* dt))
    IL2CPP_REGISTER_METHOD(0x01C0ABB0, bool, TryParseMicrosoftDate, (app::StringReference text, int64_t* ticks, app::TimeSpan* offset, app::DateTimeKind__Enum* kind))
    IL2CPP_REGISTER_METHOD(0x01C0AD80, bool, TryParseDateTimeMicrosoft, (app::StringReference text, app::DateTimeZoneHandling__Enum date_time_zone_handling, app::DateTime* dt))
    IL2CPP_REGISTER_METHOD(0x01C0AF60, bool, TryParseDateTimeExact, (app::String * text, app::DateTimeZoneHandling__Enum date_time_zone_handling, app::String* date_format_string, app::CultureInfo* culture, app::DateTime* dt))
    IL2CPP_REGISTER_METHOD(0x01C0B090, bool, TryParseDateTimeOffsetMicrosoft, (app::StringReference text, app::DateTimeOffset* dt))
    IL2CPP_REGISTER_METHOD(0x01C0B210, bool, TryParseDateTimeOffsetExact, (app::String * text, app::String* date_format_string, app::CultureInfo* culture, app::DateTimeOffset* dt))
    IL2CPP_REGISTER_METHOD(0x01C0B320, bool, TryReadOffset, (app::StringReference offset_text, int32_t start_index, app::TimeSpan* offset))
    IL2CPP_REGISTER_METHOD(0x01C0B500, void, WriteDateTimeString_1, (app::TextWriter * writer, app::DateTime value, app::DateFormatHandling__Enum format, app::String* format_string, app::CultureInfo* culture))
    IL2CPP_REGISTER_METHOD(0x01C0B6B0, int32_t, WriteDateTimeString_2, (app::Char__Array * chars, int32_t start, app::DateTime value, app::Nullable_1_TimeSpan_ offset, app::DateTimeKind__Enum kind, app::DateFormatHandling__Enum format))
    IL2CPP_REGISTER_METHOD(0x01C0BAA0, int32_t, WriteDefaultIsoDate, (app::Char__Array * chars, int32_t start, app::DateTime dt))
    IL2CPP_REGISTER_METHOD(0x01C0C070, void, CopyIntToCharArray, (app::Char__Array * chars, int32_t start, int32_t value, int32_t digits))
    IL2CPP_REGISTER_METHOD(0x01C0C0F0, int32_t, WriteDateTimeOffset, (app::Char__Array * chars, int32_t start, app::TimeSpan offset, app::DateFormatHandling__Enum format))
    IL2CPP_REGISTER_METHOD(0x01C0C350, void, WriteDateTimeOffsetString, (app::TextWriter * writer, app::DateTimeOffset value, app::DateFormatHandling__Enum format, app::String* format_string, app::CultureInfo* culture))
    IL2CPP_REGISTER_METHOD(0x01C0C520, void, GetDateValues, (app::DateTime td, int32_t* year, int32_t* month, int32_t* day))
} // namespace app::classes::Newtonsoft::Json::Utilities::DateTimeUtils
