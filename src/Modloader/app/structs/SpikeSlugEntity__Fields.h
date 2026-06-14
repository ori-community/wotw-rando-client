#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpikeSlugEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpikeSlugEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpikeSlugEntity__Fields_DEFINED)
#include <Modloader/app/structs/GroundMovingEntity__Fields.h>
#include <Modloader/app/structs/GroundPatrolDirectionMode__Enum.h>
#include <Modloader/app/structs/SpikeSlugEntity_SpikeSlugShellState__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_GroundMovingEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_SpikeSlugEntity_SpikeSlugShellState__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_GroundPatrolDirectionMode__Enum_DEFINED)
#define IL2CPP_STRUCT_SpikeSlugEntity__Fields_DEFINED
struct GenericSpring1D;
struct Transform;
struct MoonTimeline;
struct GameObject;
struct EntityTargetting;
struct SpikeSlugEntity_AnimsToSwap;
struct GenericSpring1D_Particle;
struct GroundEntityLocomotion;
struct SpikeSlugEntity__Fields {
    struct GroundMovingEntity__Fields _;
    SpikeSlugEntity_SpikeSlugShellState__Enum m_shellState;

    struct GenericSpring1D* ImpactSpring;
    struct Transform* ScaleTransform;
    struct Transform* ShellTransform;
    struct MoonTimeline* ShellBlockedHitTimeline;
    struct MoonTimeline* DestroyShellTimeline;
    struct GameObject* ShellPrefab;
    struct Vector2 ShellEjectStartOffset;
    float ShellEjectForce;
    struct EntityTargetting* BashableHitBox;
    struct SpikeSlugEntity_AnimsToSwap* LocomotionAnims;
    struct GenericSpring1D_Particle* m_impactSettings;
    struct Vector3 m_scaleCache;
    struct GroundEntityLocomotion* m_slugLocomotion;
    bool m_protectedByShell;
    SpikeSlugEntity_SpikeSlugShellState__Enum m_initialShellState;

    GroundPatrolDirectionMode__Enum _MovementPattern_k__BackingField;

    struct GameObject* creepPrefab;
    float creepDistance;
    float randomCreepDistance;
    struct Vector3 m_oldCreepPos;
    float m_creepDistance;
    float DeathKickbackMultiplier;
    float LightHitMutliplier;
    float MediumHitMutliplier;
    float HeavyHitMutliplier;
    float InputForceXClamp;
    struct Vector2 BashMultiplier;
    bool _ShouldIdleDuringPatrol_k__BackingField;
    struct Vector2 m_lastPosition;
    struct Vector2 m_newPosition;
    bool m_wasShelled;
    bool m_suspended;
    bool m_suspendedOnMovingPlatform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpikeSlugEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpikeSlugEntity__Fields_FWDDECL
#include <Modloader/app/structs/EntityTargetting.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GenericSpring1D.h>
#include <Modloader/app/structs/GenericSpring1D_Particle.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SpikeSlugEntity_AnimsToSwap.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpikeSlugEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpikeSlugEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpikeSlugEntity__Fields_FWDDECL)
#include <Modloader/app/structs/SpikeSlugEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpikeSlugEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
