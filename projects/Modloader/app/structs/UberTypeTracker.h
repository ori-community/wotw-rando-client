#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberTypeTracker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberTypeTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberTypeTracker_DEFINED)
#define IL2CPP_STRUCT_UberTypeTracker_DEFINED
struct UberTypeTracker__Class;
struct UberTypeTracker {
    struct UberTypeTracker__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UberTypeTracker_FWDDECL)
#define IL2CPP_STRUCT_UberTypeTracker_FWDDECL
#include <Modloader/app/structs/UberTypeTracker__Class.h>
#endif
#undef IL2CPP_STRUCT_UberTypeTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberTypeTracker_DEFINED) && !defined(IL2CPP_STRUCT_UberTypeTracker_FWDDECL)
#include <Modloader/app/structs/UberTypeTracker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberTypeTracker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
