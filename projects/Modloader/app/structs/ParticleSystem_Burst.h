#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParticleSystem_Burst_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParticleSystem_Burst_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystem_Burst_DEFINED)
#include <Modloader/app/structs/ParticleSystem_MinMaxCurve.h>
#if defined(IL2CPP_STRUCT_ParticleSystem_MinMaxCurve_DEFINED)
#define IL2CPP_STRUCT_ParticleSystem_Burst_DEFINED
struct ParticleSystem_Burst {
    float m_Time;
    struct ParticleSystem_MinMaxCurve m_Count;
    int32_t m_RepeatCount;
    float m_RepeatInterval;
    float m_InvProbability;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParticleSystem_Burst_FWDDECL)
#define IL2CPP_STRUCT_ParticleSystem_Burst_FWDDECL
#endif
#undef IL2CPP_STRUCT_ParticleSystem_Burst_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystem_Burst_DEFINED) && !defined(IL2CPP_STRUCT_ParticleSystem_Burst_FWDDECL)
#include <Modloader/app/structs/ParticleSystem_Burst.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParticleSystem_Burst.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
