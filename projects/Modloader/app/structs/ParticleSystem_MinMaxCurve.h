#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParticleSystem_MinMaxCurve_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParticleSystem_MinMaxCurve_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystem_MinMaxCurve_DEFINED)
#include <Modloader/app/structs/ParticleSystemCurveMode__Enum.h>
#if defined(IL2CPP_STRUCT_ParticleSystemCurveMode__Enum_DEFINED)
#define IL2CPP_STRUCT_ParticleSystem_MinMaxCurve_DEFINED
struct AnimationCurve;
struct ParticleSystem_MinMaxCurve {
    ParticleSystemCurveMode__Enum m_Mode;

    float m_CurveMultiplier;
    struct AnimationCurve* m_CurveMin;
    struct AnimationCurve* m_CurveMax;
    float m_ConstantMin;
    float m_ConstantMax;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParticleSystem_MinMaxCurve_FWDDECL)
#define IL2CPP_STRUCT_ParticleSystem_MinMaxCurve_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#undef IL2CPP_STRUCT_ParticleSystem_MinMaxCurve_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystem_MinMaxCurve_DEFINED) && !defined(IL2CPP_STRUCT_ParticleSystem_MinMaxCurve_FWDDECL)
#include <Modloader/app/structs/ParticleSystem_MinMaxCurve.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParticleSystem_MinMaxCurve.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
