#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IScreenTimeTracker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IScreenTimeTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_IScreenTimeTracker_DEFINED)
#define IL2CPP_STRUCT_IScreenTimeTracker_DEFINED
struct IScreenTimeTracker__Class;
struct IScreenTimeTracker {
    struct IScreenTimeTracker__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IScreenTimeTracker_FWDDECL)
#define IL2CPP_STRUCT_IScreenTimeTracker_FWDDECL
#include <Modloader/app/structs/IScreenTimeTracker__Class.h>
#endif
#undef IL2CPP_STRUCT_IScreenTimeTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_IScreenTimeTracker_DEFINED) && !defined(IL2CPP_STRUCT_IScreenTimeTracker_FWDDECL)
#include <Modloader/app/structs/IScreenTimeTracker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IScreenTimeTracker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
