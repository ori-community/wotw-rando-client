#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberTypeTracker_IDerivedTypeTracker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberTypeTracker_IDerivedTypeTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberTypeTracker_IDerivedTypeTracker_DEFINED)
#define IL2CPP_STRUCT_UberTypeTracker_IDerivedTypeTracker_DEFINED
struct UberTypeTracker_IDerivedTypeTracker__Class;
struct UberTypeTracker_IDerivedTypeTracker {
    struct UberTypeTracker_IDerivedTypeTracker__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UberTypeTracker_IDerivedTypeTracker_FWDDECL)
#define IL2CPP_STRUCT_UberTypeTracker_IDerivedTypeTracker_FWDDECL
#include <Modloader/app/structs/UberTypeTracker_IDerivedTypeTracker__Class.h>
#endif
#undef IL2CPP_STRUCT_UberTypeTracker_IDerivedTypeTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberTypeTracker_IDerivedTypeTracker_DEFINED) && !defined(IL2CPP_STRUCT_UberTypeTracker_IDerivedTypeTracker_FWDDECL)
#include <Modloader/app/structs/UberTypeTracker_IDerivedTypeTracker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberTypeTracker_IDerivedTypeTracker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
