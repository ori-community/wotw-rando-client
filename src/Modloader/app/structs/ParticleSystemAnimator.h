#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParticleSystemAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParticleSystemAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystemAnimator_DEFINED)
#include <Modloader/app/structs/ParticleSystemAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_ParticleSystemAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_ParticleSystemAnimator_DEFINED
struct ParticleSystemAnimator__Class;
struct ParticleSystemAnimator {
    struct ParticleSystemAnimator__Class* klass;
    MonitorData* monitor;
    struct ParticleSystemAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParticleSystemAnimator_FWDDECL)
#define IL2CPP_STRUCT_ParticleSystemAnimator_FWDDECL
#include <Modloader/app/structs/ParticleSystemAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_ParticleSystemAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystemAnimator_DEFINED) && !defined(IL2CPP_STRUCT_ParticleSystemAnimator_FWDDECL)
#include <Modloader/app/structs/ParticleSystemAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParticleSystemAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
