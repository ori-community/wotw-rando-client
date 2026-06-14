#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MetaBallWaterZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MetaBallWaterZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MetaBallWaterZone__Fields_DEFINED)
#include <Modloader/app/structs/WaterZone__Fields.h>
#if defined(IL2CPP_STRUCT_WaterZone__Fields_DEFINED)
#define IL2CPP_STRUCT_MetaBallWaterZone__Fields_DEFINED
struct MetaballWaterBlobs;
struct AnimationCurve;
struct ParticleSystem;
struct MetaBallWaterZone__Fields {
    struct WaterZone__Fields _;
    struct MetaballWaterBlobs* MetaBallWaterBlobs;
    float ZValueThreshold;
    float InheritVelocityOnEnter;
    float InheritVelocityOnExit;
    float RadiusErrorMargin;
    struct AnimationCurve* BreakVelocityVsRadiusCurve;
    struct ParticleSystem* SplashEffect;
    float SplashParticleMultiplier;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MetaBallWaterZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_MetaBallWaterZone__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/MetaballWaterBlobs.h>
#include <Modloader/app/structs/ParticleSystem.h>
#endif
#undef IL2CPP_STRUCT_MetaBallWaterZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MetaBallWaterZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MetaBallWaterZone__Fields_FWDDECL)
#include <Modloader/app/structs/MetaBallWaterZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MetaBallWaterZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
