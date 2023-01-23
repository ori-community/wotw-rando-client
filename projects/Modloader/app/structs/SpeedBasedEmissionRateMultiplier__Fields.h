#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpeedBasedEmissionRateMultiplier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpeedBasedEmissionRateMultiplier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpeedBasedEmissionRateMultiplier__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SpeedBasedEmissionRateMultiplier__Fields_DEFINED
struct ParticleSystem;
struct SpeedBasedEmissionRateMultiplier__Fields {
    struct MonoBehaviour__Fields _;
    float SpeedToEmissionRelation;
    float MinRatio;
    float MaxRatio;
    float MaxAllowedSpeedOverAFrame;
    float EmissionBoostAfterUnhalt;
    struct Vector3 m_previousPosition;
    float m_originalMinEmission;
    float m_originalMaxEmission;
    float m_origianlEmission;
    struct ParticleSystem* m_particleSystem;
    bool m_shouldHaltEmission;
    float m_emissionRateBumpMultiplier;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpeedBasedEmissionRateMultiplier__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpeedBasedEmissionRateMultiplier__Fields_FWDDECL
#include <Modloader/app/structs/ParticleSystem.h>
#endif
#undef IL2CPP_STRUCT_SpeedBasedEmissionRateMultiplier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpeedBasedEmissionRateMultiplier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpeedBasedEmissionRateMultiplier__Fields_FWDDECL)
#include <Modloader/app/structs/SpeedBasedEmissionRateMultiplier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpeedBasedEmissionRateMultiplier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
