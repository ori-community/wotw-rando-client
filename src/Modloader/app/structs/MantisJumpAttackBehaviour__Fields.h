#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MantisJumpAttackBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MantisJumpAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MantisJumpAttackBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#include <Modloader/app/structs/MantisJumpAttackBehaviour_JumpCountType__Enum.h>
#include <Modloader/app/structs/MantisJumpAttackBehaviour_State__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_MantisJumpAttackBehaviour_JumpCountType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_MantisJumpAttackBehaviour_State__Enum_DEFINED)
#define IL2CPP_STRUCT_MantisJumpAttackBehaviour__Fields_DEFINED
struct MoonTimeline;
struct MantisJumpAttackSettings;
struct GroundEntityLocomotion;
struct CharacterPlatformMovement;
struct RootMotionProcessorData;
struct Transform;
struct MantisGrayboxEntity;
struct GroundEntityMovementProcessor;
struct CharacterEnvironmentForceController;
struct BlockDamageInterruptionHandler;
struct MantisJumpAttackBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    MantisJumpAttackBehaviour_JumpCountType__Enum AttackType;

    struct MoonTimeline* Anticipation;
    struct MoonTimeline* TurnAnticipation;
    struct MoonTimeline* Main;
    struct MoonTimeline* Land;
    struct MoonTimeline* LandAndJump;
    struct MoonTimeline* TurnLandAndJump;
    struct MantisJumpAttackSettings* JumpAttackSettings;
    struct MantisJumpAttackSettings* MidJumpAttackSettings;
    struct MoonTimeline* MidJumpLandEffect;
    struct MoonTimeline* LastJumpLandEffect;
    struct MoonTimeline* m_currentTimeline;
    struct GroundEntityLocomotion* m_locomotion;
    struct CharacterPlatformMovement* m_platformMovement;
    float m_initGravity;
    float m_initDeceleration;
    struct Vector3 m_playerSmoothSpeed;
    struct Vector2 m_jumpSpeed;
    bool m_jumpDirectionRight;
    float m_turnDirection;
    float LandDecelerationMultiplier;
    float ShortJumpHeight;
    float JumpHeight1;
    float JumpDistance1;
    float JumpHeight2;
    float JumpDistance2;
    float JumpHeight3;
    float JumpDistance3;
    float Gravity;
    float MaxFallSpeed;
    float Acceleration;
    struct RootMotionProcessorData* RootMotion;
    struct Transform* StompPrefab;
    struct MantisGrayboxEntity* m_mantisEntity;
    struct GroundEntityMovementProcessor* m_movementProcessor;
    float m_lastFrameVerticalOffsetInAnticipation;
    bool m_isTurning;
    struct Vector3 m_targetPosition;
    int32_t m_totalJumps;
    float m_initMaxFallSpeed;
    struct Vector2 m_lastVelocity;
    bool m_tookOffTheGround;
    DamageWeight__Enum FallTouchDamageWeight;

    struct CharacterEnvironmentForceController* EnvironmentForceController;
    float GroundImpulse;
    bool DebugPauseOnLand;
    MantisJumpAttackBehaviour_State__Enum m_state;

    float m_stateTime;
    struct BlockDamageInterruptionHandler* m_blockingHandlerAnticipation;
    struct BlockDamageInterruptionHandler* m_blockingHandlerTurnAnticipation;
    struct BlockDamageInterruptionHandler* m_blockingHandlerMain;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MantisJumpAttackBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_MantisJumpAttackBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/BlockDamageInterruptionHandler.h>
#include <Modloader/app/structs/CharacterEnvironmentForceController.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/GroundEntityMovementProcessor.h>
#include <Modloader/app/structs/MantisGrayboxEntity.h>
#include <Modloader/app/structs/MantisJumpAttackSettings.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MantisJumpAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MantisJumpAttackBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MantisJumpAttackBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/MantisJumpAttackBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MantisJumpAttackBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
