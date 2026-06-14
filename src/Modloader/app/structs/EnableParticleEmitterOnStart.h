#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnableParticleEmitterOnStart_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnableParticleEmitterOnStart_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnableParticleEmitterOnStart_DEFINED)
#include <Modloader/app/structs/EnableParticleEmitterOnStart__Fields.h>
#if defined(IL2CPP_STRUCT_EnableParticleEmitterOnStart__Fields_DEFINED)
#define IL2CPP_STRUCT_EnableParticleEmitterOnStart_DEFINED
struct EnableParticleEmitterOnStart__Class;
struct EnableParticleEmitterOnStart {
    struct EnableParticleEmitterOnStart__Class* klass;
    MonitorData* monitor;
    struct EnableParticleEmitterOnStart__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnableParticleEmitterOnStart_FWDDECL)
#define IL2CPP_STRUCT_EnableParticleEmitterOnStart_FWDDECL
#include <Modloader/app/structs/EnableParticleEmitterOnStart__Class.h>
#endif
#undef IL2CPP_STRUCT_EnableParticleEmitterOnStart_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnableParticleEmitterOnStart_DEFINED) && !defined(IL2CPP_STRUCT_EnableParticleEmitterOnStart_FWDDECL)
#include <Modloader/app/structs/EnableParticleEmitterOnStart.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnableParticleEmitterOnStart.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
