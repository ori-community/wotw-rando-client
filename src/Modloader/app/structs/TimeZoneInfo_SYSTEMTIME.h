#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeZoneInfo_SYSTEMTIME_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeZoneInfo_SYSTEMTIME_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeZoneInfo_SYSTEMTIME_DEFINED)
#define IL2CPP_STRUCT_TimeZoneInfo_SYSTEMTIME_DEFINED
struct TimeZoneInfo_SYSTEMTIME {
    uint16_t wYear;
    uint16_t wMonth;
    uint16_t wDayOfWeek;
    uint16_t wDay;
    uint16_t wHour;
    uint16_t wMinute;
    uint16_t wSecond;
    uint16_t wMilliseconds;
};
#endif
#if !defined(IL2CPP_STRUCT_TimeZoneInfo_SYSTEMTIME_FWDDECL)
#define IL2CPP_STRUCT_TimeZoneInfo_SYSTEMTIME_FWDDECL
#endif
#undef IL2CPP_STRUCT_TimeZoneInfo_SYSTEMTIME_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeZoneInfo_SYSTEMTIME_DEFINED) && !defined(IL2CPP_STRUCT_TimeZoneInfo_SYSTEMTIME_FWDDECL)
#include <Modloader/app/structs/TimeZoneInfo_SYSTEMTIME.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeZoneInfo_SYSTEMTIME.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
