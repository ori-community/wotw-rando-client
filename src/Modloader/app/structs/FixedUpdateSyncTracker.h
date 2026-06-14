#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FixedUpdateSyncTracker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FixedUpdateSyncTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedUpdateSyncTracker_DEFINED)
#include <Modloader/app/structs/FixedUpdateSyncTracker__Fields.h>
#if defined(IL2CPP_STRUCT_FixedUpdateSyncTracker__Fields_DEFINED)
#define IL2CPP_STRUCT_FixedUpdateSyncTracker_DEFINED
struct FixedUpdateSyncTracker__Class;
struct FixedUpdateSyncTracker {
    struct FixedUpdateSyncTracker__Class* klass;
    MonitorData* monitor;
    struct FixedUpdateSyncTracker__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FixedUpdateSyncTracker_FWDDECL)
#define IL2CPP_STRUCT_FixedUpdateSyncTracker_FWDDECL
#include <Modloader/app/structs/FixedUpdateSyncTracker__Class.h>
#endif
#undef IL2CPP_STRUCT_FixedUpdateSyncTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedUpdateSyncTracker_DEFINED) && !defined(IL2CPP_STRUCT_FixedUpdateSyncTracker_FWDDECL)
#include <Modloader/app/structs/FixedUpdateSyncTracker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FixedUpdateSyncTracker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
