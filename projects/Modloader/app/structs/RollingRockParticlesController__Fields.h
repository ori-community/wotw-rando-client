#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RollingRockParticlesController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RollingRockParticlesController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RollingRockParticlesController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_RollingRockParticlesController__Fields_DEFINED
struct ParticleSystem;
struct Rigidbody;
struct RollingRockParticlesController__Fields {
    struct MonoBehaviour__Fields _;
    struct ParticleSystem* ParticleSystem;
    float m_emitterMax;
    float m_emitterMin;
    float m_emitterRate;
    float MinVelocity;
    float MaxVelocity;
    struct Rigidbody* m_rigidbody;
    float m_startTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RollingRockParticlesController__Fields_FWDDECL)
#define IL2CPP_STRUCT_RollingRockParticlesController__Fields_FWDDECL
#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_RollingRockParticlesController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RollingRockParticlesController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RollingRockParticlesController__Fields_FWDDECL)
#include <Modloader/app/structs/RollingRockParticlesController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RollingRockParticlesController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
