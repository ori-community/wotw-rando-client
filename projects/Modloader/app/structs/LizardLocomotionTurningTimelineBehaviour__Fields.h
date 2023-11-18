#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LizardLocomotionTurningTimelineBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LizardLocomotionTurningTimelineBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardLocomotionTurningTimelineBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/LocomotionTurningTimelineBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_LocomotionTurningTimelineBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LizardLocomotionTurningTimelineBehaviour__Fields_DEFINED
struct GroundEntityLocomotion;
struct CharacterPlatformMovement;
struct GroundEntityMovementProcessor;
struct LizardEntity;
struct ParticleSystem;
struct LizardLocomotionTurningTimelineBehaviour__Fields {
    struct LocomotionTurningTimelineBehaviour__Fields _;
    bool StopLocomotionNearLedge;
    float MinDistanceFromLedge;
    struct GroundEntityLocomotion* m_groundLocomotion;
    struct CharacterPlatformMovement* m_platformMovement;
    struct GroundEntityMovementProcessor* m_groundMovementProcessor;
    struct LizardEntity* m_lizard;
    struct ParticleSystem* m_runningEffect;
    bool m_hasRunningEffectSpawned;
    int32_t m_requestIdForward;
    int32_t m_requestIdBackward;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LizardLocomotionTurningTimelineBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_LizardLocomotionTurningTimelineBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/GroundEntityMovementProcessor.h>
#include <Modloader/app/structs/LizardEntity.h>
#include <Modloader/app/structs/ParticleSystem.h>
#endif
#undef IL2CPP_STRUCT_LizardLocomotionTurningTimelineBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardLocomotionTurningTimelineBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LizardLocomotionTurningTimelineBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/LizardLocomotionTurningTimelineBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LizardLocomotionTurningTimelineBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
