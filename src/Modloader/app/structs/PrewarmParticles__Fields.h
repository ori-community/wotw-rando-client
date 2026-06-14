#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PrewarmParticles__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PrewarmParticles__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrewarmParticles__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PrewarmParticles__Fields_DEFINED
struct PrewarmParticles_PrewarmParticleSystemParticle__Array;
struct PrewarmParticles__Fields {
    struct MonoBehaviour__Fields _;
    struct PrewarmParticles_PrewarmParticleSystemParticle__Array* m_particleSystemParticles;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PrewarmParticles__Fields_FWDDECL)
#define IL2CPP_STRUCT_PrewarmParticles__Fields_FWDDECL
#include <Modloader/app/structs/PrewarmParticles_PrewarmParticleSystemParticle__Array.h>
#endif
#undef IL2CPP_STRUCT_PrewarmParticles__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrewarmParticles__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PrewarmParticles__Fields_FWDDECL)
#include <Modloader/app/structs/PrewarmParticles__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PrewarmParticles__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
