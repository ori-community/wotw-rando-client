#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParticleSystem_EmitParams_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParticleSystem_EmitParams_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystem_EmitParams_DEFINED)
#include <Modloader/app/structs/ParticleSystem_Particle.h>
#if defined(IL2CPP_STRUCT_ParticleSystem_Particle_DEFINED)
#define IL2CPP_STRUCT_ParticleSystem_EmitParams_DEFINED
struct ParticleSystem_EmitParams {
    struct ParticleSystem_Particle m_Particle;
    bool m_PositionSet;
    bool m_VelocitySet;
    bool m_AxisOfRotationSet;
    bool m_RotationSet;
    bool m_AngularVelocitySet;
    bool m_StartSizeSet;
    bool m_StartColorSet;
    bool m_RandomSeedSet;
    bool m_StartLifetimeSet;
    bool m_ApplyShapeToPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParticleSystem_EmitParams_FWDDECL)
#define IL2CPP_STRUCT_ParticleSystem_EmitParams_FWDDECL
#endif
#undef IL2CPP_STRUCT_ParticleSystem_EmitParams_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystem_EmitParams_DEFINED) && !defined(IL2CPP_STRUCT_ParticleSystem_EmitParams_FWDDECL)
#include <Modloader/app/structs/ParticleSystem_EmitParams.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParticleSystem_EmitParams.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
