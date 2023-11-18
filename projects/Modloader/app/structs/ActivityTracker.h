#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivityTracker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivityTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivityTracker_DEFINED)
#include <Modloader/app/structs/ActivityTracker__Fields.h>
#if defined(IL2CPP_STRUCT_ActivityTracker__Fields_DEFINED)
#define IL2CPP_STRUCT_ActivityTracker_DEFINED
struct ActivityTracker__Class;
struct ActivityTracker {
    struct ActivityTracker__Class* klass;
    MonitorData* monitor;
    struct ActivityTracker__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivityTracker_FWDDECL)
#define IL2CPP_STRUCT_ActivityTracker_FWDDECL
#include <Modloader/app/structs/ActivityTracker__Class.h>
#endif
#undef IL2CPP_STRUCT_ActivityTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivityTracker_DEFINED) && !defined(IL2CPP_STRUCT_ActivityTracker_FWDDECL)
#include <Modloader/app/structs/ActivityTracker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivityTracker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
