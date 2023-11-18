#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlDateTime__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlDateTime__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlDateTime__StaticFields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/SqlDateTime.h>
#include <Modloader/app/structs/TimeSpan.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED) && defined(IL2CPP_STRUCT_TimeSpan_DEFINED) && defined(IL2CPP_STRUCT_SqlDateTime_DEFINED)
#define IL2CPP_STRUCT_SqlDateTime__StaticFields_DEFINED
struct Int32__Array;
struct String;
struct String__Array;
struct SqlDateTime__StaticFields {
    double s_SQLTicksPerMillisecond;
    int32_t SQLTicksPerSecond;
    int32_t SQLTicksPerMinute;
    int32_t SQLTicksPerHour;
    int32_t s_SQLTicksPerDay;
    int64_t s_ticksPerSecond;
    struct DateTime s_SQLBaseDate;
    int64_t s_SQLBaseDateTicks;
    int32_t s_minYear;
    int32_t s_maxYear;
    int32_t s_minDay;
    int32_t s_maxDay;
    int32_t s_minTime;
    int32_t s_maxTime;
    int32_t s_dayBase;
    struct Int32__Array* s_daysToMonth365;
    struct Int32__Array* s_daysToMonth366;
    struct DateTime s_minDateTime;
    struct DateTime s_maxDateTime;
    struct TimeSpan s_minTimeSpan;
    struct TimeSpan s_maxTimeSpan;
    struct String* s_ISO8601_DateTimeFormat;
    struct String__Array* s_dateTimeFormats;
    struct SqlDateTime MinValue;
    struct SqlDateTime MaxValue;
    struct SqlDateTime Null;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlDateTime__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SqlDateTime__StaticFields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_SqlDateTime__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlDateTime__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SqlDateTime__StaticFields_FWDDECL)
#include <Modloader/app/structs/SqlDateTime__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlDateTime__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
