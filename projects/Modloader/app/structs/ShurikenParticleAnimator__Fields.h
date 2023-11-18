#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShurikenParticleAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShurikenParticleAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShurikenParticleAnimator__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_ShurikenParticleAnimator__Fields_DEFINED
struct List_1_ParticleSystemAnimator_;
struct ParticleSystem;
struct ShurikenParticleAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct List_1_ParticleSystemAnimator_* Animators;
    struct ParticleSystem* m_particleSystem;
    bool m_startedPlayback;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShurikenParticleAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShurikenParticleAnimator__Fields_FWDDECL
#include <Modloader/app/structs/List_1_ParticleSystemAnimator_.h>
#include <Modloader/app/structs/ParticleSystem.h>
#endif
#undef IL2CPP_STRUCT_ShurikenParticleAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShurikenParticleAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShurikenParticleAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/ShurikenParticleAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShurikenParticleAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
