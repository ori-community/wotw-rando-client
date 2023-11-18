#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParticleSystemAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParticleSystemAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystemAnimator__Fields_DEFINED)
#include <Modloader/app/structs/ParticleSystemAnimator_ParticlePostPlaybackBehaviour__Enum.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_ParticleSystemAnimator_ParticlePostPlaybackBehaviour__Enum_DEFINED)
#define IL2CPP_STRUCT_ParticleSystemAnimator__Fields_DEFINED
struct MoonReference_1_UnityEngine_ParticleSystem_;
struct ParticleSystem;
struct Dictionary_2_UnityEngine_ParticleSystem_System_Boolean_;
struct ICollection_1_UnityEngine_ParticleSystem_;
struct ParticleSystemAnimator__Fields {
    struct TimelineEntity__Fields _;
    ParticleSystemAnimator_ParticlePostPlaybackBehaviour__Enum PostPlaybackBehaviour;

    struct MoonReference_1_UnityEngine_ParticleSystem_* TargetParticleSystem;
    struct ParticleSystem* m_particleSystem;
    struct Dictionary_2_UnityEngine_ParticleSystem_System_Boolean_* m_emitSetup;
    struct ICollection_1_UnityEngine_ParticleSystem_* m_allParticleSystems;
    bool m_played;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParticleSystemAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_ParticleSystemAnimator__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_UnityEngine_ParticleSystem_System_Boolean_.h>
#include <Modloader/app/structs/ICollection_1_UnityEngine_ParticleSystem_.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_ParticleSystem_.h>
#include <Modloader/app/structs/ParticleSystem.h>
#endif
#undef IL2CPP_STRUCT_ParticleSystemAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystemAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ParticleSystemAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/ParticleSystemAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParticleSystemAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
