#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBossEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBossEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossEntity__Fields_DEFINED)
#include <Modloader/app/structs/EnemyEntity__Fields.h>
#include <Modloader/app/structs/SpiderBossLocationZone__Enum.h>
#if defined(IL2CPP_STRUCT_EnemyEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_SpiderBossLocationZone__Enum_DEFINED)
#define IL2CPP_STRUCT_SpiderBossEntity__Fields_DEFINED
struct SerializedIntUberState;
struct Transform;
struct DamageReceiver;
struct MovingPlatformController;
struct GameObject;
struct Action;
struct EntityPlaceholderScalingLink;
struct SoundHost;
struct SpiderBossLocationZoneCageMetaData;
struct SpiderBossBehaviourGroup__Array;
struct TimelineEntityTask;
struct EntityTask;
struct List_1_Moon_BehaviourSystem_CooldownDecorator_;
struct AnimationCurve;
struct SpiderBossBaseBehaviour__Array;
struct List_1_SpiderBossBaseBehaviour_;
struct SpiderBossBaseBehaviour;
struct Dictionary_2_SpiderBossBaseBehaviour_SpiderBossEntity_ExecuteAttackInfo_;
struct HitFlash3D;
struct AnimationPostprocess;
struct VerletPhysicsAnimationPostprocess;
struct IUberState__Array;
struct SpiderBossEntity__Fields {
    struct EnemyEntity__Fields _;
    struct SerializedIntUberState* BossUberState;
    struct Transform* EscapeSequenceRespawn;
    struct DamageReceiver* HeadDamageReceiver;
    struct Transform* LaserTransform;
    struct Transform* LaserReferenceTransform;
    struct MovingPlatformController* Platforms;
    struct GameObject* FrontDamageDealers;
    struct GameObject* FrontDamageReceivers;
    float HealthPercentageToTransitionToBreakWall;
    float HealthPercentageToTransitionToEscape;
    float HealthPercentageToTransitionToDarkness;
    float HealthPercentageToTransitionToEnd;
    struct Action* OnDamageReceivedDelegate;
    struct EntityPlaceholderScalingLink* ScalingLink;
    struct SoundHost* MainSoundHost;
    struct SpiderBossLocationZoneCageMetaData* LocationZones;
    struct SpiderBossBehaviourGroup__Array* BehaviourCageGroups;
    struct TimelineEntityTask* IntroCinematicBehaviour;
    struct EntityTask* EscapeCinematicBehaviour;
    struct EntityTask* BreakWallCinematicBehaviour;
    struct TimelineEntityTask* ReachedArena2CinematicBehaviour;
    struct TimelineEntityTask* EnableDarknessCinematicBehaviour;
    struct List_1_Moon_BehaviourSystem_CooldownDecorator_* ResetCooldowns;
    float Arena1WallBrokenTimeScaleMultiplier;
    float Arena2TimeScaleMultiplier;
    float DarknessTimeScaleMultiplier;
    struct AnimationCurve* DamageRequiredForStaggerCurve;
    float m_timeSinceLastHitReact;
    float m_accumulatedHitDamage;
    bool m_isInHitAccumulationWindow;
    bool m_isInHitReactionAllowedWindow;
    struct SpiderBossBaseBehaviour__Array* m_spiderBehaviours;
    struct AnimationCurve* SpecialAttackChanceMultiplierOverTime;
    float m_timeSinceLastSpecialAttack;
    struct List_1_SpiderBossBaseBehaviour_* m_executingBehaviours;
    struct SpiderBossBaseBehaviour* m_lastBehaviour;
    struct Dictionary_2_SpiderBossBaseBehaviour_SpiderBossEntity_ExecuteAttackInfo_* m_lastSpecialBehaviours;
    SpiderBossLocationZone__Enum ForcedLocationZone;

    struct HitFlash3D* HeadFlash;
    struct GameObject* FrontLegsAttackImpactEffectPrefab;
    struct GameObject* HitEffectPrefab;
    struct Transform* Root;
    struct Transform* FrontLeftLegPosition;
    struct Transform* FrontRightLegPosition;
    struct Transform* FrontLeftLegKneePosition;
    struct Transform* FrontRightLegKneePosition;
    struct Transform* FrontLeftLegPosition2D;
    struct Transform* FrontRightLegPosition2D;
    struct Transform* FrontLeftLegGroundPosition2D;
    struct Transform* FrontRightLegGroundPosition2D;
    struct Transform* CameraShakePosition;
    float RootResetLerpTime;
    struct AnimationPostprocess* HeadIK;
    struct AnimationPostprocess* LeftClawIK;
    struct AnimationPostprocess* RightClawIK;
    struct VerletPhysicsAnimationPostprocess* TendrilsPostProcess;
    struct Transform* AcidSprayTransform;
    struct Transform* SmushTransform;
    struct Transform* SmushTransform2D;
    struct Transform* Arena2StartCheckpointPosition;
    struct IUberState__Array* m_affectingUberStates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBossEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBossEntity__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/AnimationPostprocess.h>
#include <Modloader/app/structs/DamageReceiver.h>
#include <Modloader/app/structs/Dictionary_2_SpiderBossBaseBehaviour_SpiderBossEntity_ExecuteAttackInfo_.h>
#include <Modloader/app/structs/EntityPlaceholderScalingLink.h>
#include <Modloader/app/structs/EntityTask.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HitFlash3D.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_CooldownDecorator_.h>
#include <Modloader/app/structs/List_1_SpiderBossBaseBehaviour_.h>
#include <Modloader/app/structs/MovingPlatformController.h>
#include <Modloader/app/structs/SerializedIntUberState.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SpiderBossBaseBehaviour.h>
#include <Modloader/app/structs/SpiderBossBaseBehaviour__Array.h>
#include <Modloader/app/structs/SpiderBossBehaviourGroup__Array.h>
#include <Modloader/app/structs/SpiderBossLocationZoneCageMetaData.h>
#include <Modloader/app/structs/TimelineEntityTask.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess.h>
#endif
#undef IL2CPP_STRUCT_SpiderBossEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBossEntity__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBossEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBossEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
