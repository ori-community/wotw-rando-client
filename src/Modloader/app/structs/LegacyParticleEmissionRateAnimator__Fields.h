#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyParticleEmissionRateAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyParticleEmissionRateAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyParticleEmissionRateAnimator__Fields_DEFINED)
#include <Modloader/app/structs/LegacyAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyParticleEmissionRateAnimator__Fields_DEFINED
struct ParticleSystem;
struct LegacyParticleEmissionRateAnimator__Fields {
    struct LegacyAnimator__Fields _;
    struct ParticleSystem* m_particleSystem;
    float m_startMinEmission;
    float m_startMaxEmission;
    float m_startEmission;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyParticleEmissionRateAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyParticleEmissionRateAnimator__Fields_FWDDECL
#include <Modloader/app/structs/ParticleSystem.h>
#endif
#undef IL2CPP_STRUCT_LegacyParticleEmissionRateAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyParticleEmissionRateAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyParticleEmissionRateAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyParticleEmissionRateAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyParticleEmissionRateAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
