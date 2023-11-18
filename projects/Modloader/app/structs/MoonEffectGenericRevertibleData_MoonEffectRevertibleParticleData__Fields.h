#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Fields_DEFINED)
#include <Modloader/app/structs/ParticleSystem_MinMaxCurve.h>
#include <Modloader/app/structs/ParticleSystem_MinMaxGradient.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_ParticleSystem_MinMaxGradient_DEFINED) && defined(IL2CPP_STRUCT_ParticleSystem_MinMaxCurve_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Fields_DEFINED
struct ParticleSystem;
struct ParticleSystem_Burst__Array;
struct __declspec(align(8)) MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Fields {
    struct ParticleSystem* ParticleSystem;
    struct ParticleSystem_MinMaxGradient StartColor;
    struct ParticleSystem_MinMaxGradient ColorOverTime;
    struct ParticleSystem_MinMaxCurve StartSizeX;
    struct ParticleSystem_MinMaxCurve StartSizeY;
    struct ParticleSystem_MinMaxCurve StartSizeZ;
    int32_t MaxParticles;
    struct ParticleSystem_Burst__Array* Bursts;
    struct ParticleSystem_MinMaxCurve EmissionRateOverDistance;
    struct ParticleSystem_MinMaxCurve EmissionRateOverTime;
    struct ParticleSystem_MinMaxCurve StartSpeed;
    struct ParticleSystem_MinMaxCurve OrbitalOffsetX;
    struct ParticleSystem_MinMaxCurve OrbitalOffsetY;
    struct ParticleSystem_MinMaxCurve OrbitalOffsetZ;
    struct ParticleSystem_MinMaxCurve OrbitalX;
    struct ParticleSystem_MinMaxCurve OrbitalY;
    struct ParticleSystem_MinMaxCurve OrbitalZ;
    struct ParticleSystem_MinMaxCurve Radial;
    struct ParticleSystem_MinMaxCurve SpeedModifier;
    struct ParticleSystem_MinMaxCurve X;
    struct ParticleSystem_MinMaxCurve Y;
    struct ParticleSystem_MinMaxCurve Z;
    struct ParticleSystem_MinMaxCurve StartLifetime;
    float SimulationSpeed;
    float GravityModifierMultiplier;
    struct Vector3 ShapeScale;
    bool CollisionEnabled;
    bool SkipRevertingSpeed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Fields_FWDDECL
#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/ParticleSystem_Burst__Array.h>
#endif
#undef IL2CPP_STRUCT_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Fields_FWDDECL)
#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
