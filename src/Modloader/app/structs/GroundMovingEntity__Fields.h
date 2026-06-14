#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroundMovingEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroundMovingEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundMovingEntity__Fields_DEFINED)
#include <Modloader/app/structs/EnemyEntity__Fields.h>
#if defined(IL2CPP_STRUCT_EnemyEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_GroundMovingEntity__Fields_DEFINED
struct GroundEntityLocomotion;
struct SoundProvider;
struct AnimationCurve;
struct EntityBehaviour__Array;
struct Transform;
struct CharacterPlatformMovement;
struct Collider__Array;
struct GroundMovingEntity__Fields {
    struct EnemyEntity__Fields _;
    struct GroundEntityLocomotion* m_groundLocomotion;
    struct SoundProvider* FootstepsSounds;
    struct AnimationCurve* SoundsPerSecondOverSpeed;
    struct EntityBehaviour__Array* BehavioursWithFootsteps;
    float m_nextStepTime;
    struct Transform* m_transform;
    struct CharacterPlatformMovement* m_platformMovemt;
    bool m_isIgnoringPlatforms;
    struct Collider__Array* m_overlappedColliders;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroundMovingEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_GroundMovingEntity__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/EntityBehaviour__Array.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_GroundMovingEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundMovingEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GroundMovingEntity__Fields_FWDDECL)
#include <Modloader/app/structs/GroundMovingEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroundMovingEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
