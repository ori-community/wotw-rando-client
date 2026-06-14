#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinLeafParticles__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinLeafParticles__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLeafParticles__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/ParticleSystem_EmissionModule.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_ParticleSystem_EmissionModule_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SeinLeafParticles__Fields_DEFINED
struct ParticleSystem;
struct AnimationCurve;
struct SeinCharacter;
struct SeinLeafParticles__Fields {
    struct MonoBehaviour__Fields _;
    struct ParticleSystem* Particles;
    struct ParticleSystem* ParticlesUnderwater;
    struct AnimationCurve* ParticleRateOverSpeed;
    struct AnimationCurve* EmissionMultiplierOverDistance;
    float ParticleEmmisionRate;
    float ParticleUnderWaterEmmisionRate;
    struct SeinCharacter* m_seinCharacter;
    bool m_emission_initialized;
    struct ParticleSystem_EmissionModule m_emission;
    bool m_emissionUnderwater_initialized;
    struct ParticleSystem_EmissionModule m_emissionUnderwater;
    struct Vector3 m_lastPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinLeafParticles__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinLeafParticles__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/SeinCharacter.h>
#endif
#undef IL2CPP_STRUCT_SeinLeafParticles__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLeafParticles__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinLeafParticles__Fields_FWDDECL)
#include <Modloader/app/structs/SeinLeafParticles__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinLeafParticles__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
