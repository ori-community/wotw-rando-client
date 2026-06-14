#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParticleSystem_Particle__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParticleSystem_Particle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystem_Particle__Boxed_DEFINED)
#include <Modloader/app/structs/ParticleSystem_Particle.h>
#if defined(IL2CPP_STRUCT_ParticleSystem_Particle_DEFINED)
#define IL2CPP_STRUCT_ParticleSystem_Particle__Boxed_DEFINED
struct ParticleSystem_Particle__Class;
struct ParticleSystem_Particle__Boxed {
    struct ParticleSystem_Particle__Class* klass;
    MonitorData* monitor;
    struct ParticleSystem_Particle fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParticleSystem_Particle__Boxed_FWDDECL)
#define IL2CPP_STRUCT_ParticleSystem_Particle__Boxed_FWDDECL
#include <Modloader/app/structs/ParticleSystem_Particle__Class.h>
#endif
#undef IL2CPP_STRUCT_ParticleSystem_Particle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystem_Particle__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_ParticleSystem_Particle__Boxed_FWDDECL)
#include <Modloader/app/structs/ParticleSystem_Particle__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParticleSystem_Particle__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
