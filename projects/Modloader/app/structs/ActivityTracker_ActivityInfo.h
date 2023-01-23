#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivityTracker_ActivityInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivityTracker_ActivityInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivityTracker_ActivityInfo_DEFINED)
#include <Modloader/app/structs/ActivityTracker_ActivityInfo__Fields.h>
#if defined(IL2CPP_STRUCT_ActivityTracker_ActivityInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_ActivityTracker_ActivityInfo_DEFINED
struct ActivityTracker_ActivityInfo__Class;
struct ActivityTracker_ActivityInfo {
    struct ActivityTracker_ActivityInfo__Class* klass;
    MonitorData* monitor;
    struct ActivityTracker_ActivityInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivityTracker_ActivityInfo_FWDDECL)
#define IL2CPP_STRUCT_ActivityTracker_ActivityInfo_FWDDECL
#include <Modloader/app/structs/ActivityTracker_ActivityInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_ActivityTracker_ActivityInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivityTracker_ActivityInfo_DEFINED) && !defined(IL2CPP_STRUCT_ActivityTracker_ActivityInfo_FWDDECL)
#include <Modloader/app/structs/ActivityTracker_ActivityInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivityTracker_ActivityInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
