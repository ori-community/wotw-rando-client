#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SyncParticleSystems_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SyncParticleSystems_INITIALIZING
#if !defined(IL2CPP_STRUCT_SyncParticleSystems_DEFINED)
#include <Modloader/app/structs/SyncParticleSystems__Fields.h>
#if defined(IL2CPP_STRUCT_SyncParticleSystems__Fields_DEFINED)
#define IL2CPP_STRUCT_SyncParticleSystems_DEFINED
struct SyncParticleSystems__Class;
struct SyncParticleSystems {
    struct SyncParticleSystems__Class* klass;
    MonitorData* monitor;
    struct SyncParticleSystems__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SyncParticleSystems_FWDDECL)
#define IL2CPP_STRUCT_SyncParticleSystems_FWDDECL
#include <Modloader/app/structs/SyncParticleSystems__Class.h>
#endif
#undef IL2CPP_STRUCT_SyncParticleSystems_INITIALIZING
#if !defined(IL2CPP_STRUCT_SyncParticleSystems_DEFINED) && !defined(IL2CPP_STRUCT_SyncParticleSystems_FWDDECL)
#include <Modloader/app/structs/SyncParticleSystems.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SyncParticleSystems.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
