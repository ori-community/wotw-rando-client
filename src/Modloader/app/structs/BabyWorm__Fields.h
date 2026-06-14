#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BabyWorm__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BabyWorm__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabyWorm__Fields_DEFINED)
#include <Modloader/app/structs/BabyWorm_AimMode__Enum.h>
#include <Modloader/app/structs/BabyWorm_BabySandwormState__Enum.h>
#include <Modloader/app/structs/DamageOwner__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_DamageOwner__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_BabyWorm_BabySandwormState__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_BabyWorm_AimMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_BabyWorm__Fields_DEFINED
struct SoundBankEntry;
struct AnimationCurve;
struct GameObject;
struct SoundHost;
struct RTPC;
struct Event_1;
struct SteeringForces;
struct Transform;
struct Collider;
struct CharacterPlatformMovement;
struct BabyWormDamageDealer;
struct DamageReceiver;
struct BabyWormAnimation;
struct IBabyWormAutoTarget;
struct MoonTimeline;
struct HashSet_1_DamageType_;
struct IDamageReciever__Array;
struct BabyWorm__Fields {
    struct DamageOwner__Fields _;
    struct SoundBankEntry* SoundBank;
    struct AnimationCurve* SpawnSpeedCurve;
    float PatrollDuration;
    float RageMinimumTimeFromStart;
    float PatrolMinimumTimeFromStart;
    float RageStartDistance;
    float RageStartTime;
    float RageAnticipationSpeed;
    struct AnimationCurve* RageSpeedCurve;
    float RageStartAngle;
    float JumpOutForceMultiply;
    float JumpInForceMultiply;
    float MinJumpForceValue;
    float MaxJumpForceValue;
    float MinDashJumpForceValue;
    float MaxDashJumpForceValue;
    float BashForceValue;
    float TurnSpeed;
    float ChaseTurnSpeed;
    float AnticTurnSpeed;
    float DashTurnSpeed;
    float MoveSpeed;
    float Acceleration;
    float Gravity;
    float AutoDestroyTime;
    float AreaDamageRange;
    struct AnimationCurve* DampingCurve;
    struct GameObject* DeathEffectPrefabInsideZone;
    struct GameObject* DeathEffectPrefabOutsideZone;
    struct GameObject* SandBurstEffect;
    struct SoundHost* SoundHost;
    struct RTPC* SpeedRTPC;
    struct Event_1* StartDigEvent;
    struct Event_1* StopDigEvent;
    struct RTPC* TurnAngleRTPC;
    struct Event_1* SharpTurnEvent;
    float SharpTurnAngleThreshold;
    struct LayerMask SolidsLayerMask;
    struct LayerMask ContactExplosionMask;
    struct SteeringForces* AvoidanceForces;
    struct Transform* FolowTest;
    struct Collider* m_collider;
    struct CharacterPlatformMovement* m_platformMovment;
    struct BabyWormDamageDealer* m_damageDealer;
    struct DamageReceiver* m_damageReceiver;
    struct BabyWormAnimation* m_animation;
    BabyWorm_BabySandwormState__Enum m_state;

    float m_lifetime;
    float m_statetime;
    bool m_dashStarted;
    float m_dashTimeout;
    bool m_autodash;
    bool m_bashed;
    bool m_wasDigZoneValid;
    float m_lastbashTimer;
    float m_currentSpeed;
    struct Vector2 m_lastDirection;
    struct Vector2 m_lastDesiredDirection;
    struct Vector2 m_suspendedVelocity;
    float m_spawnStateTimeFactor;
    struct IBabyWormAutoTarget* m_autoTarget;
    BabyWorm_AimMode__Enum TestAimMode;

    struct Vector2 m_lockedTargetDirection;
    struct MoonTimeline* ShowAimEffect;
    bool m_suspended;
    SuspendableMask__Enum m_suspensionMask;

    struct HashSet_1_DamageType_* m_damageImunityTypes;
    struct IDamageReciever__Array* m_damageReceivers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BabyWorm__Fields_FWDDECL)
#define IL2CPP_STRUCT_BabyWorm__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/BabyWormAnimation.h>
#include <Modloader/app/structs/BabyWormDamageDealer.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/DamageReceiver.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HashSet_1_DamageType_.h>
#include <Modloader/app/structs/IBabyWormAutoTarget.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/SoundBankEntry.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SteeringForces.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_BabyWorm__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabyWorm__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BabyWorm__Fields_FWDDECL)
#include <Modloader/app/structs/BabyWorm__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BabyWorm__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
