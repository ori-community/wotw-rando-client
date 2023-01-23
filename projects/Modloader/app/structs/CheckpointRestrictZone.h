#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CheckpointRestrictZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CheckpointRestrictZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_CheckpointRestrictZone_DEFINED)
#include <Modloader/app/structs/CheckpointRestrictZone__Fields.h>
#if defined(IL2CPP_STRUCT_CheckpointRestrictZone__Fields_DEFINED)
#define IL2CPP_STRUCT_CheckpointRestrictZone_DEFINED
struct CheckpointRestrictZone__Class;
struct CheckpointRestrictZone {
    struct CheckpointRestrictZone__Class* klass;
    MonitorData* monitor;
    struct CheckpointRestrictZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CheckpointRestrictZone_FWDDECL)
#define IL2CPP_STRUCT_CheckpointRestrictZone_FWDDECL
#include <Modloader/app/structs/CheckpointRestrictZone__Class.h>
#endif
#undef IL2CPP_STRUCT_CheckpointRestrictZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_CheckpointRestrictZone_DEFINED) && !defined(IL2CPP_STRUCT_CheckpointRestrictZone_FWDDECL)
#include <Modloader/app/structs/CheckpointRestrictZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CheckpointRestrictZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
