#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandTrailParticles__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandTrailParticles__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandTrailParticles__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_SandTrailParticles__Fields_DEFINED
struct DelayedAction;
struct ParticleSystem;
struct SandTrailParticles__Fields {
    struct MonoBehaviour__Fields _;
    struct DelayedAction* StopDelay;
    struct ParticleSystem* m_particle;
    bool m_stopped;
    SuspendableMask__Enum m_suspensionMask;

    bool m_suspended;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandTrailParticles__Fields_FWDDECL)
#define IL2CPP_STRUCT_SandTrailParticles__Fields_FWDDECL
#include <Modloader/app/structs/DelayedAction.h>
#include <Modloader/app/structs/ParticleSystem.h>
#endif
#undef IL2CPP_STRUCT_SandTrailParticles__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandTrailParticles__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SandTrailParticles__Fields_FWDDECL)
#include <Modloader/app/structs/SandTrailParticles__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandTrailParticles__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
