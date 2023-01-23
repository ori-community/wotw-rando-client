#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenTimeTracker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenTimeTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenTimeTracker_DEFINED)
#include <Modloader/app/structs/ScreenTimeTracker__Fields.h>
#if defined(IL2CPP_STRUCT_ScreenTimeTracker__Fields_DEFINED)
#define IL2CPP_STRUCT_ScreenTimeTracker_DEFINED
struct ScreenTimeTracker__Class;
struct ScreenTimeTracker {
    struct ScreenTimeTracker__Class* klass;
    MonitorData* monitor;
    struct ScreenTimeTracker__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScreenTimeTracker_FWDDECL)
#define IL2CPP_STRUCT_ScreenTimeTracker_FWDDECL
#include <Modloader/app/structs/ScreenTimeTracker__Class.h>
#endif
#undef IL2CPP_STRUCT_ScreenTimeTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenTimeTracker_DEFINED) && !defined(IL2CPP_STRUCT_ScreenTimeTracker_FWDDECL)
#include <Modloader/app/structs/ScreenTimeTracker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenTimeTracker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
