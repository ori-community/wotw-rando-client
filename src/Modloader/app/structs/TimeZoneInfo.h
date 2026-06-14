#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeZoneInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeZoneInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeZoneInfo_DEFINED)
#include <Modloader/app/structs/TimeZoneInfo__Fields.h>
#if defined(IL2CPP_STRUCT_TimeZoneInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_TimeZoneInfo_DEFINED
struct TimeZoneInfo__Class;
struct TimeZoneInfo {
    struct TimeZoneInfo__Class* klass;
    MonitorData* monitor;
    struct TimeZoneInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeZoneInfo_FWDDECL)
#define IL2CPP_STRUCT_TimeZoneInfo_FWDDECL
#include <Modloader/app/structs/TimeZoneInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_TimeZoneInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeZoneInfo_DEFINED) && !defined(IL2CPP_STRUCT_TimeZoneInfo_FWDDECL)
#include <Modloader/app/structs/TimeZoneInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeZoneInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
