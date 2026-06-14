#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeZoneInfo_TIME_ZONE_INFORMATION_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeZoneInfo_TIME_ZONE_INFORMATION_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeZoneInfo_TIME_ZONE_INFORMATION_DEFINED)
#include <Modloader/app/structs/TimeZoneInfo_SYSTEMTIME.h>
#if defined(IL2CPP_STRUCT_TimeZoneInfo_SYSTEMTIME_DEFINED)
#define IL2CPP_STRUCT_TimeZoneInfo_TIME_ZONE_INFORMATION_DEFINED
struct String;
struct TimeZoneInfo_TIME_ZONE_INFORMATION {
    int32_t Bias;
    struct String* StandardName;
    struct TimeZoneInfo_SYSTEMTIME StandardDate;
    int32_t StandardBias;
    struct String* DaylightName;
    struct TimeZoneInfo_SYSTEMTIME DaylightDate;
    int32_t DaylightBias;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeZoneInfo_TIME_ZONE_INFORMATION_FWDDECL)
#define IL2CPP_STRUCT_TimeZoneInfo_TIME_ZONE_INFORMATION_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TimeZoneInfo_TIME_ZONE_INFORMATION_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeZoneInfo_TIME_ZONE_INFORMATION_DEFINED) && !defined(IL2CPP_STRUCT_TimeZoneInfo_TIME_ZONE_INFORMATION_FWDDECL)
#include <Modloader/app/structs/TimeZoneInfo_TIME_ZONE_INFORMATION.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeZoneInfo_TIME_ZONE_INFORMATION.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
