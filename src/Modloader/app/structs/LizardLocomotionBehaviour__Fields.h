#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LizardLocomotionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LizardLocomotionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardLocomotionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/LocomotionGroundMoveTimelineBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_LocomotionGroundMoveTimelineBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LizardLocomotionBehaviour__Fields_DEFINED
struct LizardEntity;
struct ParticleSystem;
struct CharacterPlatformMovement;
struct LizardLocomotionBehaviour__Fields {
    struct LocomotionGroundMoveTimelineBehaviour__Fields _;
    struct LizardEntity* m_lizard;
    struct ParticleSystem* m_runningEffect;
    bool m_hasRunningEffectSpawned;
    struct CharacterPlatformMovement* m_platformMovement;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LizardLocomotionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_LizardLocomotionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/LizardEntity.h>
#include <Modloader/app/structs/ParticleSystem.h>
#endif
#undef IL2CPP_STRUCT_LizardLocomotionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardLocomotionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LizardLocomotionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/LizardLocomotionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LizardLocomotionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
