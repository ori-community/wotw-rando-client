#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_LaserShooterEntity___Fields.h>
#include <Modloader/app/structs/LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum.h>
#include <Modloader/app/structs/Quaternion.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_LaserShooterEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED) && defined(IL2CPP_STRUCT_LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum_DEFINED)
#define IL2CPP_STRUCT_LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Fields_DEFINED
struct Transform;
struct MoonTimeline;
struct ProjectileSpawner;
struct LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Fields {
    struct EntityBehaviourNode_1_LaserShooterEntity___Fields _;
    struct Transform* Rotation;
    struct MoonTimeline* AnticTimeline;
    struct MoonTimeline* ProjectileShootTimeline;
    struct MoonTimeline* ResolveTimeline;
    struct MoonTimeline* PulseAdditive;
    int32_t ShootCycles;
    struct ProjectileSpawner* ProjectileSpawner;
    struct Quaternion m_targetRotation;
    struct MoonTimeline* m_currentTimeline;
    LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum m_state;

    float m_timeInState;
    int32_t m_cyclesPlayed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ProjectileSpawner.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
