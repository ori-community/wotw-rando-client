#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION_DEFINED)
#include <Modloader/app/structs/TimeZoneInfo_TIME_ZONE_INFORMATION.h>
#if defined(IL2CPP_STRUCT_TimeZoneInfo_TIME_ZONE_INFORMATION_DEFINED)
#define IL2CPP_STRUCT_TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION_DEFINED
struct String;
struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION {
    struct TimeZoneInfo_TIME_ZONE_INFORMATION TZI;
    struct String* TimeZoneKeyName;
    uint8_t DynamicDaylightTimeDisabled;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION_FWDDECL)
#define IL2CPP_STRUCT_TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION_DEFINED) && !defined(IL2CPP_STRUCT_TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION_FWDDECL)
#include <Modloader/app/structs/TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
