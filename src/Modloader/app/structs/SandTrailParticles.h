#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandTrailParticles_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandTrailParticles_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandTrailParticles_DEFINED)
#include <Modloader/app/structs/SandTrailParticles__Fields.h>
#if defined(IL2CPP_STRUCT_SandTrailParticles__Fields_DEFINED)
#define IL2CPP_STRUCT_SandTrailParticles_DEFINED
struct SandTrailParticles__Class;
struct SandTrailParticles {
    struct SandTrailParticles__Class* klass;
    MonitorData* monitor;
    struct SandTrailParticles__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandTrailParticles_FWDDECL)
#define IL2CPP_STRUCT_SandTrailParticles_FWDDECL
#include <Modloader/app/structs/SandTrailParticles__Class.h>
#endif
#undef IL2CPP_STRUCT_SandTrailParticles_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandTrailParticles_DEFINED) && !defined(IL2CPP_STRUCT_SandTrailParticles_FWDDECL)
#include <Modloader/app/structs/SandTrailParticles.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandTrailParticles.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
