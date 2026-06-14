#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParticlesSuspendable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParticlesSuspendable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticlesSuspendable_DEFINED)
#include <Modloader/app/structs/ParticlesSuspendable__Fields.h>
#if defined(IL2CPP_STRUCT_ParticlesSuspendable__Fields_DEFINED)
#define IL2CPP_STRUCT_ParticlesSuspendable_DEFINED
struct ParticlesSuspendable__Class;
struct ParticlesSuspendable {
    struct ParticlesSuspendable__Class* klass;
    MonitorData* monitor;
    struct ParticlesSuspendable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParticlesSuspendable_FWDDECL)
#define IL2CPP_STRUCT_ParticlesSuspendable_FWDDECL
#include <Modloader/app/structs/ParticlesSuspendable__Class.h>
#endif
#undef IL2CPP_STRUCT_ParticlesSuspendable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticlesSuspendable_DEFINED) && !defined(IL2CPP_STRUCT_ParticlesSuspendable_FWDDECL)
#include <Modloader/app/structs/ParticlesSuspendable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParticlesSuspendable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
