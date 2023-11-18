#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormJumpAttackBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormJumpAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormJumpAttackBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_SandWormEntity___Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/SandWormJumpAttackBehaviour_State__Enum.h>
#include <Modloader/app/structs/SandWormSandDigLocomotionBehaviour_SpeedEntry.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SandWormEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_SandWormSandDigLocomotionBehaviour_SpeedEntry_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_SandWormJumpAttackBehaviour_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_SandWormJumpAttackBehaviour__Fields_DEFINED
struct Single__Array;
struct MoonVector3;
struct MoonFloat;
struct Event_1;
struct RTPC;
struct SandWormLocomotion;
struct RaycastHit__Array;
struct SandWormJumpAttackBehaviour__Fields {
    struct EntityBehaviourNode_1_SandWormEntity___Fields _;
    struct Single__Array* LandAngles;
    struct MoonVector3* EdgePosition;
    struct MoonVector3* EdgePositionNormal;
    struct MoonVector3* AttackTargetPosition;
    struct MoonFloat* LandingClearanceRadius;
    struct MoonFloat* MaxAttackAngle;
    struct MoonFloat* OptimalJumpHeight;
    float HeadSize;
    struct SandWormSandDigLocomotionBehaviour_SpeedEntry PreJumpSpeed;
    struct SandWormSandDigLocomotionBehaviour_SpeedEntry TowardsPeekPointSpeed;
    struct SandWormSandDigLocomotionBehaviour_SpeedEntry TowardsLandingPointSpeed;
    struct Event_1* DashPrepareSound;
    struct RTPC* TurnAngleRtpc;
    struct Event_1* TurnSound;
    struct SandWormLocomotion* m_wormLocomotion;
    struct Vector2 m_predictedJumpPeakPosition;
    struct Vector2 m_attackTargetPosition;
    struct Vector2 m_landMoveTarget;
    struct Vector2 m_edgePosition;
    struct Vector2 m_directionToPeakPosition;
    struct Vector2 m_directionToLandPosition;
    float m_turnAngle;
    float m_cachedHeadRotationSpeed;
    SandWormJumpAttackBehaviour_State__Enum m_state;

    struct RaycastHit__Array* m_raycastHits;
    struct LayerMask LineOfSightLayerMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandWormJumpAttackBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SandWormJumpAttackBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonVector3.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/RaycastHit__Array.h>
#include <Modloader/app/structs/SandWormLocomotion.h>
#include <Modloader/app/structs/Single__Array.h>
#endif
#undef IL2CPP_STRUCT_SandWormJumpAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormJumpAttackBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SandWormJumpAttackBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SandWormJumpAttackBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormJumpAttackBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
