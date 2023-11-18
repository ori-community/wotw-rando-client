#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParticleSystemVelocityAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParticleSystemVelocityAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystemVelocityAnimator__Fields_DEFINED)
#include <Modloader/app/structs/ParticleSystemAnimator_1__Fields.h>
#if defined(IL2CPP_STRUCT_ParticleSystemAnimator_1__Fields_DEFINED)
#define IL2CPP_STRUCT_ParticleSystemVelocityAnimator__Fields_DEFINED
struct AnimationCurve;
struct ParticleSystemVelocityAnimator__Fields {
    struct ParticleSystemAnimator_1__Fields _;
    struct AnimationCurve* VelocityCurve;
    float m_originalVelocityMin;
    float m_originalVelocityMax;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParticleSystemVelocityAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_ParticleSystemVelocityAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#undef IL2CPP_STRUCT_ParticleSystemVelocityAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystemVelocityAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ParticleSystemVelocityAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/ParticleSystemVelocityAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParticleSystemVelocityAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
