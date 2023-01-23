#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParticleSystem_Particle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParticleSystem_Particle_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystem_Particle_DEFINED)
#include <Modloader/app/structs/Color32.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Color32_DEFINED)
#define IL2CPP_STRUCT_ParticleSystem_Particle_DEFINED
struct ParticleSystem_Particle {
    struct Vector3 m_Position;
    struct Vector3 m_Velocity;
    struct Vector3 m_AnimatedVelocity;
    struct Vector3 m_InitialVelocity;
    struct Vector3 m_AxisOfRotation;
    struct Vector3 m_Rotation;
    struct Vector3 m_AngularVelocity;
    struct Vector3 m_StartSize;
    struct Color32 m_StartColor;
    uint32_t m_RandomSeed;
    float m_Lifetime;
    float m_StartLifetime;
    float m_EmitAccumulator0;
    float m_EmitAccumulator1;
    uint32_t m_Flags;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParticleSystem_Particle_FWDDECL)
#define IL2CPP_STRUCT_ParticleSystem_Particle_FWDDECL
#endif
#undef IL2CPP_STRUCT_ParticleSystem_Particle_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystem_Particle_DEFINED) && !defined(IL2CPP_STRUCT_ParticleSystem_Particle_FWDDECL)
#include <Modloader/app/structs/ParticleSystem_Particle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParticleSystem_Particle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
