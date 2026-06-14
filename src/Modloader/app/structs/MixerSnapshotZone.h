#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MixerSnapshotZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MixerSnapshotZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_MixerSnapshotZone_DEFINED)
#include <Modloader/app/structs/MixerSnapshotZone__Fields.h>
#if defined(IL2CPP_STRUCT_MixerSnapshotZone__Fields_DEFINED)
#define IL2CPP_STRUCT_MixerSnapshotZone_DEFINED
struct MixerSnapshotZone__Class;
struct MixerSnapshotZone {
    struct MixerSnapshotZone__Class* klass;
    MonitorData* monitor;
    struct MixerSnapshotZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MixerSnapshotZone_FWDDECL)
#define IL2CPP_STRUCT_MixerSnapshotZone_FWDDECL
#include <Modloader/app/structs/MixerSnapshotZone__Class.h>
#endif
#undef IL2CPP_STRUCT_MixerSnapshotZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_MixerSnapshotZone_DEFINED) && !defined(IL2CPP_STRUCT_MixerSnapshotZone_FWDDECL)
#include <Modloader/app/structs/MixerSnapshotZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MixerSnapshotZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
