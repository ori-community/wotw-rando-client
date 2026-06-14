#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReplayValidator_Snapshot_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReplayValidator_Snapshot_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayValidator_Snapshot_DEFINED)
#include <Modloader/app/structs/ReplayValidator_Snapshot__Fields.h>
#if defined(IL2CPP_STRUCT_ReplayValidator_Snapshot__Fields_DEFINED)
#define IL2CPP_STRUCT_ReplayValidator_Snapshot_DEFINED
struct ReplayValidator_Snapshot__Class;
struct ReplayValidator_Snapshot {
    struct ReplayValidator_Snapshot__Class* klass;
    MonitorData* monitor;
    struct ReplayValidator_Snapshot__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReplayValidator_Snapshot_FWDDECL)
#define IL2CPP_STRUCT_ReplayValidator_Snapshot_FWDDECL
#include <Modloader/app/structs/ReplayValidator_Snapshot__Class.h>
#endif
#undef IL2CPP_STRUCT_ReplayValidator_Snapshot_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayValidator_Snapshot_DEFINED) && !defined(IL2CPP_STRUCT_ReplayValidator_Snapshot_FWDDECL)
#include <Modloader/app/structs/ReplayValidator_Snapshot.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReplayValidator_Snapshot.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
