#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeZone_DEFINED)
#define IL2CPP_STRUCT_TimeZone_DEFINED
struct TimeZone__Class;
struct TimeZone {
    struct TimeZone__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TimeZone_FWDDECL)
#define IL2CPP_STRUCT_TimeZone_FWDDECL
#include <Modloader/app/structs/TimeZone__Class.h>
#endif
#undef IL2CPP_STRUCT_TimeZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeZone_DEFINED) && !defined(IL2CPP_STRUCT_TimeZone_FWDDECL)
#include <Modloader/app/structs/TimeZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
