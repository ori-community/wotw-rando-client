#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeTrackerForMoonGuid_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeTrackerForMoonGuid_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeTrackerForMoonGuid_DEFINED)
#include <Modloader/app/structs/TimeTrackerForMoonGuid__Fields.h>
#if defined(IL2CPP_STRUCT_TimeTrackerForMoonGuid__Fields_DEFINED)
#define IL2CPP_STRUCT_TimeTrackerForMoonGuid_DEFINED
struct TimeTrackerForMoonGuid__Class;
struct TimeTrackerForMoonGuid {
    struct TimeTrackerForMoonGuid__Class* klass;
    MonitorData* monitor;
    struct TimeTrackerForMoonGuid__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeTrackerForMoonGuid_FWDDECL)
#define IL2CPP_STRUCT_TimeTrackerForMoonGuid_FWDDECL
#include <Modloader/app/structs/TimeTrackerForMoonGuid__Class.h>
#endif
#undef IL2CPP_STRUCT_TimeTrackerForMoonGuid_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeTrackerForMoonGuid_DEFINED) && !defined(IL2CPP_STRUCT_TimeTrackerForMoonGuid_FWDDECL)
#include <Modloader/app/structs/TimeTrackerForMoonGuid.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeTrackerForMoonGuid.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
