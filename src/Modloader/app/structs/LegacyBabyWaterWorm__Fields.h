#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyBabyWaterWorm__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyBabyWaterWorm__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyBabyWaterWorm__Fields_DEFINED)
#include <Modloader/app/structs/DamageOwner__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/LegacyBabyWaterWorm_BabyWaterwormState__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_DamageOwner__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_LegacyBabyWaterWorm_BabyWaterwormState__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_LegacyBabyWaterWorm__Fields_DEFINED
struct AnimationCurve;
struct GameObject;
struct SteeringForces;
struct Transform;
struct String;
struct Collider;
struct CharacterPlatformMovement;
struct DamageDealer;
struct DamageReceiver;
struct SandTrailParticles;
struct BabyWormAnimation;
struct WaterZone;
struct IBabySandWormAutoTarget;
struct HashSet_1_DamageType_;
struct IDamageReciever__Array;
struct LegacyBabyWaterWorm__Fields {
    struct DamageOwner__Fields _;
    struct AnimationCurve* SpawnSpeedCurve;
    float PatrollDuration;
    float RageMinimumTimeFromStart;
    float RageStartDistance;
    float RageStartTime;
    float RageAnticipationSpeed;
    struct AnimationCurve* RageSpeedCurve;
    float JumpOutForceMultiply;
    float JumpInForceMultiply;
    float MinJumpForceValue;
    float MaxJumpForceValue;
    float MinDashJumpForceValue;
    float MaxDashJumpForceValue;
    float BashForceValue;
    float TurnSpeed;
    float ChaseTurnSpeed;
    float MoveSpeed;
    float Acceleration;
    float Gravity;
    float AreaDamageRange;
    struct AnimationCurve* DampingCurve;
    struct GameObject* DeathEffectPrefab;
    struct GameObject* TrailEffectPrefab;
    struct GameObject* SandBurstEffect;
    struct LayerMask SolidsLayerMask;
    struct SteeringForces* AvoidanceForces;
    struct Transform* FolowTest;
    struct String* DebugState;
    struct Collider* m_collider;
    struct CharacterPlatformMovement* m_platformMovment;
    struct DamageDealer* m_damageDealer;
    struct DamageReceiver* m_damageReceiver;
    struct SandTrailParticles* m_trailEffect;
    struct BabyWormAnimation* m_animation;
    struct WaterZone* m_currentWaterZone;
    LegacyBabyWaterWorm_BabyWaterwormState__Enum m_state;

    float m_lifetime;
    float m_statetime;
    bool m_dash;
    float m_dashTimeout;
    bool m_autodash;
    bool m_bashed;
    float m_bashedTimer;
    float m_currentSpeed;
    struct Vector2 m_suspendedVelocity;
    float m_spawnStateTimeFactor;
    struct IBabySandWormAutoTarget* m_autoTarget;
    bool m_suspended;
    SuspendableMask__Enum m_suspensionMask;

    struct HashSet_1_DamageType_* m_damageImunityTypes;
    struct IDamageReciever__Array* m_damageReceivers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyBabyWaterWorm__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyBabyWaterWorm__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/BabyWormAnimation.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/DamageReceiver.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HashSet_1_DamageType_.h>
#include <Modloader/app/structs/IBabySandWormAutoTarget.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/SandTrailParticles.h>
#include <Modloader/app/structs/SteeringForces.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/WaterZone.h>
#endif
#undef IL2CPP_STRUCT_LegacyBabyWaterWorm__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyBabyWaterWorm__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyBabyWaterWorm__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyBabyWaterWorm__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyBabyWaterWorm__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
