#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DetachOnKill__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DetachOnKill__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DetachOnKill__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_DetachOnKill__Fields_DEFINED
struct ParticleSystem;
struct DetachOnKill__Fields {
    struct MonoBehaviour__Fields _;
    bool LimitLifetime;
    bool StopParticleEmission;
    float LifetimeLimit;
    float m_minEmit;
    float m_maxEmit;
    float m_emit;
    struct ParticleSystem* m_particleSystem;
    bool m_killed;
    float m_countDown;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DetachOnKill__Fields_FWDDECL)
#define IL2CPP_STRUCT_DetachOnKill__Fields_FWDDECL
#include <Modloader/app/structs/ParticleSystem.h>
#endif
#undef IL2CPP_STRUCT_DetachOnKill__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DetachOnKill__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DetachOnKill__Fields_FWDDECL)
#include <Modloader/app/structs/DetachOnKill__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DetachOnKill__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
