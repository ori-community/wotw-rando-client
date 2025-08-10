#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/DateTimeOffset.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/TimeSpan.h>

namespace app::classes::System::Xml::BinXmlDateTime {
    IL2CPP_REGISTER_METHOD(0x021E2430, void, Write2Dig, app::StringBuilder* sb, int32_t val)
    IL2CPP_REGISTER_METHOD(0x021E2560, void, Write4DigNeg, app::StringBuilder* sb, int32_t val)
    IL2CPP_REGISTER_METHOD(0x021E2660, void, Write3Dec, app::StringBuilder* sb, int32_t val)
    IL2CPP_REGISTER_METHOD(0x021E2810, void, WriteDate, app::StringBuilder* sb, int32_t yr, int32_t mnth, int32_t day)
    IL2CPP_REGISTER_METHOD(0x021E29F0, void, WriteTime, app::StringBuilder* sb, int32_t hr, int32_t min, int32_t sec, int32_t ms)
    IL2CPP_REGISTER_METHOD(0x021E2B30, void, WriteTimeFullPrecision, app::StringBuilder* sb, int32_t hr, int32_t min, int32_t sec, int32_t fraction)
    IL2CPP_REGISTER_METHOD(0x021E2E70, void, WriteTimeZone_1, app::StringBuilder* sb, app::TimeSpan zone)
    IL2CPP_REGISTER_METHOD(0x021E2FD0, void, WriteTimeZone_2, app::StringBuilder* sb, bool neg_time_zone, int32_t hr, int32_t min)
    IL2CPP_REGISTER_METHOD(
        0x021E3100,
        void,
        BreakDownXsdDateTime,
        int64_t val,
        int32_t* yr,
        int32_t* mnth,
        int32_t* day,
        int32_t* hr,
        int32_t* min,
        int32_t* sec,
        int32_t* ms
    )
    IL2CPP_REGISTER_METHOD(
        0x021E3320,
        void,
        BreakDownXsdDate,
        int64_t val,
        int32_t* yr,
        int32_t* mnth,
        int32_t* day,
        bool* neg_time_zone,
        int32_t* hr,
        int32_t* min
    )
    IL2CPP_REGISTER_METHOD(0x021E34E0, void, BreakDownXsdTime, int64_t val, int32_t* hr, int32_t* min, int32_t* sec, int32_t* ms)
    IL2CPP_REGISTER_METHOD(0x021E3650, app::String*, XsdDateTimeToString, int64_t val)
    IL2CPP_REGISTER_METHOD(0x021E39F0, app::String*, XsdDateToString, int64_t val)
    IL2CPP_REGISTER_METHOD(0x021E3D20, app::String*, XsdTimeToString, int64_t val)
    IL2CPP_REGISTER_METHOD(0x021E4010, app::String*, SqlDateTimeToString, int32_t dateticks, uint32_t timeticks)
    IL2CPP_REGISTER_METHOD(0x021E4150, app::DateTime, SqlDateTimeToDateTime, int32_t dateticks, uint32_t timeticks)
    IL2CPP_REGISTER_METHOD(0x021E42D0, app::String*, SqlSmallDateTimeToString, int16_t dateticks, uint16_t timeticks)
    IL2CPP_REGISTER_METHOD(0x021E4460, app::DateTime, SqlSmallDateTimeToDateTime, int16_t dateticks, uint16_t timeticks)
    IL2CPP_REGISTER_METHOD(0x021E4520, app::DateTime, XsdKatmaiDateToDateTime, app::Byte__Array* data, int32_t offset)
    IL2CPP_REGISTER_METHOD(0x021E45F0, app::DateTime, XsdKatmaiDateTimeToDateTime, app::Byte__Array* data, int32_t offset)
    IL2CPP_REGISTER_METHOD(0x021E46D0, app::DateTime, XsdKatmaiTimeToDateTime, app::Byte__Array* data, int32_t offset)
    IL2CPP_REGISTER_METHOD(0x021E4780, app::DateTimeOffset, XsdKatmaiDateOffsetToDateTimeOffset, app::Byte__Array* data, int32_t offset)
    IL2CPP_REGISTER_METHOD(0x021E4850, app::DateTimeOffset, XsdKatmaiDateTimeOffsetToDateTimeOffset, app::Byte__Array* data, int32_t offset)
    IL2CPP_REGISTER_METHOD(0x021E49A0, app::DateTimeOffset, XsdKatmaiTimeOffsetToDateTimeOffset, app::Byte__Array* data, int32_t offset)
    IL2CPP_REGISTER_METHOD(0x021E4A70, app::String*, XsdKatmaiDateToString, app::Byte__Array* data, int32_t offset)
    IL2CPP_REGISTER_METHOD(0x021E4D00, app::String*, XsdKatmaiDateTimeToString, app::Byte__Array* data, int32_t offset)
    IL2CPP_REGISTER_METHOD(0x021E4FE0, app::String*, XsdKatmaiTimeToString, app::Byte__Array* data, int32_t offset)
    IL2CPP_REGISTER_METHOD(0x021E52D0, app::String*, XsdKatmaiDateOffsetToString, app::Byte__Array* data, int32_t offset)
    IL2CPP_REGISTER_METHOD(0x021E5590, app::String*, XsdKatmaiDateTimeOffsetToString, app::Byte__Array* data, int32_t offset)
    IL2CPP_REGISTER_METHOD(0x021E5900, app::String*, XsdKatmaiTimeOffsetToString, app::Byte__Array* data, int32_t offset)
    IL2CPP_REGISTER_METHOD(0x021E5C80, int64_t, GetKatmaiDateTicks, app::Byte__Array* data, int32_t* pos)
    IL2CPP_REGISTER_METHOD(0x021E5D20, int64_t, GetKatmaiTimeTicks, app::Byte__Array* data, int32_t* pos)
    IL2CPP_REGISTER_METHOD(0x021E60B0, int64_t, GetKatmaiTimeZoneTicks, app::Byte__Array* data, int32_t pos)
    IL2CPP_REGISTER_METHOD(0x021E6120, int32_t, GetFractions_1, app::DateTime dt)
    IL2CPP_REGISTER_METHOD(0x021E6260, int32_t, GetFractions_2, app::DateTimeOffset dt)
    IL2CPP_REGISTER_METHOD(0x021E6420, void, cctor, )
} // namespace app::classes::System::Xml::BinXmlDateTime
