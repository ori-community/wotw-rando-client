#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParticleSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParticleSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystem_DEFINED)
#include <Modloader/app/structs/ParticleSystem__Fields.h>
#if defined(IL2CPP_STRUCT_ParticleSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_ParticleSystem_DEFINED
struct ParticleSystem__Class;
struct ParticleSystem {
    struct ParticleSystem__Class* klass;
    MonitorData* monitor;
    struct ParticleSystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParticleSystem_FWDDECL)
#define IL2CPP_STRUCT_ParticleSystem_FWDDECL
#include <Modloader/app/structs/ParticleSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_ParticleSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystem_DEFINED) && !defined(IL2CPP_STRUCT_ParticleSystem_FWDDECL)
#include <Modloader/app/structs/ParticleSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParticleSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
