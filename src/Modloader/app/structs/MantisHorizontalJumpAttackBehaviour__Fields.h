#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MantisHorizontalJumpAttackBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MantisHorizontalJumpAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MantisHorizontalJumpAttackBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MantisHorizontalJumpAttackBehaviour_State__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_MantisHorizontalJumpAttackBehaviour_State__Enum_DEFINED)
#define IL2CPP_STRUCT_MantisHorizontalJumpAttackBehaviour__Fields_DEFINED
struct MoonTimeline;
struct FloatAnimationParameter;
struct MantisJumpAttackSettings;
struct GroundEntityLocomotion;
struct PlatformMovement;
struct Rigidbody;
struct String;
struct Transform;
struct MantisGrayboxEntity;
struct GroundEntityMovementProcessor;
struct CapsuleCollider;
struct List_1_UnityEngine_Vector3_;
struct RootMotionProcessorData;
struct CharacterEnvironmentForceController;
struct BlockDamageInterruptionHandler;
struct Collider__Array;
struct MantisHorizontalJumpAttackBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonTimeline* Anticipation;
    struct MoonTimeline* TurnAnticipation;
    struct MoonTimeline* Main;
    struct MoonTimeline* PlopAnticipation;
    struct MoonTimeline* Plop;
    struct MoonTimeline* Land;
    struct FloatAnimationParameter* JumpDistanceParameter;
    struct MantisJumpAttackSettings* JumpAttackSettings;
    struct MoonTimeline* m_currentTimeline;
    struct GroundEntityLocomotion* m_locomotion;
    struct PlatformMovement* m_platformMovement;
    struct Rigidbody* m_rigidbody;
    float m_initGravity;
    float m_initMaxFallSpeed;
    float m_initDeceleration;
    struct Vector3 m_playerSmoothSpeed;
    struct Vector3 m_jumpTargetPosition;
    float m_turnDirection;
    float LandDecelerationMultiplier;
    float JumpGravity;
    float MaxFallSpeed;
    float JumpHeight;
    struct Vector2 JumpControlPoint0;
    struct Vector2 JumpControlPoint1;
    int32_t CollisionPredictionCheckSkipEvery;
    float JumpHorizontalSpeed;
    float MinJumpTime;
    float MaxJumpDistance;
    float MaxGroundCheckDistance;
    float PlopGravity;
    float PlopSpeedTransferY;
    float PlopSpeedTransferX;
    float MinPlopSpeedY;
    struct Vector2 m_prePlopSpeed;
    float GroundToPredictedTargetPositionRatio;
    struct String* MinHorizontalJumpDistance;
    float EndOfPathGravity;
    struct Transform* Head;
    struct Transform* StompPrefab;
    struct MantisGrayboxEntity* m_mantisEntity;
    struct GroundEntityMovementProcessor* m_movementProcessor;
    struct CapsuleCollider* m_collider;
    DamageWeight__Enum FallTouchDamageWeight;

    int32_t JumpCurveDivisions;
    int32_t m_currentIndexOnPath;
    struct List_1_UnityEngine_Vector3_* m_pathPoints;
    bool pathEnded;
    struct LayerMask SolidGeometryLayers;
    struct RootMotionProcessorData* RootMotion;
    bool DebugPauseOnLand;
    struct Vector3 m_lastPositionDelta;
    float m_lastFrameVerticalOffsetInAnticipation;
    float m_jumpXVelocity;
    bool m_isTurning;
    float m_cachedColliderHeight;
    bool m_StartedFalling;
    struct CharacterEnvironmentForceController* EnvironmentForceController;
    float GroundImpulse;
    MantisHorizontalJumpAttackBehaviour_State__Enum m_state;

    float m_stateTime;
    struct BlockDamageInterruptionHandler* m_blockingHandlerAnticipation;
    struct BlockDamageInterruptionHandler* m_blockingHandlerTurnAnticipation;
    struct BlockDamageInterruptionHandler* m_blockingHandlerMain;
    struct Collider__Array* m_landColiiders;
    struct Transform* DebugJumpTarget;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MantisHorizontalJumpAttackBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_MantisHorizontalJumpAttackBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/BlockDamageInterruptionHandler.h>
#include <Modloader/app/structs/CapsuleCollider.h>
#include <Modloader/app/structs/CharacterEnvironmentForceController.h>
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/GroundEntityMovementProcessor.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/MantisGrayboxEntity.h>
#include <Modloader/app/structs/MantisJumpAttackSettings.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MantisHorizontalJumpAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MantisHorizontalJumpAttackBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MantisHorizontalJumpAttackBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/MantisHorizontalJumpAttackBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MantisHorizontalJumpAttackBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
