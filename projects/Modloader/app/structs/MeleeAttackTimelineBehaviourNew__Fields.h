#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeAttackTimelineBehaviourNew__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeAttackTimelineBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeAttackTimelineBehaviourNew__Fields_DEFINED)
#include <Modloader/app/structs/DamageLayerMask__Enum.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_DamageType__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageLayerMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_MeleeAttackTimelineBehaviourNew__Fields_DEFINED
struct MoonTimeline;
struct MeleeAttackTimelineBehaviourNew_Attack__Array;
struct DamageOwner;
struct AnimationCurve;
struct GameObject;
struct RootMotionProcessorData;
struct PlayerInsideZoneChecker;
struct TimelineEventTrigger__Array;
struct Locomotion;
struct ILocomotionTurningHandler;
struct GroundEntityLocomotion;
struct MeleeAttackTimelineBehaviourNew__Fields {
    struct EntityBehaviourNode__Fields _;
    struct Vector3 _TargetPosition_k__BackingField;
    float _AnimationSpeed_k__BackingField;
    struct MoonTimeline* AttackTimeline;
    struct MoonTimeline* WallRecoil;
    struct MeleeAttackTimelineBehaviourNew_Attack__Array* Attacks;
    float DamageAmount;
    DamageType__Enum DamageType;

    DamageLayerMask__Enum DamageLayerMask;

    struct DamageOwner* DamageOwner;
    struct AnimationCurve* KickbackCurve;
    float DamageKickbackStrength;
    DamageWeight__Enum DamageWeight;

    struct GameObject* DamageReceivedEffectPrefab;
    struct GameObject* DamageBlockedEffectPrefab;
    bool LookTowardsTarget;
    struct RootMotionProcessorData* RootMotion;
    bool StopAtLedge;
    float PositionPredictionTime;
    float MinDistanceFromLedge;
    float MinDistanceFromBackLedge;
    float MinDistanceFromWall;
    float MinDistanceFromBackWall;
    float m_distanceFromFrontEdge;
    float m_distanceFromBackEdge;
    bool m_frontEdgeEndsWithWall;
    bool m_backEdgeEndsWithWall;
    struct PlayerInsideZoneChecker* AttackZoneChecker;
    struct Vector2 InsideAreaRootMultiplier;
    bool PauseTree;
    struct TimelineEventTrigger__Array* PauseBehaviourTreeEvents;
    struct Locomotion* m_locomotion;
    struct ILocomotionTurningHandler* m_turningHandler;
    struct Vector2 m_targetDir;
    int32_t m_damageID;
    bool m_interruptable;
    bool m_recoiled;
    struct GroundEntityLocomotion* m_groundLocomotion;
    bool m_shouldReturnSucess;
    bool m_shouldReturnFaliure;
    float m_recoilColliderMinGroundDistance;
    int32_t m_standingOnLedge;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeAttackTimelineBehaviourNew__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeleeAttackTimelineBehaviourNew__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/MeleeAttackTimelineBehaviourNew_Attack__Array.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#include <Modloader/app/structs/TimelineEventTrigger__Array.h>
#endif
#undef IL2CPP_STRUCT_MeleeAttackTimelineBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeAttackTimelineBehaviourNew__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeleeAttackTimelineBehaviourNew__Fields_FWDDECL)
#include <Modloader/app/structs/MeleeAttackTimelineBehaviourNew__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeAttackTimelineBehaviourNew__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
