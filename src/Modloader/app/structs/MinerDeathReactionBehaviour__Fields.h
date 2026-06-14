#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerDeathReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerDeathReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerDeathReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour_1_MinerEntity___Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour_1_MinerEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_MinerDeathReactionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct RootMotionProcessorData;
struct Collider;
struct Rigidbody;
struct UberTransformFollow;
struct DeathStartEffectSpawnSetting;
struct MinerFallReactionBehaviour;
struct MinerHitReactionBehaviour;
struct CharacterPlatformMovement;
struct GroundEntityLocomotion;
struct MinerDeathReactionBehaviour__Fields {
    struct EntityReactionBehaviour_1_MinerEntity___Fields _;
    struct MoonTimeline* Death;
    struct RootMotionProcessorData* RootMotionData;
    struct Collider* ShieldRagdollCollider;
    struct Rigidbody* ShieldRagdollRigidbody;
    struct UberTransformFollow* ShieldRagdollJointFollower;
    struct Vector3 ShieldRagdollForce;
    struct DeathStartEffectSpawnSetting* DeathStartEffect;
    struct MoonTimeline* m_currentTimeline;
    struct MinerFallReactionBehaviour* m_fallBehaviour;
    struct MinerHitReactionBehaviour* m_hitReactionBehaviour;
    struct CharacterPlatformMovement* m_platformMovement;
    struct GroundEntityLocomotion* m_locomotion;
    bool m_waitingForDeath;
    bool FaceAttack;
    bool ShouldWaitForDeathOnGround;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerDeathReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_MinerDeathReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/DeathStartEffectSpawnSetting.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MinerFallReactionBehaviour.h>
#include <Modloader/app/structs/MinerHitReactionBehaviour.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#include <Modloader/app/structs/UberTransformFollow.h>
#endif
#undef IL2CPP_STRUCT_MinerDeathReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerDeathReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MinerDeathReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/MinerDeathReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerDeathReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
